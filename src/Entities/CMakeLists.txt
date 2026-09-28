# src/Entities/CMakeLists.txt
file(GLOB_RECURSE ENTITY_SOURCES CMAKE_CONFIGURE_DEPENDS
	"${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/*.h"
)

add_library(Entities STATIC ${ENTITY_SOURCES})

# expone directorio Entities para que otros modulos puedan incluir sus headers
target_include_directories(Entities PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_features(Entities PUBLIC cxx_std_20)