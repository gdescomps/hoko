cmake_minimum_required(VERSION 3.1.0)

project(DisplayImg)
# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)
# Create code from a list of Qt designer ui files
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH ~/Qt/5.12.0/gcc_64/lib/cmake/Qt5Widgets/)

# Find the QtWidgets library
find_package(Qt5Widgets CONFIG REQUIRED)
find_package( OpenCV REQUIRED )

include_directories( ${OpenCV_INCLUDE_DIRS} )


# Populate a CMake variable with the sources
set(HoKo_SRCS
	Interface/Fenetres/FenetreModifier.cpp
	Interface/Fenetres/FenetreModifier.h
	Interface/Fenetres/FenetreModifier.ui
	Interface/InterfacePrincipale.cpp
    Interface/InterfacePrincipale.h
    Interface/InterfacePrincipale.ui
    main.cpp
)
# Tell CMake to create the helloworld executable
add_executable(HoKo WIN32 ${HoKo_SRCS})
# Use the Widgets module from Qt 5
target_link_libraries(HoKo Qt5::Widgets ${OpenCV_LIBS})