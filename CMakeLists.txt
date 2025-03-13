cmake_minimum_required(VERSION "3.28")

project("vizard"
  DESCRIPTION "An open-source browser with vi movement"
  HOMEPAGE_URL "https://github.com/TheSoeren/vizard"
  VERSION "0.0.1"
  LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable("_vizard"
  "src/main.cpp"
)

#[============================================================================[
# HTML Rendering Engine linking
#]============================================================================]
find_library(LEXBOR_LIBRARY NAMES liblexbor)
target_link_libraries(_vizard ${LEXBOR_LIBRARY})

#[============================================================================[
# Qt setup and linking
#]============================================================================]
find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

#[============================================================================[
# Subdirectories
#]============================================================================]
add_subdirectory(src/app)
