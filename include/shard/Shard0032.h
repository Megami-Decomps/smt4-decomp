/* Structs shared by the helper functions in code shard 0032. */
#ifndef SHARD_SHARD0032_H
#define SHARD_SHARD0032_H

#include "common.h"
#include "ui/UiSpriteState.h"
#include "script/ScriptVm.h"
struct ScriptProcess;
#include "gamedata/GameSaveDataA.h"
#include "camp/CampCec/CecProfile.h"
#include "camp/CampCec/CampCecEditList.h"
#include <stddef.h>

/* A menu object; only the fields the helpers touch are named. */
/* A menu object; only the fields the helpers touch are named. */
/* A menu object; only the fields the helpers touch are named. */
/* A menu object; only the fields the helpers touch are named. */
/* A menu object; only the fields the helpers touch are named. */
/* A menu object; only the fields the helpers touch are named. */
typedef struct Menu32 {
    /* 0x00 */ u8 unk00[0x368];
    /* 0x368 */ UiSpriteState block368;
    /* 0x3F4 */ u32 unk3F4;
    /* 0x3F8 */ u32 unk3F8;
    /* 0x3FC */ u8 unk3FC[0x570];
    /* 0x96C */ UiSpriteState block96C;
    /* 0x9F8 */ u8 unk9F8[0x1A44];
    /* 0x243C */ s32 mode;
    /* 0x2440 */ u8 unk2440[0x1434];
    /* 0x3874 */ u32 unk3874;
    /* 0x3878 */ u8 unk3878[0x4];
    /* 0x387C */ s32 unk387C;
    /* 0x3880 */ s32 unk3880;
    /* 0x3884 */ u32 unk3884;
    /* 0x3888 */ u32 unk3888;
    /* 0x388C */ u8 unk388C[0x27];
    /* 0x38B3 */ u8 unk38B3;
    /* 0x38B4 */ u8 unk38B4;
    /* 0x38B5 */ u8 unk38B5[0x4];
    /* 0x38B9 */ u8 unk38B9;
    /* 0x38BA */ u8 unk38BA[0x4F6];
    /* 0x3DB0 */ u8 unk3DB0;
    /* 0x3DB1 */ u8 unk3DB1[0xD5E];
    /* 0x4B0F */ u8 unk4B0F;
    /* 0x4B10 */ u32 unk4B10;
    /* 0x4B14 */ u16 unk4B14;
    /* 0x4B16 */ u16 unk4B16;
    /* 0x4B18 */ u8 unk4B18[0x1];
    /* 0x4B19 */ u8 unk4B19;
    /* 0x4B1A */ u8 unk4B1A;
    /* 0x4B1B */ u8 unk4B1B;
    /* 0x4B1C */ u8 unk4B1C;
    /* 0x4B1D */ u8 unk4B1D[0x1];
    /* 0x4B1E */ s16 unk4B1E;
    /* 0x4B20 */ u8 unk4B20;
    /* 0x4B21 */ u8 unk4B21[0x3];
    /* 0x4B24 */ u32 unk4B24;
    /* 0x4B28 */ u32 unk4B28;
} Menu32;

/* Work area of a job that keeps a pool of sub-jobs; `current` selects one. */
typedef struct JobPool {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 jobs[38];
    /* 0xA4 */ s32 current;
} JobPool;

typedef struct Entry2C {
    /* 0x00 */ u8 data[0x2C];
} Entry2C;

/* Global block (g_quadColorState). */
typedef struct FlagsAt6C {
    /* 0x00 */ u8 unk00[0x6C];
    /* 0x6C */ u8 value;
} FlagsAt6C;

/* Entry whose flags byte at +0x20 uses bit 0x10 as a transient mark. */
typedef struct MarkEntry {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 flags;
} MarkEntry;

struct UnitSavedSkillData {
    u32 words[6];
};

struct SavedUnitRecordA {
    /* 0x00 */ u16 sortKey;
    /* 0x02 */ u16 baseStats[5];
    /* 0x0C */ u16 currentStats[5];
    /* 0x16 */ u8 status;
    /* 0x17 */ u8 unk17;
    /* 0x18 */ u16 hp;
    /* 0x1A */ u16 mp;
    /* 0x1C */ UnitSavedSkillData skills;
    /* 0x34 */ u32 unk34;
    /* 0x38 */ u32 bits;
    /* 0x3C */ u16 name[9];
    /* 0x4E */ u8 unk4E[2];
};

typedef char SavedUnitRecordALayoutCheck[
    sizeof(SavedUnitRecordA) == 0x50 &&
    offsetof(SavedUnitRecordA, baseStats) == 0x02 &&
    offsetof(SavedUnitRecordA, currentStats) == 0x0C &&
    offsetof(SavedUnitRecordA, status) == 0x16 &&
    offsetof(SavedUnitRecordA, hp) == 0x18 &&
    offsetof(SavedUnitRecordA, mp) == 0x1A &&
    offsetof(SavedUnitRecordA, skills) == 0x1C &&
    offsetof(SavedUnitRecordA, bits) == 0x38 &&
    offsetof(SavedUnitRecordA, name) == 0x3C ? 1 : -1];

