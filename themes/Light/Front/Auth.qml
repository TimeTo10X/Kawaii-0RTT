import QtQuick
import QtQuick.Window
import kawaii.kawaii_loader
import QtMultimedia

Item {
    Rectangle {
        id: bg_rect

        width: root.width
        height: root.height

        color: "#18181b"

        Video {
            height: parent.height
            width: height * 1.8
            anchors.centerIn: parent
            autoPlay: true
            loops: MediaPlayer.Infinite

            source: "file:///home/akzestia/Downloads/witch-journey.3840x2160.mp4"
        }

        z: -1
    }

    TextInput {
        id: user_name
    }

    TextInput {
        id: user_pswd
    }
}
