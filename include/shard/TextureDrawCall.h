#ifndef SHARD_TEXTURE_DRAW_CALL_H
#define SHARD_TEXTURE_DRAW_CALL_H

#include "common.h"

extern "C" {
/* smt4a: draws texture `id` of file `table`. Callers pass the last eight bytes as two integer
 * words (position y, slot); the definition (FUN_001835b4.cpp) takes them as an opaque
 * TextureDrawPayloadIV, which has the same argument-slot layout. */
void FUN_001835b4(u32 flags, u32 table, s32 id, u32 argument, u32 y, u32 slot);
/* smt4 twin of FUN_001835b4 (same contract). */
void FUN_002bf288(u32 flags, u32 table, s32 id, u32 argument, u32 y, u32 slot);
}



#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
u32 FUN_002b6ad0(void);
#ifdef __cplusplus
}
#endif


#endif
