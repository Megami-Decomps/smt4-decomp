#ifndef SMT4_UTIL_FUN_0029D644_H
#define SMT4_UTIL_FUN_0029D644_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif
/* Reads or forwards the state of an object (0 when its disabled flag at 0x62 is set). */
u32 FUN_0029d644(const void *object);
#ifdef __cplusplus
}
#endif

#endif