/* A 300-byte unit record built from a table entry: the save block's unit record. */
typedef SlotRecordA UnitRecord;

/* Party manager data (gameGetSlotTable). */
/* Summary of the player character, filled by playerSummaryFill. */
typedef struct PlayerSummary {
    /* 0x00 */ u16 stats[7];
    /* 0x0E */ u16 name[9];
    /* 0x20 */ u8 unk20;
    /* 0x21 */ u8 unk21;
    /* 0x22 */ u8 portrait;              /* portrait image index */
    /* 0x23 */ u8 title;                 /* index of the earned title shown on the card */
    /* 0x24 */ u32 message;              /* id of the greeting message */
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u8 unk2C[0x4];
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u8 unk34[0x2];
    /* 0x36 */ s16 unk36;
    /* 0x38 */ s16 unk38;
    /* 0x3A */ s16 unk3A;
    /* 0x3C */ s16 unk3C[3];
    /* 0x42 */ u8 pose;                  /* the status scene's controller preset */
    /* 0x43 */ u8 unk43;
    /* 0x44 */ s16 unk44;
} PlayerSummary;
typedef char PlayerSummaryCardOffsets[
    offsetof(PlayerSummary, portrait) == 0x22 && offsetof(PlayerSummary, title) == 0x23 &&
    offsetof(PlayerSummary, message) == 0x24 && offsetof(PlayerSummary, unk28) == 0x28 &&
    offsetof(PlayerSummary, pose) == 0x42 && offsetof(PlayerSummary, unk44) == 0x44 ? 1 : -1];

/* What the edit screen's choice list is changing (StateAtF4::editItem). */
enum {
    CEC_EDIT_ITEM_PORTRAIT = 1,
    CEC_EDIT_ITEM_TITLE = 2,
    CEC_EDIT_ITEM_POSE = 5,
    CEC_EDIT_ITEM_MESSAGE = 7
};

