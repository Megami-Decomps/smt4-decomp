/* NON_MATCHING: compiler reuses the battle-state pointer; retail reloads it between vector/value copies. */
#include "common.h"

struct BattleViewVector {
    f32 x, y, z;
};

struct BattleViewSource {
    u8 unk0000[0x1ea4]; // 0x0000
    BattleViewVector first; // 0x1ea4
    BattleViewVector second; // 0x1eb0
    u32 value; // 0x1ebc
};

struct BattleViewTarget {
    u8 unk00[0x0c]; // 0x00
    BattleViewVector first; // 0x0c
    BattleViewVector second; // 0x18
    u32 value; // 0x24
};

extern "C" BattleViewTarget* g_btlMain;

// Copy the two view vectors and associated value into the current battle state.
extern "C" void FUN_00339e38(const BattleViewSource* source)
{
    if (g_btlMain != NULL) {
        g_btlMain->first = source->first;
        g_btlMain->second = source->second;
        g_btlMain->value = source->value;
    }
}
