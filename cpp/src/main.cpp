#include <iostream>
#include <string>
#include <chrono>

#include "authentication/authenticator.h"
#include "time-constantizer/time-constantizer.h"

int main() {
	Authenticator<TimeConstantizer> authenticator;
	std::string username;
	std::string password;

	auto start = std::chrono::steady_clock::now();
	std::cout << authenticator.authenticate(username, password) << std::endl;
	auto end = std::chrono::steady_clock::now();

	std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << " ms" << std::endl;
}
