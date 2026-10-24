#ifndef SHARD_SAVESLOTHEADERWORK_H
#define SHARD_SAVESLOTHEADERWORK_H

#include "common.h"
#include "shard/W4_Match1b_RegisteredHandle.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"

struct ScriptState;

/* The save menu's work record while it caches the five save-slot headers (observed prefix: it
 * ends with the animated sprites at 0x474). */
struct SaveSlotHeaderWork {
    u8 unk00[7];
    u8 mode;                    /* 0x07 */
    s32 step;                   /* 0x08 */
    u8 phase;                   /* 0x0c */
    u8 previousMode;            /* 0x0d */
    u8 unk0e[7];
    u8 ready;                   /* 0x15 */
    u8 unk16[2];
    s32 spriteCount;            /* 0x18 */
    u8 unk1c[0x24];
    ScriptState *script;        /* 0x40 */
    u8 scriptPending;           /* 0x44 */
    u8 unk45[0x13];
    RegisteredHandle *popup;    /* 0x58: registered object shown over the menu; released when it is dismissed */
    u8 popupActive;             /* 0x5c */
    u8 unk5d[0x0f];
    u8 headers[5][0x80];        /* 0x6c */
    u8 present[5];              /* 0x2ec */
    u8 unk2f1[3];
    s32 slotIndex;              /* 0x2f4 */
    u8 unk2f8[0x17c];
    UiAnimatedSprite sprites[3]; /* 0x474..0x617 */
};

#endif
