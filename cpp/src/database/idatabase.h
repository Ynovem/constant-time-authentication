#pragma once

#include <string>

class IDatabase {
	public:
		virtual ~IDatabase() = 0;
		virtual bool queryUser(std::string) = 0;
};

inline IDatabase::~IDatabase() = default;
