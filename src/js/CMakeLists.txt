cmake_minimum_required(VERSION 4.0.1)
project(js_utils VERSION 0.1 LANGUAGES CXX)

qt_standard_project_setup(REQUIRES 6.9.0)

qt_add_qml_module(js_utils
    URI kawaii.js_utils
    VERSION 1.0
    # Note: All js scripts must have .mjs extension
    # and included under QML_FILES and NOT SOURCES thx
    QML_FILES
        js_utils.mjs
    SOURCES
        # Add more sources | Not AI generated comment btw ^_^
    RESOURCE_PREFIX
        /js_utils
    OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/qml
)
