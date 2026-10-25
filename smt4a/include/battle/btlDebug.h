#pragma once
#include "common.h"
#include "battle/btlReflect.h"

extern "C" {

u8 FUN_003e48bc(void);

u32 btlEffectNameHasPrefix(u32 unused, u32 slot);

} /* extern "C" */

#ifdef __cplusplus
extern "C" {
#endif

void FUN_004fbeac(s32 actor, u32 secondary, u32 value, u32 parameter, s32 cancelMatching);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_004fd204(s32 actor, u32 flags, u32 target, u32 parameter, u32 payload, s32 enabled);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_004fd268(s32 id, u32 argument, u32 target, u32 option, u32 value, s32 enabled);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void asdListBoxSetIntItem(u32 listBox, s32 id, s32 value, s32 min, s32 max, u8 flags);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

ReflectAction *btlReflectCreateKind2e(s32 id, u32 options, u32 first, u32 second);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 dataTable3Type0Count(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 loadSlotIsLoaded(u32 index);

#ifdef __cplusplus
}
#endif
