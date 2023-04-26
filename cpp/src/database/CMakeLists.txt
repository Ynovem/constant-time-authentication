add_library(database
	dummy-database.cpp
)

target_include_directories(database
	INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
)
