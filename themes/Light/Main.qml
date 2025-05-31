import QtQuick
import QtQuick.Window
import kawaii.kawaii_loader

// qrc:/Light/kawaii/Light/
import "Back/extras.mjs" as Extras

Window {
    id: root

    maximumWidth: 400
    minimumWidth: 400
    maximumHeight: 550
    minimumHeight: 550

    property bool is_main: false

    color: "transparent"

    visible: true
    title: qsTr("Login")

    Loader {
        anchors.fill: parent
        source: Kawaii_loader.current_view
    }

    Rectangle {
        width: 100
        height: 100
        color: "cyan"
        anchors.bottom: parent.bottom

        MouseArea {
            anchors.fill: parent

            onClicked: {
                const context = Extras.provide_loader_context();
                console.log(context.Menu);

                if (!root.is_main) {
                    Kawaii_loader.change_view(context.Menu);
                    root.is_main = true;
                } else {
                    Kawaii_loader.change_view(context.Auth);
                    root.is_main = false;
                }
            }
        }
    }
}
