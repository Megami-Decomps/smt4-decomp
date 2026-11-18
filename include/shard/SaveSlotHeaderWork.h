#ifndef SHARD_SAVESLOTHEADERWORK_H
#define SHARD_SAVESLOTHEADERWORK_H

#include "common.h"
#include "shard/W4_Match1b_RegisteredHandle.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"

struct ScriptProcess;

/* The save menu's work record while it caches the five save-slot headers (observed prefix: it
 * ends with the animated sprites at 0x474). */
struct SaveSlotHeaderWork {
    u8 unk00[4];
    u8 finished;                /* 0x04: set on reaching mode 22, the end of the flow */
    u8 unk05[2];
    u8 mode;                    /* 0x07 */
    s32 step;                   /* 0x08 */
    u8 phase;                   /* 0x0c: the mode to enter once the current one is done (0: none) */
    u8 previousMode;            /* 0x0d */
    u8 flag0e;                  /* 0x0e */
    u8 flag0f;                  /* 0x0f */
    u8 flag10;                  /* 0x10 */
    u8 flag11;                  /* 0x11 */
    u8 unk12[2];
    u8 isLoad;                  /* 0x14: picks the slot list FUN_0041dbdc rebuilds */
    u8 ready;                   /* 0x15 */
    u8 unk16[2];
    s32 spriteCount;            /* 0x18 */
    void *tableBuffer;          /* 0x1c: working copy of the 0x80-byte data-block table */
    void *settingsBuffer;       /* 0x20: working copy of the 8 setting bytes */
    void *saveBuffer;           /* 0x24: working copy of the 0x2A71C-byte save data */
    u8 unk28[0x18];
    ScriptProcess *script;        /* 0x40 */
    u8 scriptPending;           /* 0x44 */
    u8 unk45[0x13];
    RegisteredHandle *popup;    /* 0x58: registered object shown over the menu; released when it is dismissed */
    u8 popupActive;             /* 0x5c */
    u8 unk5d[0x0f];
    u8 headers[5][0x80];        /* 0x6c */
    u8 present[5];              /* 0x2ec */
    u8 unk2f1[3];
    s32 slotIndex;              /* 0x2f4 */
    s32 selected;               /* 0x2f8: the chosen slot, mirrored in g_saveLoadUIBase */
    u8 unk2fc[0x178];
    UiSpriteState sprites[3]; /* 0x474..0x617 */
};

typedef char SaveSlotHeaderWorkCheck[
    offsetof(SaveSlotHeaderWork, mode) == 0x07 && offsetof(SaveSlotHeaderWork, isLoad) == 0x14 &&
    offsetof(SaveSlotHeaderWork, spriteCount) == 0x18 && offsetof(SaveSlotHeaderWork, script) == 0x40 &&
    offsetof(SaveSlotHeaderWork, popupActive) == 0x5c && offsetof(SaveSlotHeaderWork, present) == 0x2ec &&
    offsetof(SaveSlotHeaderWork, selected) == 0x2f8 && offsetof(SaveSlotHeaderWork, sprites) == 0x474 ? 1 : -1];

#endif
