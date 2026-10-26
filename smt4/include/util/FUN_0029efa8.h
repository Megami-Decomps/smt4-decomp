#ifndef SMT4_UTIL_FUN_0029EFA8_H
#define SMT4_UTIL_FUN_0029EFA8_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif
/* Reads or updates the state of an object (0 when its disabled flag at 0x62 is set). */
u32 FUN_0029efa8(const void *object);
#ifdef __cplusplus
}
#endif

#endif
