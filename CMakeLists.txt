cmake_minimum_required(VERSION "3.28")

project("vizard"
  DESCRIPTION "An open-source browser with vi movement"
  HOMEPAGE_URL "TODO"
  VERSION "0.0.1"
  LANGUAGES CXX
)

add_executable("_vizard"
  "src/main.cpp"
)

#[============================================================================[
# HTML Rendering Engine
#]============================================================================]
find_library(LEXBOR_LIBRARY NAMES liblexbor.so PATHS /usr/lib/x86_64-linux-gnu)

if (LEXBOR_LIBRARY)
    target_link_libraries(_vizard ${LEXBOR_LIBRARY})
else()
    message(FATAL_ERROR "liblexbor.so not found!")
endif()

