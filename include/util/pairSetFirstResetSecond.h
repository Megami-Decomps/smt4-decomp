/* pairSetFirstResetSecond.h */
#ifndef INCLUDE_UTIL_PAIRSETFIRSTRESETSECOND_H
#define INCLUDE_UTIL_PAIRSETFIRSTRESETSECOND_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif
/* Sets the word at 0x04 of `object` (a sprite's animation selection) to `first` and the word at
 * 0x08 to -1. */
void pairSetFirstResetSecond(void *object, u32 first);
#ifdef __cplusplus
}
#endif

#endif
