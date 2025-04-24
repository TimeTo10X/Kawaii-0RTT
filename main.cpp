#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "qqml.h"
#include <QtQml/qqmlregistration.h>
#include "src/kawaii_loader/kawaii_loader.h"
#include <QtWebEngineQuick/QtWebEngineQuick>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.addImportPath("qrc:/Dark");
    engine.addImportPath("qrc:/js_utils");

    QScopedPointer<KawaiiLoader> kawaii_loader(KawaiiLoader::create(&engine));
    kawaii_loader->change_view("Front/Auth.qml");

    qmlRegisterSingletonInstance("kawaii.kawaii_loader", 1, 0, "Kawaii_loader", kawaii_loader.get());

    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("kawaii.Dark", "Main");

    return app.exec();
}
