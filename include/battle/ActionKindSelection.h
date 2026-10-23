#ifndef BATTLE_ACTION_KIND_SELECTION_H
#define BATTLE_ACTION_KIND_SELECTION_H
#include "common.h"
#include <stddef.h>

struct ActionKindEntry {
    /* 0x00 */ u8 unk00[0x6E];
    /* 0x6E */ s16 unitIndex;
};
struct ActionKindCommand {
    /* 0x000 */ u8 unk000[0x14C];
    /* 0x14C */ s16 kind;
    /* 0x14E */ s16 skill;
};
struct ActionKindSelection {
    /* 0x00 */ union {
        u8 unk00[0x20];
        u32 flags;
        struct {
            u8 prefix00[8];
            /* 0x08 */ u32 phase;
        } sequence;
    };
    /* 0x20 */ ActionKindEntry *entry;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ ActionKindCommand *command;
};
struct ActionKindThread {
    /* 0x00 */ u8 unk00[9];
    /* 0x09 */ u8 kind;
    /* 0x0A */ u8 unk0A[0xF12];
};
typedef char ActionKindSelectionOffsets[
    offsetof(ActionKindEntry, unitIndex) == 0x6E &&
    offsetof(ActionKindCommand, kind) == 0x14C &&
    offsetof(ActionKindCommand, skill) == 0x14E &&
    offsetof(ActionKindSelection, entry) == 0x20 &&
    offsetof(ActionKindSelection, command) == 0x28 &&
    offsetof(ActionKindThread, kind) == 9 &&
    sizeof(ActionKindThread) == 0xF1C ? 1 : -1];
typedef char ActionKindSelectionFlagsOffset[offsetof(ActionKindSelection, flags) == 0 ? 1 : -1];
typedef char ActionKindSelectionSequenceOffset[
    offsetof(ActionKindSelection, sequence.phase) == 8 &&
    sizeof(ActionKindSelection) == 0x2C ? 1 : -1];
#endif
