add_library(authenticator
	authenticator.cpp
)

target_include_directories(authenticator
	INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
)
