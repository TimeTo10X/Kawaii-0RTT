#include "kawaii_loader.h"

#include "qlogging.h"

KawaiiLoader* KawaiiLoader::create(QQmlApplicationEngine *qml_engine){
    KawaiiLoader* result = new KawaiiLoader();

    result->m_qml_engine = qml_engine;

    return result;
}

void KawaiiLoader::change_view(const QString& view) {
    qDebug() << "Chnaged View" << view;
    m_current_view = view;
    emit currentViewChanged();
}
