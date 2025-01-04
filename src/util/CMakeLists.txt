file(GLOB SOURCES "*.cc")

add_library(util STATIC ${SOURCES})
target_include_directories(util PRIVATE ${PROJECT_SOURCE_DIR}/stc)
