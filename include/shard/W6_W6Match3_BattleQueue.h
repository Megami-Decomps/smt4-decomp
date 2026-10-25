#ifndef W6_W6MATCH3_BATTLE_QUEUE_H
#define W6_W6MATCH3_BATTLE_QUEUE_H

#include "common.h"
#include "AsdSDK/Source/Gfx/Effect/EffectBounds.h"

struct BtlMainState;
extern "C" void btlPruneInvalidQueuedEntries(BtlMainState* state);

#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_0023dcfc(u32 kind);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_0023e3a4(u32 a, u32 b, s32 check);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void effectComputeScaledImageBounds(const EffectBoundsSource *source, f32 *bounds, f32 scale);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void pairCopy(u32 *src, u32 *dst);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 dataTable2bSub1GetCount(void *unused);

#ifdef __cplusplus
}
#endif

#endif
