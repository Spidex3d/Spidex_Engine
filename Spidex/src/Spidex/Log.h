#pragma once
#include <memory>
#include "Core.h"
#include <spdlog\spdlog.h>
#include <spdlog\sinks\stdout_color_sinks.h>
#include <spdlog\sinks\basic_file_sink.h>

namespace Spidex {
	class SPIDEX_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetCliantLogger() { return s_CliantLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_CliantLogger;
		

	};
}
// Core Log Macros
#define SPX_CORE_TRACE(...) ::Spidex::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SPX_CORE_INFO(...)  ::Spidex::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SPX_CORE_WARN(...)  ::Spidex::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SPX_CORE_ERROR(...) ::Spidex::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SPX_CORE_CRITICAL(...) ::Spidex::Log::GetCoreLogger()->critical(__VA_ARGS__)
// Cliant Log macros
#define SPX_TRACE(...)      ::Spidex::Log::GetCliantLogger()->trace(__VA_ARGS__)
#define SPX_INFO(...)       ::Spidex::Log::GetCliantLogger()->info(__VA_ARGS__)
#define SPX_WARN(...)       ::Spidex::Log::GetCliantLogger()->warn(__VA_ARGS__)
#define SPX_ERROR(...)      ::Spidex::Log::GetCliantLogger()->error(__VA_ARGS__)
#define SPX_CRITICAL(...)      ::Spidex::Log::GetCliantLogger()->critical(__VA_ARGS__)
