/* Whether a game flag's stored value is greater than zero. */
#ifndef GAMEDATA_FLAGVALUEISPOSITIVE_H
#define GAMEDATA_FLAGVALUEISPOSITIVE_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Whether the value of flag `index` is greater than zero. */
u8 flagValueIsPositive(s32 index);

/* Forwards to flagValueIsPositive: armlink NOPed the tail call to the next function. */
u8 flagValueIsPositiveForward(s32 index);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
