/* NON_MATCHING: final battleFlags read/modify/write uses r1 rather than retail r2; all other instructions agree. */
#include "gamedata/UnitStats.h"

/* Function-local views: these fields extend beyond the canonical recovered state/slot prefixes. */
struct BattleReserveSelectionView {
    u8 unk0000[0xC4];
    s32 selectionIndex;
    u8 unk00C8[0x90];
    u32 selectedIds[1];
    u8 unk015C[0x4344];
    u32 battleFlags;
    u32 unk44A4;
    u32 controlFlags;
};
struct ReserveSlotSelectionView {
    u8 unk0000[0x90F0];
    s8 stock[24];
    s8 active[3];
    u8 count;
};
typedef char BattleReserveSelectionViewOffsets[
    offsetof(BattleReserveSelectionView, selectionIndex) == 0xC4 &&
    offsetof(BattleReserveSelectionView, selectedIds) == 0x158 &&
    offsetof(BattleReserveSelectionView, battleFlags) == 0x44A0 &&
    offsetof(BattleReserveSelectionView, controlFlags) == 0x44A8 ? 1 : -1];
typedef char ReserveSlotSelectionViewOffsets[
    offsetof(ReserveSlotSelectionView, stock) == 0x90F0 &&
    offsetof(ReserveSlotSelectionView, count) == 0x910B ? 1 : -1];

extern "C" {
BattleReserveSelectionView *btlGetMainState(void);
ReserveSlotSelectionView *gameGetSlotTable(void);
StatBlock *gameGetUnitRecord(s32 slot);
s32 flagWordTestBit(const void *flags, u32 bit);
s32 randRange(u32 maximum);

// Choose at most one eligible reserve unit using its encounter probability tier.
u32 FUN_003bef90(void)
{
    if (btlGetMainState()->selectionIndex < 0) {
        s32 selected = 0;
        ReserveSlotSelectionView *slots = gameGetSlotTable();
        for (s32 index = 0; index < slots->count; ++index) {
            s32 slot = slots->stock[index];
            if (slot >= 0) {
                StatBlock *unit = gameGetUnitRecord(slot);
                if (flagWordTestBit(unit, 10)) {
                    s32 chance;
                    switch (unit->encounter.probabilityTier) {
                    case 0:
                    case 1: chance = 25; break;
                    case 2: chance = 75; break;
                    case 3: chance = 90; break;
                    default: chance = 99; break;
                    }
                    if (btlGetMainState()->controlFlags & 0x10000)
                        chance = 100;
                    if (randRange(99) < chance && selected < 1) {
                        btlGetMainState()->selectedIds[selected] = unit->id;
                        ++selected;
                    }
                }
            }
        }
        if (selected > 0) {
            btlGetMainState()->battleFlags |= 0x200;
            return 1;
        }
    }
    return 0;
}
}
