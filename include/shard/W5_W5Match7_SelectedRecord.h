#ifndef SHARD_W5_W5MATCH7_SELECTEDRECORD_H
#define SHARD_W5_W5MATCH7_SELECTEDRECORD_H
#include "common.h"
#include <stddef.h>

struct CallbackLoadedObject {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ u32 unk108;
};
struct SelectionOwner {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ void* unk10;
    /* 0x14 */ CallbackLoadedObject* createdObject;
    /* 0x18 */ void* unk18;
    /* 0x1C */ void* unk1C;
    /* 0x20 */ u8 unk20[0x0C];
    /* 0x2C */ s32 index;
};
struct SelectedRecord { u16 values[4]; };
typedef char SelectionOwnerLayoutCheck[sizeof(SelectionOwner) == 0x30 &&
    offsetof(SelectionOwner, unk10) == 0x10 &&
    offsetof(SelectionOwner, createdObject) == 0x14 &&
    offsetof(SelectionOwner, unk18) == 0x18 && offsetof(SelectionOwner, unk1C) == 0x1C &&
    offsetof(SelectionOwner, index) == 0x2C &&
    offsetof(CallbackLoadedObject, unk108) == 0x108 ? 1 : -1];
extern "C" {
extern SelectionOwner *g_callbackWork;
SelectedRecord *FUN_002613f0(s32 index);
}
#ifdef __cplusplus
extern "C" {
#endif

s32 FUN_002618c8(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 dataTableHasMatchingEntry35(u32 id);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 ifTouchRegionAdd(u16 x, u16 y, u16 width, u16 height);

#ifdef __cplusplus
}
#endif

#endif
