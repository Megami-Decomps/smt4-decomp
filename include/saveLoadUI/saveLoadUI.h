/* saveLoadUI/saveLoadUI.c: the save/load screen's controller. */
#ifndef SAVELOADUI_SAVELOADUI_H
#define SAVELOADUI_SAVELOADUI_H

#include "common.h"
#include "gamedata/PlayerInitialization.h"
#include "ui/UiSpriteState.h"
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

/* The game data table block (gameDataBlocksGetTable): 0x80 bytes saved ahead of the settings and the save data. */
struct SaveTableImage {
    u32 words[32];
};
struct ConfigSettingsImage; /* IV: the eight setting bytes configGetSettings returns (gamedata/SaveLoadProcess.h) */

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
            PlayerDataIV *player;
            u8 unk354;
            u8 pending;
        } preview;
        /* the screen's own state, as saveLoadUI's initialiser (saveLoadUICreate) sets it up */
        struct {
            /* 0x010 */ u8 unk10[8];
            /* 0x018 */ s32 selectedSlot;         /* starts at the slot last used (Sys44de28.lastSlot) */
            /* 0x01C */ f32 unk1C;
            /* 0x020 */ f32 unk20;                /* 30.0 */
            /* 0x024 */ s32 unk24;
            /* 0x028 */ u8 inputBlocked;
            /* 0x029 */ u8 unk29[3];
            /* 0x02C */ f32 unk2C;                /* 0.5 */
            /* 0x030 */ f32 unk30;                /* 0.5 */
            /* 0x034 */ u32 slotIndex;
            /* 0x038 */ f32 slotX;
            /* 0x03C */ f32 slotY;
            /* 0x040 */ u8 unk40[8];
            /* 0x048 */ u8 unk48;
            /* 0x049 */ u8 isLoad;
            /* 0x04A */ u8 unk4A[0xA];
            /* 0x054 */ u8 unk54;
            /* 0x055 */ u8 unk55;
            /* 0x056 */ u8 unk56[2];
            /* 0x058 */ s32 unk58;
            /* 0x05C */ u8 unk5C;
            /* 0x05D */ u8 unk5D[3];
            /* 0x060 */ s32 unk60;                /* 4 */
            /* 0x064 */ s32 panelX[3];            /* x of the three slot panels (320, 640, 800 as the screen opens) */
            /* 0x070 */ u8 unk70;
            /* 0x071 */ u8 unk71;
            /* 0x072 */ u8 unk72;
            /* 0x073 */ u8 unk73;
            /* 0x074 */ u8 unk74[8];
            /* 0x07C */ UiResourceParameters resources;   /* the sprites' animation resource */
            /* 0x09C */ UiSpriteState sprites[3];
            /* 0x240 */ u32 scriptData;           /* saveLoadUI/saveloadUI.bf */
            /* 0x244 */ u32 messageData;          /* saveLoadUI/saveloadUI.mbm */
            /* 0x248 */ u32 unk248;
            /* 0x24C */ SavePreviewSlot slots[2];
            /* 0x34C */ u8 available[2];
            /* 0x34E */ u8 unk34E[2];
            /* 0x350 */ PlayerDataIV *player;     /* scratch player record for the previews */
            /* 0x354 */ u8 unk354;
            /* 0x355 */ u8 pending;
            /* 0x356 */ u8 unk356[6];
            /* 0x35C */ s32 unk35C;
            /* 0x360 */ struct AsdMdlObject *model;   /* player/pl_dammy.bam */
            /* 0x364 */ PlayerEquipment equipment;    /* the player's equipment as the screen opened */
            /* 0x372 */ u8 unk372[2];
            /* 0x374 */ f32 unk374;               /* 0.5 */
            /* 0x378 */ u8 unk378;
            /* 0x379 */ u8 unk379;
            /* 0x37A */ u8 unk37A;
            /* 0x37B */ u8 unk37B;
            /* 0x37C */ SaveTableImage *backupTable;       /* copies of the game data table, the settings */
            /* 0x380 */ ConfigSettingsImage *backupConfig; /* and the save data, taken as the screen opens */
            /* 0x384 */ GameSaveBody *backupSave;
        } screen;
    };
} SaveLoadUIWork;
typedef char SaveLoadScreenOffsets[
    offsetof(SaveLoadUIWork, screen.selectedSlot) == 0x18 && offsetof(SaveLoadUIWork, screen.resources) == 0x7C &&
    offsetof(SaveLoadUIWork, screen.sprites) == 0x9C && offsetof(SaveLoadUIWork, screen.scriptData) == 0x240 &&
    offsetof(SaveLoadUIWork, screen.slots) == 0x24C && offsetof(SaveLoadUIWork, screen.player) == 0x350 &&
    offsetof(SaveLoadUIWork, screen.model) == 0x360 && offsetof(SaveLoadUIWork, screen.equipment) == 0x364 &&
    offsetof(SaveLoadUIWork, screen.unk374) == 0x374 && offsetof(SaveLoadUIWork, screen.backupTable) == 0x37C &&
    offsetof(SaveLoadUIWork, screen.backupSave) == 0x384 ? 1 : -1];
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
typedef char SaveSlotTextObjectsSizeCheck[sizeof(SaveSlotTextObjects) == 0x0C ? 1 : -1];
typedef char SaveSlotDisplayRecordSizeCheck[sizeof(SaveSlotDisplayRecord) == 0x3C ? 1 : -1];

/* The decimal digit of `value` at `place` (1: the units), or 10 where a leading blank belongs. */
static __inline u32 saveSlotDecimalDigit(u32 value, u8 place)
{
    if (value == 0 && place == 1) {
        return 0;
    }
    u32 scale = 1;
    for (u32 i = place - 1; i != 0; i--) {
        scale *= 10;
    }
    if (scale > value) {
        return 10;
    }
    for (u32 i = place - 1; i != 0; i--) {
        value /= 10;
    }
    return value % 10;
}

#endif
