#include "cpp_utils.h"
#include "qurl.h"

extern "C" {
#include <libavformat/avformat.h>
#include <libavcodec/avcodec.h>
}

CppUtils* CppUtils::create(QQmlApplicationEngine *qml_engine){
    CppUtils* result = new CppUtils();

    return result;
}

double CppUtils::calc_width_for_src(const QString& path, double height) const {
    AVFormatContext* fmt_ctx = nullptr;
    const char* filename = path.toUtf8().constData();

    if (avformat_open_input(&fmt_ctx, filename, nullptr, nullptr) < 0) {
        qWarning("Could not open source file.");
        return 0;
    }

    if (avformat_find_stream_info(fmt_ctx, nullptr) < 0) {
        qWarning("Could not find stream information.");
        avformat_close_input(&fmt_ctx);
        return 0;
    }

    AVCodecParameters* codecpar = nullptr;
    int video_stream_index = -1;

    for (unsigned int i = 0; i < fmt_ctx->nb_streams; i++) {
        if (fmt_ctx->streams[i]->codecpar->codec_type == AVMEDIA_TYPE_VIDEO) {
            codecpar = fmt_ctx->streams[i]->codecpar;
            video_stream_index = i;
            break;
        }
    }

    if (!codecpar) {
        qWarning("No video stream found.");
        avformat_close_input(&fmt_ctx);
        return 0;
    }

    int src_width = codecpar->width;
    int src_height = codecpar->height;

    avformat_close_input(&fmt_ctx);

    if (src_height == 0) {
        qWarning("Invalid source video height.");
        return 0;
    }

    return height * ((double)src_width / src_height);
}
