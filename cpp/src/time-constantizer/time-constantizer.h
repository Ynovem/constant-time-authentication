#pragma once

#include <chrono>
#include <thread>

namespace {
using namespace std::chrono_literals;
}

class TimeConstantizer {
	private:

	public:
		explicit TimeConstantizer(std::chrono::milliseconds desiredRuntime = 1000ms)
			: deadline(std::chrono::steady_clock::now() + desiredRuntime)
		{
		}

		~TimeConstantizer()
		{
			std::this_thread::sleep_until(deadline);
		}

	private:
		std::chrono::time_point<std::chrono::steady_clock> deadline;
};
