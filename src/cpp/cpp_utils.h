#ifndef CPP_UTILS_X
#define CPP_UTILS_X

#include "QtQmlIntegration/qqmlintegration.h"
#include "qobject.h"
#include "qtmetamacros.h"

class CppUtils : public QObject {
    Q_OBJECT
    QML_SINGLETON
    QML_ELEMENT

  public:
};

#endif  // CPP_UTILS_X
