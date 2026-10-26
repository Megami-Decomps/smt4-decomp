/* FUN_00187168.h */
#ifndef INCLUDE_UTIL_FUN_00187168_H
#define INCLUDE_UTIL_FUN_00187168_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif
/* Whether bit 0 of the flags word at 0x130 of `state` is set; a missing state counts as clear. */
u32 FUN_00187168(const void *state);
#ifdef __cplusplus
}
#endif

#endif
