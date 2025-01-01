file(GLOB SOURCES "*.cc")

add_library(generator STATIC ${SOURCES})
target_include_directories(generator PRIVATE ${PROJECT_SOURCE_DIR}/stc)
