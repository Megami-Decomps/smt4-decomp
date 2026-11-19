#ifndef SHARD_SAVESLOTHEADERWORK_H
#define SHARD_SAVESLOTHEADERWORK_H

#include "common.h"
#include "shard/W4_Match1b_RegisteredHandle.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "shard/W9_W9Match8_WorkRecords.h"

struct ScriptProcess;

/* The save menu's work record: its first 0x6f8 bytes (the object goes on: FUN_0041c108 draws sub-objects at 0x6f8 and
 * 0x710). SaveLoadControllerA, SaveLoadTransitionPrefixA and the units' local views describe the same object. */
struct SaveSlotHeaderWork {
    u8 unk00[4];
    u8 finished;                /* 0x04: set on reaching mode 22, the end of the flow */
    s8 recordIndex;             /* 0x05: row of saveLoadUIRecords() whose help text the menu shows */
    u8 unk06;
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
    u8 unk5d[0x0b];
    u8 suspended;               /* 0x68 */
    u8 unk69[3];
    u8 headers[5][0x80];        /* 0x6c */
    u8 present[5];              /* 0x2ec */
    u8 unk2f1[3];
    s32 slotIndex;              /* 0x2f4 */
    s32 selected;               /* 0x2f8: the chosen slot, mirrored in g_saveLoadUIBase */
    u8 unk2fc[0x10];
    u8 slotBusy;                /* 0x30c: set while one of the save slots' requests is active */
    u8 unk30d[0x13f];
    u8 pending;                 /* 0x44c */
    u8 confirmed;               /* 0x44d */
    u8 canceled;                /* 0x44e */
    u8 unk44f[0x25];
    UiSpriteState sprite;       /* 0x474 */
    UiSpriteState slotSprites[2]; /* 0x500..0x617: `spriteCount` of them in use; the last one ends a transition */
    u8 unk618[8];
    u32 transitionCounter;      /* 0x620 */
    u8 unk624[0xc8];
    SaveLoadTransitionValues transition; /* 0x6ec */
};

typedef char SaveSlotHeaderWorkCheck[
    offsetof(SaveSlotHeaderWork, mode) == 0x07 && offsetof(SaveSlotHeaderWork, isLoad) == 0x14 &&
    offsetof(SaveSlotHeaderWork, spriteCount) == 0x18 && offsetof(SaveSlotHeaderWork, script) == 0x40 &&
    offsetof(SaveSlotHeaderWork, popupActive) == 0x5c && offsetof(SaveSlotHeaderWork, present) == 0x2ec &&
    offsetof(SaveSlotHeaderWork, selected) == 0x2f8 && offsetof(SaveSlotHeaderWork, sprite) == 0x474 &&
    offsetof(SaveSlotHeaderWork, slotSprites) == 0x500 ? 1 : -1];
typedef char SaveSlotHeaderWorkMidCheck[
    offsetof(SaveSlotHeaderWork, recordIndex) == 0x05 && offsetof(SaveSlotHeaderWork, suspended) == 0x68 &&
    offsetof(SaveSlotHeaderWork, headers) == 0x6c && offsetof(SaveSlotHeaderWork, slotBusy) == 0x30c &&
    offsetof(SaveSlotHeaderWork, pending) == 0x44c ? 1 : -1];
typedef char SaveSlotHeaderWorkTailCheck[
    offsetof(SaveSlotHeaderWork, transitionCounter) == 0x620 && offsetof(SaveSlotHeaderWork, transition) == 0x6ec &&
    sizeof(SaveSlotHeaderWork) == 0x6f8 ? 1 : -1];

extern "C" {
extern SaveLoadUiSharedPrefixA g_saveLoadUIBase;
/* Advances the menu's sprites by one frame. */
void saveLoadUiAdvanceSprites(SaveSlotHeaderWork *ui);
}

/* Moves the save menu to another mode, remembering the one it leaves, restarting its steps and setting the mode to
 * follow it (0: none; `ui->phase` keeps the pending one). FUN_0041eeec's saveLoadTransition is the same. */
static __inline void saveLoadUiSetMode(SaveSlotHeaderWork *ui, u8 mode, u8 next)
{
    ui->previousMode = ui->mode;
    ui->mode = mode;
    ui->step = 0;
    ui->phase = next;
}

/* saveLoadUiSetMode, except that arriving at mode 22 also hands the selection back to the shared base and ends the
 * flow (saveLoadUIUpdate's mode 6 takes the base's selection instead and uses saveLoadUiSetMode). */
static __inline void saveLoadUiChangeMode(SaveSlotHeaderWork *ui, u8 mode, u8 next)
{
    ui->previousMode = ui->mode;
    ui->mode = mode;
    ui->step = 0;
    ui->phase = next;
    if (mode == 22) {
        g_saveLoadUIBase.selectedValue = ui->selected;
        ui->finished = 1;
    }
}

/* Advances the sprites; once the last slot sprite has settled, leaves for the pending mode. */
static __inline void saveLoadUiWaitSprites(SaveSlotHeaderWork *ui)
{
    saveLoadUiAdvanceSprites(ui);
    if (uiSpriteGetCompletionState(&ui->slotSprites[ui->spriteCount - 1]) != 0) {
        saveLoadUiChangeMode(ui, ui->phase, 0);
    }
}

#endif
