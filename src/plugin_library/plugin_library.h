#ifndef PLUGIN_LIBRARY_X
#define PLUGIN_LIBRARY_X

#include "QtQmlIntegration/qqmlintegration.h"
#include "qobject.h"
#include "qtmetamacros.h"

class PluginLibrary : public QObject {
    Q_OBJECT
    QML_ELEMENT
    QML_SINGLETON

  public:
};

#endif  // PLUGIN_LIBRARY_X
