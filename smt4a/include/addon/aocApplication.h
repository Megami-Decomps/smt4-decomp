#ifndef ADDON_AOCAPPLICATION_H
#define ADDON_AOCAPPLICATION_H

#include "common.h"

struct AocMain;

#ifdef __cplusplus
extern "C" {
#endif

/* Looks up the AOC text entry `id` (-1: none); the main block itself is not read. */
s32 FUN_00473910(AocMain *main, u32 id);

#ifdef __cplusplus
}
#endif

#endif
