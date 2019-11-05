#ifndef UCS_LOG_HPP
#define UCS_LOG_HPP

#include <string>

#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/spdlog.h>

namespace ucs {
namespace log {

/*
int test() {
  spdlog::warn("Easy padding in numbers like {:08d}", 12);
  spdlog::critical(
      "Support for int: {0:d};  hex: {0:x};  oct: {0:o}; bin: {0:b}", 42);
  spdlog::info("Support for floats {:03.2f}", 1.23456);
  spdlog::info("Positional args are {1} {0}..", "too", "supported");
  spdlog::info("{:<30}", "left aligned");

  spdlog::set_level(spdlog::level::debug); // Set global log level to debug
  spdlog::debug("This message should be displayed..");
  spdlog::set_pattern("[%H:%M:%S %z] [%n] [%^---%L---%$] [thread %t] %v");

  // define SPDLOG_ACTIVE_LEVEL to desired level
  SPDLOG_TRACE("Some trace message with param {}", {});
  SPDLOG_DEBUG("Some debug message");

  auto file_logger = spdlog::basic_logger_mt("basic_logger", "ucs.log");
  spdlog::set_default_logger(file_logger);
  return 1;
}
*/

template <typename... Args> void debug(std::string fmt, const Args &... args) {
  spdlog::debug(fmt, args...);
}

template <typename... Args> void info(std::string fmt, const Args &... args) {
  spdlog::info(fmt, args...);
}

template <typename... Args> void error(std::string fmt, const Args &... args) {
  spdlog::error(fmt, args...);
}

template <typename... Args> void warn(std::string fmt, const Args &... args) {
  spdlog::warn(fmt, args...);
}

template <typename... Args>
void critical(std::string fmt, const Args &... args) {
  spdlog::critical(fmt, args...);
}

// TODO implement enum for level
inline void setLevelDebug() { spdlog::set_level(spdlog::level::debug); }

} // namespace log
} // namespace ucs

#endif