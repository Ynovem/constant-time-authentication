#pragma once

#include <string>

class IAuthenticator {
	public:
		virtual ~IAuthenticator() = 0;
		virtual bool authenticate(std::string username, std::string password) = 0;
};

inline IAuthenticator::~IAuthenticator() = default;
