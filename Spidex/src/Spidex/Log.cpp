#include "Log.h"

namespace Spidex {

	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_CliantLogger;

	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");
		s_CoreLogger = spdlog::stdout_color_mt("SPIDEX");
		s_CoreLogger->set_level(spdlog::level::trace);
		s_CliantLogger = spdlog::stdout_color_mt("APP");
		s_CliantLogger->set_level(spdlog::level::trace);
	}
}