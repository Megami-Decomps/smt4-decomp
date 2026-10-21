#include "common.h"

struct BattleUiEntryView {
    u16 state;
    u8 unk002[0x14a];
};

struct BattleUiWorkView {
    u8 unk0000[0xe1c4];
    BattleUiEntryView entries[12];
};

struct BattleUiRootView {
    u8 unk00[0x20];
    BattleUiWorkView* work;
};

extern "C" BattleUiRootView g_btlUi;

extern "C" u32 btlUiAreEntriesIdle(u32 unused)
{
    BattleUiWorkView* work = g_btlUi.work;
    if (work != NULL) {
        for (s32 index = 0; index < 12; ++index) {
            if ((u32)(work->entries[index].state - 1) < 4) {
                return 0;
            }
        }
    }
    return 1;
}
