#include "battle/BtlMainAccess.h"
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
s32 btlScriptUnitIsIncapacitated(void);

// Returns the selected nonnegative parameter, or zero while the script unit suppresses it.
s32 FUN_002280b0(BattleParameterOwner* owner)
{
    if (owner->selected == NULL || owner->selected->value < 0) {
        return -1;
    }
    static_cast<void *>(btlGetMainState());
    return btlScriptUnitIsIncapacitated() != 0 ? 0 : owner->selected->value;
}
}
