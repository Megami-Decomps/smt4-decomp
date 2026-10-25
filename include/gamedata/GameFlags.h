#ifndef GAMEDATA_GAME_FLAGS_H
#define GAMEDATA_GAME_FLAGS_H

#include "common.h"

/* Set a saved game flag and optionally dispatch its change notification. */
extern "C" void gameFlagSetValue(u32 id, s32 value, s32 notify);

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
u32 FUN_003bf87c(void);
#ifdef __cplusplus
}
#endif

#endif
