#include "battle/BtlMainAccess.h"
#include "util/Random.h"
#include "gamedata/UnitStats.h"
#include "gamedata/FlagBitTests.h"
#include "gamedata/UnitRecordAccess.h"

/* Function-local view: these fields extend beyond the canonical recovered slot prefix. */
struct ReserveSlotSelectionView {
    u8 unk0000[0x90F0];
    s8 stock[24];
    s8 active[3];
    u8 count;
};
typedef char ReserveSlotSelectionViewOffsets[
    offsetof(ReserveSlotSelectionView, stock) == 0x90F0 &&
    offsetof(ReserveSlotSelectionView, count) == 0x910B ? 1 : -1];

extern "C" {
ReserveSlotSelectionView *gameGetSlotTable(void);

// Choose at most one eligible reserve unit using its encounter probability tier.
u32 FUN_003bef90(void)
{
    if (btlGetMainState()->core.selectionIndex < 0) {
        s32 selected = 0;
        ReserveSlotSelectionView *slots = gameGetSlotTable();
        for (s32 index = 0; index < slots->count; ++index) {
            s32 slot = slots->stock[index];
            if (slot >= 0) {
                StatBlock *unit = gameGetUnitRecord(slot);
                if (flagWordTestBit(unit, 10)) {
                    s32 chance;
                    switch (unit->growth.probabilityTier) {
                    case 0:
                    case 1: chance = 25; break;
                    case 2: chance = 75; break;
                    case 3: chance = 90; break;
                    default: chance = 99; break;
                    }
                    if (btlGetMainState()->editorControl.flags & 0x10000)
                        chance = 100;
                    if ((s32)randRange(99) < chance && selected < 1) {
                        btlGetMainState()->core.selectedIds[selected] = unit->id;
                        ++selected;
                    }
                }
            }
        }
        if (selected > 0) {
            BtlMainState *battle = btlGetMainState();
            battle->battleMask |= 0x200;
            return 1;
        }
    }
    return 0;
}
}
