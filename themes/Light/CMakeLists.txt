cmake_minimum_required(VERSION 4.0.1)
project(Dark VERSION 0.1 LANGUAGES CXX)

find_package(Qt6 REQUIRED COMPONENTS Quick Qml)

qt_standard_project_setup(REQUIRES 6.9.0)

qt_add_qml_module(Light
    URI kawaii.Light
    VERSION 1.0
    # Note: All js scripts must have .mjs extension
    # and included under QML_FILES and NOT SOURCES thx
    QML_FILES
        Main.qml
        Front/Menu.qml
        Front/Auth.qml
        Back/extras.mjs
    SOURCES
        # Add more sources | Not AI generated comment btw ^_^
    RESOURCE_PREFIX
        /Light # Prefix MUST match theme name (Case Sensitive)
    OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/qml
)
