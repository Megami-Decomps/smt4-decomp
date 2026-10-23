/* saveLoadUI/saveLoadUI.c: the save/load screen's controller. */
#ifndef SAVELOADUI_SAVELOADUI_H
#define SAVELOADUI_SAVELOADUI_H

#include "common.h"
#include "gamedata/PlayerInitialization.h"
#include <stddef.h>

struct SavePreviewSlot {
    char name[0x12];
    u16 equipment[7];
    u32 experience;
    u16 hp;
    u16 mp;
    u8 unk28[8];
    u16 maximums[7];
    u16 baseStats[7];
    u8 enabled;
    u8 unk4d[0x17];
    u8 optionEnabled;
    u8 unk65[0x1b];
};
typedef char SavePreviewSlotOffsets[
    sizeof(SavePreviewSlot) == 0x80 &&
    offsetof(SavePreviewSlot, equipment) == 0x12 &&
    offsetof(SavePreviewSlot, experience) == 0x20 &&
    offsetof(SavePreviewSlot, maximums) == 0x30 &&
    offsetof(SavePreviewSlot, baseStats) == 0x3e &&
    offsetof(SavePreviewSlot, enabled) == 0x4c &&
    offsetof(SavePreviewSlot, optionEnabled) == 0x64 ? 1 : -1];

/* IV: the save/load screen's work area. */
typedef struct SaveLoadUIWork {
    /* 0x00 */ u32 task;                   /* the screen's task handle */
    /* 0x04 */ u8 unk04;
    /* 0x05 */ u8 unk05[0x3];
    /* 0x08 */ s32 state;
    /* 0x0C */ s32 unk0C;
    union {
        /* 0x10 */ u8 unk10[0x378];
        struct {
            u8 unk10[8];
            s32 previousSlot;
            u8 unk1c[0xc];
            u8 inputBlocked;
            u8 unk29[0x223];
            SavePreviewSlot slots[2];
            u8 available[2];
            u8 unk34e[2];
            PlayerInitialRecordIV *player;
            u8 unk354;
            u8 pending;
        } preview;
    };
} SaveLoadUIWork;
typedef char SaveLoadPreviewOffsets[
    sizeof(SaveLoadUIWork) == 0x388 &&
    offsetof(SaveLoadUIWork, preview.previousSlot) == 0x18 &&
    offsetof(SaveLoadUIWork, preview.inputBlocked) == 0x28 &&
    offsetof(SaveLoadUIWork, preview.slots) == 0x24c &&
    offsetof(SaveLoadUIWork, preview.available) == 0x34c &&
    offsetof(SaveLoadUIWork, preview.player) == 0x350 &&
    offsetof(SaveLoadUIWork, preview.pending) == 0x355 ? 1 : -1];

struct SaveSlotTextObjects {
    /* 0x00 */ void *name;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ void *optional;
};
struct SaveSlotDisplayRecord {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 flags;
    /* 0x21 */ u8 style; /* 0 = empty, 1 = occupied */
    /* 0x22 */ u8 unk22[6];
    /* 0x28 */ u32 playSeconds;
    /* 0x2C */ u8 unk2c[4];
    /* 0x30 */ u32 location;
    /* 0x34 */ u16 portrait;
    /* 0x36 */ u16 level;
    /* 0x38 */ u16 secondaryPortrait;
    /* 0x3A */ u8 unk3a[2];
};
struct SaveSlotPortraitResource {
    /* 0x00 */ u8 unk00[0x9C];
    /* 0x9C */ u16 image;
};
typedef char SaveSlotTextObjectsSizeCheck[sizeof(SaveSlotTextObjects) == 0x0C ? 1 : -1];
typedef char SaveSlotDisplayRecordSizeCheck[sizeof(SaveSlotDisplayRecord) == 0x3C ? 1 : -1];
typedef char SaveSlotPortraitResourceSizeCheck[sizeof(SaveSlotPortraitResource) == 0x9E ? 1 : -1];

/* Return 10 for a leading blank; work in pairs of decimal places to keep divisions constant. */
static __inline u32 saveSlotDecimalDigit(u32 value, u8 place)
{
    if (value == 0) {
        return place == 1 ? 0 : 10;
    }
    u32 scale = (place & 1) == 0 ? 10 : 1;
    for (u32 pair = ((u32)place - 1) >> 1; pair != 0; --pair) {
        scale *= 100;
    }
    if (value < scale) {
        return 10;
    }
    if ((place & 1) == 0) {
        value /= 10;
    }
    for (u32 pair = ((u32)place - 1) >> 1; pair != 0; --pair) {
        value /= 100;
    }
    return value % 10;
}

#endif
