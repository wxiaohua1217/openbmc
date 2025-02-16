#pragma once
#include <iostream>
#ifdef RACKMON_SYSLOG
#include <openbmc/syslog.hpp>
static thread_local std::ostream& log_error = openbmc::syslog_error;
static thread_local std::ostream& log_warn = openbmc::syslog_warn;
static thread_local std::ostream& log_info = openbmc::syslog_notice;
#else
static thread_local std::ostream& log_error = std::cerr;
static thread_local std::ostream& log_info = std::cout;
static thread_local std::ostream& log_warn = std::cout;
#endif