typedef struct StateAtF4 {
    /* 0x00 */ u32 job;
    /* 0x04 */ u32 unk04;
    union {
        /* 0x08 */ u16 *unk08;
        /* 0x08 */ PlayerSummary *record; /* the StreetPass card being edited */
    };
    /* 0x0C */ u32 *infoPanel;           /* the character info panel (characterInfoPanelPopulate) */
    union {
        /* 0x10 */ u8 unk10[0x14];
        /* 0x10 */ u8 panels[2][0x14];   /* two 0x14-byte records, cleared on creation; [1] starts with `image` */
        struct {
            u8 unk10[0x14];
            /* 0x24 */ u8 image[1];
        } second;
    };
    union {
        /* 0x38 */ u8 unk38[0x14];
        struct {
            /* 0x38 */ f32 alpha;
            /* 0x3C */ s32 x;            /* 30 on creation */
            /* 0x40 */ s32 y;
            /* 0x44 */ s32 frame;        /* frames into the slide and fade */
            /* 0x48 */ s8 done;          /* the slide and fade finished */
        } cursor;                        /* the third 0x14-byte record (FUN_002e1d1c draws it) */
    };
    /* 0x4C */ ScriptProcess *scriptProcess;
    /* 0x50 */ void *buf50;
    /* 0x54 */ void *buf54;
    /* 0x58 */ void *messages;           /* camp/CecEdit_one_msg.mbm */
    /* 0x5C */ u32 unk5C;
    union {
        /* 0x60 */ u8 unk60[0x94];
        struct {
            s32 (*callbacks[36])(struct StateAtF4 *state);
            s32 previousMode;
        } dispatch;
        struct {
            /* 0x60 */ s32 (*handlers[10])(struct StateAtF4 *state); /* the mode handlers set on creation */
            /* 0x88 */ s32 values[24];   /* a table of small ids, filled on creation */
            /* 0xE8 */ s32 state;        /* campCecEditIsStateSixteen tests it; -1 on creation */
            /* 0xEC */ s32 nextState;
            /* 0xF0 */ s32 previousMode;
        } table;
    };
    /* 0xF4 */ s32 mode;
    /* 0xF8 */ s32 phase;
    /* 0x0FC */ s32 followingPhase;      /* the phase after `phase`; -1 on creation */
    /* 0x100 */ s32 touchFrames;         /* frames the stylus has stayed on a list row */
    /* 0x104 */ s32 activeMemberCount;   /* party members with neither ailment bit 10 nor bit 1 */
    /* 0x108 */ s16 unk108;              /* the saved record's value (save body + 0x27E0C), twice */
    /* 0x10A */ s16 unk10A;
    /* 0x10C */ u8 unk10C;
    /* 0x10D */ u8 unk10D;               /* the save block's byte at 0x27E0E */
    /* 0x10E */ u8 imageActive;
    /* 0x10F */ u8 unk10F;
    /* 0x110 */ u8 unk110[2];
    /* 0x112 */ u8 unk112;               /* 1 on creation */
    /* 0x113 */ u8 openMode;             /* the argument the screen was created with */
    /* 0x114 */ u8 listCancelled;        /* the choice list was left without choosing */
    /* 0x115 */ u8 unk115[3];
    /* 0x118 */ s32 listIndex;           /* the choice list's position among all its items */
    /* 0x11C */ u32 touchFlags;          /* CEC_EDIT_TOUCH_* */
    /* 0x120 */ s32 listTop;             /* the first item shown */
    /* 0x124 */ s32 listCount;           /* 32 on creation */
    /* 0x128 */ s32 listRow;             /* the selected row, counted from listTop */
    /* 0x12C */ u8 unk12C;
    /* 0x12D */ u8 listActive;           /* the choice list is taking input */
    /* 0x12E */ u8 unk12E[2];
    /* 0x130 */ s32 tickerX;             /* moves 8 a frame from -56 to 280 and wraps; -56 on creation */
    /* 0x134 */ s32 messageBase;         /* id of the first greeting message in the list */
    /* 0x138 */ u8 rowTouched;           /* the stylus is on a list row this frame */
    /* 0x139 */ u8 unk139[3];
    /* 0x13C */ s32 arrowHoldFrames;     /* frames the stylus has stayed on an arrow or the scroll bar */
    /* 0x140 */ s32 touchX;              /* where the stylus went down */
    /* 0x144 */ s32 touchY;
    /* 0x148 */ s32 unk148;              /* -1 on creation */
    /* 0x14C */ u32 editItem;            /* CEC_EDIT_ITEM_* */
    /* 0x150 */ s32 frameCounter;
    /* 0x154 */ u8 unk154;               /* 1 on creation */
    /* 0x155 */ u8 unk155[3];
    /* 0x158 */ s32 savedTitle;          /* the card's values when the list opened, restored on cancel */
    /* 0x15C */ s32 savedMessage;
    /* 0x160 */ s32 savedPose;
    /* 0x164 */ u8 unk164[4];
    /* 0x168 */ s32 savedPortrait;
    /* 0x16C */ u8 unk16C[0xE];          /* the player's equipment when the screen opened */
    /* 0x17A */ CecProfile profile;      /* the edited record's profile (its first 14 bytes) while the screen is open */
    /* 0x188 */ u8 outfitSelectionActive;
    /* 0x189 */ u8 unk189;
    /* 0x18A */ u8 unk18A[2];
    /* 0x18C */ u32 unk18C;
    /* 0x190 */ s32 stillFrames;         /* frames since the list position last changed */
    /* 0x194 */ u8 unk194;
    /* 0x195 */ u8 unk195[3];
} StateAtF4;   /* 0x198 bytes, as campCecEditCreate allocates it */
typedef char StateAtF4DispatchOffsetCheck[
    offsetof(StateAtF4, dispatch.callbacks) == 0x60 &&
    offsetof(StateAtF4, dispatch.previousMode) == 0xF0 &&
    offsetof(StateAtF4, frameCounter) == 0x150 &&
    offsetof(StateAtF4, cursor.x) == 0x3C && offsetof(StateAtF4, table.values) == 0x88 &&
    offsetof(StateAtF4, table.state) == 0xE8 && offsetof(StateAtF4, activeMemberCount) == 0x104 &&
    offsetof(StateAtF4, openMode) == 0x113 && offsetof(StateAtF4, unk148) == 0x148 &&
    offsetof(StateAtF4, unk154) == 0x154 && offsetof(StateAtF4, unk18C) == 0x18C &&
    sizeof(StateAtF4) == 0x198 ? 1 : -1];
typedef char StateAtF4OutfitSelectionOffsetCheck[
    offsetof(StateAtF4, profile) == 0x17A && offsetof(StateAtF4, outfitSelectionActive) == 0x188 ? 1 : -1];

typedef struct FlagAt4 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 flag;
} FlagAt4;

typedef char CampCecEditALayoutCheck[sizeof(StateAtF4) == 0x198 ? 1 : -1];

typedef char CampCecEditAOffsets[offsetof(StateAtF4, second.image) == 0x24 && offsetof(StateAtF4, imageActive) == 0x10E && offsetof(StateAtF4, unk10F) == 0x10F && offsetof(StateAtF4, editItem) == 0x14C ? 1 : -1];
typedef char CampCecEditAListOffsets[offsetof(StateAtF4, record) == 8 && offsetof(StateAtF4, cursor.done) == 0x48 &&
    offsetof(StateAtF4, touchFlags) == 0x11C && offsetof(StateAtF4, listRow) == 0x128 &&
    offsetof(StateAtF4, rowTouched) == 0x138 && offsetof(StateAtF4, touchY) == 0x144 &&
    offsetof(StateAtF4, savedTitle) == 0x158 && offsetof(StateAtF4, savedPortrait) == 0x168 &&
    offsetof(StateAtF4, unk16C) == 0x16C && offsetof(StateAtF4, stillFrames) == 0x190 ? 1 : -1];

#endif
