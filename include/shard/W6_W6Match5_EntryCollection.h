#ifndef SHARD_W6_W6MATCH5_ENTRY_COLLECTION_H
#define SHARD_W6_W6MATCH5_ENTRY_COLLECTION_H

#include "common.h"
#include "gamedata/DataTable25.h"
#include "ui/UiSpriteKeyframes.h"

struct CollectionEntry {
    u16 id;
    u8 unk02[0x1e];
};
struct EntryCollection {
    s16 count; // 0x0000
    u16 unk0002;
    CollectionEntry entries[0x500]; // 0x0004
    s8 sortMode; // 0xa004
};
typedef s32 (*EntryComparator)(const void *, const void *);

extern "C" void __aeabi_memcpy4(void *, const void *, u32);

#ifdef __cplusplus
extern "C" {
#endif

DataTable25Record *FUN_002bcf4c(u32 id);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void timerStart(UiSpriteKeyframeState *sprite, u32 frame, u32 alternate);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

unsigned int FUN_002bd068(short arg0);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 uiPointerHitsRect(s32 x, s32 y, s32 width, s32 height, u32 pointer);

#ifdef __cplusplus
}
#endif

#endif
