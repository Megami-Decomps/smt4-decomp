#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"

struct BattleSelectionRecord {
    u8 unk000[0x192];
    s16 unit; // 0x192
};
struct BattleSelectionOwner {
    u8 unk0000[0x1f54];
    BattleSelectionRecord *selection; // 0x1f54
};

extern "C" {
s32 btlScriptUnitHasFlags(void);

// Return the selected unit, zero when script-unit flags block it, or minus one if absent.
s32 btlSelectionGetUsableUnit(BattleSelectionOwner *owner)
{
    if (owner->selection == NULL || owner->selection->unit < 0) {
        return -1;
    }
    btlGetMainState();
    if (btlScriptUnitHasFlags() != 0) {
        return 0;
    }
    return owner->selection->unit;
}
}
