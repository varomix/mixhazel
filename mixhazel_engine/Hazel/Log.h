//
// Created by varomix on 12/22/21.
//

#ifndef MIXHAZEL_MIXHAZEL_ENGINE_HAZEL_LOG_H_
#define MIXHAZEL_MIXHAZEL_ENGINE_HAZEL_LOG_H_

#include "spdlog/spdlog.h"

namespace MixHazel {
    class Log {
     public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger> &GetCoreLogger() { return s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger> &GetClientLogger() { return s_ClientLogger; }

     private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;

    };
}

// Core log macros
#define MHZ_CORE_TRACE(...) ::MixHazel::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define MHZ_CORE_INFO(...)  ::MixHazel::Log::GetCoreLogger()->info(__VA_ARGS__)
#define MHZ_CORE_WARN(...)  ::MixHazel::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define MHZ_CORE_ERROR(...) ::MixHazel::Log::GetCoreLogger()->error(__VA_ARGS__)
#define MHZ_CORE_FATAL(...) ::MixHazel::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define MHZ_TRACE(...) ::MixHazel::Log::GetClientLogger()->trace(__VA_ARGS__)
#define MHZ_INFO(...)  ::MixHazel::Log::GetClientLogger()->info(__VA_ARGS__)
#define MHZ_WARN(...)  ::MixHazel::Log::GetClientLogger()->warn(__VA_ARGS__)
#define MHZ_ERROR(...) ::MixHazel::Log::GetClientLogger()->error(__VA_ARGS__)
#define MHZ_FATAL(...) ::MixHazel::Log::GetClientLogger()->fatal(__VA_ARGS__)

#endif //MIXHAZEL_MIXHAZEL_ENGINE_HAZEL_LOG_H_
