#ifndef SMT4_BATTLE_BATTLECOMMANDCONTROLLER_H
#define SMT4_BATTLE_BATTLECOMMANDCONTROLLER_H

#include "common.h"
#include <stddef.h>
#include "shard/W4_Match6_BtlEntry.h"

struct BtlActionRecord;

/* The acting combatant's command object: what it may respond with and the choice the player made. */
struct CommandSelection {
    /* 0x000 */ u8 unk000[0xea];
    /* 0x0ea */ s16 power;
    /* 0x0ec */ s16 budget;              /* what the actor can still spend */
    /* 0x0ee */ u8 unk0ee[0xc];
    /* 0x0fa */ u16 responseFlags;        /* 0x80, 0x40, 0x100, 0x8: reflected response kinds */
    /* 0x0fc */ u8 unk0fc[0x50];
    /* 0x14c */ s16 kind;
    /* 0x14e */ s16 value;
};

/* The command controller's state: the open windows, the player's selection and the ordered target slots. */
struct CommandState {
    /* 0x000 */ u32 flags;                /* 0x80: first window done, 0x1000: second window done */
    /* 0x004 */ u8 unk004[0x1c];
    /* 0x020 */ BtlEntry *entry;          /* the acting combatant; flag bit 1: it can use items */
    /* 0x024 */ BtlActionRecord *record;
    /* 0x028 */ CommandSelection *selection;
    /* 0x02c */ u16 windowId;
    /* 0x02e */ u8 unk02e[2];
    /* 0x030 */ s32 mode;
    /* 0x034 */ s32 target;               /* index of the targeted combatant */
    /* 0x038 */ u8 targetMarks[0x85];
    /* 0x0bd */ u8 targetOrder[0x85];     /* combatant indices, sorted by position */
    /* 0x142 */ u8 unk142[2];
    /* 0x144 */ u32 windowHandles[0x85];
    /* 0x358 */ s32 windowSelections[0x85];
    /* 0x56c */ u8 unk56c[0x14];
    /* 0x580 */ u32 commandValue;
    /* 0x584 */ u8 unk584[0x1c];
    /* 0x5a0 */ s32 itemSlot;
    /* 0x5a4 */ s32 targetIndex;          /* first selectable combatant, -1 for none */
    /* 0x5a8 */ u8 unk5a8[0x970];
    /* 0xf18 */ u32 trailer;
};

/* The words of a combatant entry the command steps clear. */
struct CommandEntryView {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u32 flagsHigh;
    /* 0x08 */ u8 unk08[0xb8];
    /* 0xc0 */ u32 command;
    /* 0xc4 */ u8 unk0c4[4];
    /* 0xc8 */ u32 unk0c8;
};

/* A combatant entry's data block (entry + 0xcc): the group mask and two counters. */
struct EntryDataBlock {
    /* 0x00 */ u8 unk00[0xfa];
    /* 0xfa */ u16 groupMask;
    /* 0xfc */ u16 firstCounter;
    /* 0xfe */ u16 secondCounter;
};

/* What FUN_00247478 reports about the current command. */
struct CommandInfo {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s16 kind;
    /* 0x06 */ s8 value;
    /* 0x07 */ u8 unk07[0x15];
    /* 0x1c */ u8 scope;                  /* 0: one target, 1: everyone, else: all present */
    /* 0x1d */ u8 unk1d[3];
};

/* The skill record's link to a second skill. */
struct SkillLinkRecord {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 linkedSkill;
};

typedef char CommandControllerOffsets[
    offsetof(CommandSelection, kind) == 0x14c &&
    offsetof(CommandState, windowId) == 0x2c &&
    offsetof(CommandState, mode) == 0x30 &&
    offsetof(CommandState, target) == 0x34 &&
    offsetof(CommandState, commandValue) == 0x580 &&
    offsetof(CommandState, trailer) == 0xf18 &&
    offsetof(CommandSelection, power) == 0xea &&
    offsetof(CommandSelection, budget) == 0xec &&
    offsetof(CommandSelection, responseFlags) == 0xfa &&
    offsetof(EntryDataBlock, secondCounter) == 0xfe &&
    offsetof(CommandEntryView, unk0c8) == 0xc8 &&
    offsetof(CommandInfo, scope) == 0x1c &&
    offsetof(CommandState, targetMarks) == 0x38 &&
    offsetof(CommandState, targetOrder) == 0xbd &&
    offsetof(CommandState, windowHandles) == 0x144 &&
    offsetof(CommandState, windowSelections) == 0x358 &&
    offsetof(CommandState, itemSlot) == 0x5a0 &&
    offsetof(CommandState, targetIndex) == 0x5a4 ? 1 : -1];

#endif
