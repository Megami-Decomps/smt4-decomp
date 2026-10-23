#ifndef UI_TRANSIENTSPRITELIST_H
#define UI_TRANSIENTSPRITELIST_H

#include "common.h"
#include "shard/W5_W5Match1_RecordKeys.h"
#include <stddef.h>

struct TransientSpriteEntry {
    /* 0x00 */ u32 resource;
    union {
        /* 0x04 */ u8 unk04[0x30];
        struct {
            /* 0x04 */ u8 saveFlagRow;
            /* 0x05 */ u8 kind;
            /* 0x06 */ s16 map;
            u8 unk08[0x26];
            /* 0x2E */ s16 id;
            /* 0x30 */ s16 requiredFlag;
            /* 0x32 */ s16 excludedFlag;
        } condition;
    };
    /* 0x34 */ u16 visible;
    /* 0x36 */ u16 sprite;
    /* 0x38 */ s32 x;
    /* 0x3C */ s32 y;
    /* 0x40 */ u32 scaleX;
    /* 0x44 */ u32 scaleY;
    /* 0x48 */ u32 color;
};
struct TransientSpriteList {
    union {
        /* 0x0000 */ u8 unk0000[0x164];
        struct {
            u8 unk0000[0x60];
            /* 0x0060 */ s8 map;
        } selection;
    };
    /* 0x0164 */ Point2 origin;
    /* 0x016C */ u8 unk016C[0xD1C];
    /* 0x0E88 */ TransientSpriteEntry entries[256];
    /* 0x5A88 */ s32 count;
};
typedef char TransientSpriteEntryLayout[
    sizeof(TransientSpriteEntry) == 0x4C &&
    offsetof(TransientSpriteEntry, visible) == 0x34 &&
    offsetof(TransientSpriteEntry, color) == 0x48 ? 1 : -1];
typedef char TransientSpriteListLayout[
    offsetof(TransientSpriteList, origin) == 0x164 &&
    offsetof(TransientSpriteList, entries) == 0xE88 &&
    offsetof(TransientSpriteList, count) == 0x5A88 ? 1 : -1];
typedef char TransientSpriteConditionOffsetsCheck[
    offsetof(TransientSpriteEntry, condition.saveFlagRow) == 4 &&
    offsetof(TransientSpriteEntry, condition.kind) == 5 &&
    offsetof(TransientSpriteEntry, condition.map) == 6 &&
    offsetof(TransientSpriteEntry, condition.id) == 0x2E &&
    offsetof(TransientSpriteEntry, condition.requiredFlag) == 0x30 &&
    offsetof(TransientSpriteEntry, condition.excludedFlag) == 0x32 &&
    sizeof(TransientSpriteEntry) == 0x4C ? 1 : -1];
typedef char TransientSpriteSelectionOffsetsCheck[
    offsetof(TransientSpriteList, selection.map) == 0x60 &&
    sizeof(TransientSpriteList) == 0x5A8C ? 1 : -1];

#endif
