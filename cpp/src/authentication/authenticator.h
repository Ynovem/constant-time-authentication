#pragma once

#include "iauthenticator.h"

template<class Deferrer>
class Authenticator final: public IAuthenticator {
	public:
		Authenticator() = default;
		~Authenticator() final = default;

		bool authenticate(std::string username, std::string password) final {
			Deferrer deferrer;
			return true;
		}
};
