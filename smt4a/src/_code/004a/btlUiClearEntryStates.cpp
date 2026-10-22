#include "common.h"

struct BattleUiEntry {
    u8 unk00[0x56]; // 0x00
    u16 state;       // 0x56
    u8 unk58[0xd4]; // 0x58
};

struct BattleUiEntries {
    u8 unk0000[0x6b00]; // 0x0000
    BattleUiEntry entries[5]; // 0x6b00
};

struct BattleUiGlobals {
    u8 unk00[0x10]; // 0x00
    BattleUiEntries* work; // 0x10
};

extern "C" BattleUiGlobals g_btlUi;

// Clear the state of each of the five battle UI entries.
extern "C" void btlUiClearEntryStates()
{
    BattleUiEntries* work = g_btlUi.work;
    for (s32 index = 0; index < 5; ++index) {
        work->entries[index].state = 0;
    }
}
