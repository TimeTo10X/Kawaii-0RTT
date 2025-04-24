#ifndef KAWAII_LOADER_X
#define KAWAII_LOADER_X

#include <QObject>

#include "QtQmlIntegration/qqmlintegration.h"
#include "qjsengine.h"
#include "qobject.h"
#include "qqmlapplicationengine.h"
#include "qqmlengine.h"
#include "qtmetamacros.h"

class KawaiiLoader : public QObject {
    Q_OBJECT
    QML_ELEMENT
    QML_SINGLETON

    Q_PROPERTY(QString current_view MEMBER m_current_view NOTIFY currentViewChanged)
  signals:
    void currentViewChanged();
  public:
    static KawaiiLoader* create(QQmlApplicationEngine* qml_engine);

    Q_INVOKABLE void change_view(const QString& view);

  private:
    QQmlApplicationEngine* m_qml_engine = nullptr;
    QString m_current_view;
};

#endif  // KAWAII_LOADER_X
