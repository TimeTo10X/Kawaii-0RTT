
### Qrc pathes :D

The following will probably save u some time

if u have
```cmake
qt_add_qml_module(js_utils
    URI kawaii.js_utils
    VERSION 1.0
    # Note: All js scripts must have .mjs extension
    # and included under QML_FILES and NOT SOURCES thx
    QML_FILES
        scale.mjs
    SOURCES
        # Add more sources | Not AI generated comment btw ^_^
    RESOURCE_PREFIX
        /js_utils
    OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/qml
)
```
The `qrc:/` for this will be the following -> `qrc:/js_utils/kawaii/js_utils/scale.mjs`
qrc:/{mirrored uri}/{resource_prefix}/{path_u_specified}
