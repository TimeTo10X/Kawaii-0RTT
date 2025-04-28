#ifndef CPP_UTILS_X
#define CPP_UTILS_X

#include "QQmlApplicationEngine"
#include "QtQmlIntegration/qqmlintegration.h"
#include "qobject.h"
#include "qtmetamacros.h"

class CppUtils : public QObject {
    Q_OBJECT
    QML_SINGLETON
    QML_ELEMENT

    Q_PROPERTY(double scale_factor MEMBER m_scale_factor NOTIFY scaleFactorChanged)

   signals:
    void scaleFactorChanged();

   public:
    static CppUtils* create(QQmlApplicationEngine* qml_engine);

   private:
    double m_scale_factor;
};

#endif  // CPP_UTILS_X
