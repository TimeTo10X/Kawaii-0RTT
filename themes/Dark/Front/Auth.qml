import QtQuick
import QtQuick.Window
import kawaii.kawaii_loader

Item {
    Rectangle {
        id: bg_rect

        width: root.width
        height: root.height

        color: "cyan"

        z: -1
    }

    TextInput {
        id: user_name
    }

    TextInput {
        id: user_pswd
    }
}
