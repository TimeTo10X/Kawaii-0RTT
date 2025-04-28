#ifndef KAWAII_CLIENT_X
#define KAWAII_CLIENT_X

#include <QObject>
#include "QtQmlIntegration/qqmlintegration.h"

class KawaiClient : public QObject {
    Q_OBJECT
    QML_SINGLETON
    QML_ELEMENT
   public:
   private:
};

#endif  // KAWAII_CLIENT_X
