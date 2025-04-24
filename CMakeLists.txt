cmake_minimum_required(VERSION 4.0.1)
project(kawaii VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3")
# set(CMAKE_CXX_COMPILER "clang++")

find_package(Qt6 REQUIRED COMPONENTS Quick WebEngineQuick)

qt_standard_project_setup(REQUIRES 6.9.0)

qt_add_executable(appkawaii
    main.cpp
)

qt_add_qml_module(appkawaii
    URI kawaii
    VERSION 1.0
    QML_FILES
        Main.qml
)

add_subdirectory(themes/Dark)
add_subdirectory(src)

set_target_properties(appkawaii PROPERTIES
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appkawaii
    PRIVATE
        Qt6::Quick
        Qt6::WebEngineQuick
        Dark
        kawaii_loader
        js_utils
)

include(GNUInstallDirs)
install(TARGETS appkawaii
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
