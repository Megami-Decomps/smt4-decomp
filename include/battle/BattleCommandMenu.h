#ifndef BATTLE_BATTLECOMMANDMENU_H
#define BATTLE_BATTLECOMMANDMENU_H

#include "common.h"
#include "battle/BtlMainAccess.h" /* Shin Megami Tensei IV only */
#include <stddef.h>

/* One battle command table entry (0x60 bytes). */
struct BattleCommandEntry {
    u8 kind;
    u8 enabled;
    u8 unk02[0x59];
    u8 hiddenInEvent;       // 0x5B
    u16 requiredGameFlag;   // 0x5C
    u16 requiredFlagBit;    // 0x5E
};

/* Per-menu command counter (0x64 bytes): index 0 is the party's, 1..3 the party slots'. */
struct CommandCounter {
    u8 unk00[0x64];
};

struct CommandMenuState {
    u8 unk00[0xD1];
    u8 slotCommandLocked; // 0xD1
};

/* The battle command menu object (accessed prefix). */
struct BattleCommandMenu {
    u8 unk0000[0x3048];
    s32 mode;                      // 0x3048
    u8 unk304C[0x10];
    s32 cursor;                    // 0x305C: 0 for the party, 1..3 for a party slot
    u8 unk3060[0x28];
    CommandCounter counters[4];    // 0x3088
    u8 unk3218[0x5E8];
    CommandMenuState state;        // 0x3800
};

typedef char BattleCommandMenuOffsets[
    offsetof(BattleCommandEntry, hiddenInEvent) == 0x5B &&
    offsetof(BattleCommandEntry, requiredFlagBit) == 0x5E &&
    offsetof(BattleCommandMenu, mode) == 0x3048 &&
    offsetof(BattleCommandMenu, cursor) == 0x305C &&
    offsetof(BattleCommandMenu, counters) == 0x3088 &&
    offsetof(BattleCommandMenu, state.slotCommandLocked) == 0x38D1 &&
    sizeof(CommandCounter) == 0x64 ? 1 : -1];

extern "C" {
s32 gameFlagIsSet(u32 flag);
s32 flagBitIsSet(u32 flag);
}

/* Whether a command is present in the table and available under the current flags. */
static __inline bool battleCommandIsAvailable(const BattleCommandEntry *command)
{
    if (command == 0 || command->enabled != 1)
        return false;
    if (command->requiredGameFlag != 0 && gameFlagIsSet(command->requiredGameFlag) == 0)
        return false;
    if (command->requiredFlagBit != 0 && flagBitIsSet(command->requiredFlagBit) == 0)
        return false;
    if (command->hiddenInEvent != 0 && (btlGetMainState()->battleFlags & 0x40000) != 0)
        return false;
    return true;
}

#endif
