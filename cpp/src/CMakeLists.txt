add_subdirectory(time-constantizer)
add_subdirectory(database)
add_subdirectory(authentication)

add_executable(constant-time-authentication-cpp-example
	main.cpp
)

#[[
target_link_libraries(constant-time-authentication-cpp-example
	PRIVATE authenticator
	PRIVATE time-constantizer
)
]]
