#include "common.h"

struct SelectedBattleParameter {
    u8 unk000[0x192]; // 0x000
    s16 value;         // 0x192
};
struct BattleParameterOwner {
    u8 unk0000[0x1cfc]; // 0x0000
    SelectedBattleParameter* selected; // 0x1cfc
};

extern "C" {
void* btlGetMainState(void);
s32 FUN_00293230(void);

// Returns the selected nonnegative parameter, or zero while the script unit suppresses it.
s32 FUN_002280b0(BattleParameterOwner* owner)
{
    if (owner->selected == NULL || owner->selected->value < 0) {
        return -1;
    }
    btlGetMainState();
    return FUN_00293230() != 0 ? 0 : owner->selected->value;
}
}
