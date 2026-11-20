#ifndef SYS_PROCESSRESULT_H
#define SYS_PROCESSRESULT_H

#include "common.h"

extern "C" {
/* Record the result of the completed process or filesystem operation. */
void processResultSetValue(u32 value);
void processResultSetValue(u32 value);
}

#ifdef __cplusplus
extern "C" {
#endif

bool contentUnmount(void);

#ifdef __cplusplus
}
#endif

#endif
