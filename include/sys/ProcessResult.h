#ifndef SYS_PROCESSRESULT_H
#define SYS_PROCESSRESULT_H

#include "common.h"

extern "C" {
/* Record the result of the completed process or filesystem operation. */
void FUN_002c3510(u32 value);
void FUN_0013ebd8(u32 value);
}

#ifdef __cplusplus
extern "C" {
#endif

bool FUN_00103d48(void);

#ifdef __cplusplus
}
#endif

#endif
