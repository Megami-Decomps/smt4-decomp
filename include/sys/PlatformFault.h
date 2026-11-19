#ifndef SYS_PLATFORMFAULT_H
#define SYS_PLATFORMFAULT_H

#include "common.h"

/* Report a failure and the caller's PC. Some checks also pass the failure bit;
 * the reporter itself only consumes the first two arguments. */
extern "C" void sysReportCheckFailure(s32 result, u32 location, ...);

#endif
