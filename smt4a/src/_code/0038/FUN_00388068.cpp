/* NON_MATCHING: saved-unit list addressing and HP clamp stores/registers differ from retail. */
#include "shard/W4_Match6_BtlEntry.h"
#include "shard/Shard003D.h"
#include "addon/aocMain.h"

extern "C" {
void partyRefreshSlotValues();
void gameFlagSetValue(u32 flag, u32 bank, u32 value);
extern AocSystem *g_aocSystem;
const GameBlock2830C *gameDataBlocksGetSaveData();
s32 recordGetScaledMaximum(const BtlEquip *unit);
s32 gameFlagIsSet(u32 flag);
BtlEquip *slotRecordFindById(u16 id);
s32 aocHasType36(AocSystem *system, u32 id);
s32 bitsAt60Test(const BtlEquip *unit, u32 mask);

// Apply each newly installed stat bonus once, preserving current damage when maximum HP grows.
void FUN_00388068()
{
    if (aocHasType36(g_aocSystem, 0x4f6) != 0 && gameFlagIsSet(0x4f6) == 0) {
        // The saved bonus-unit list begins just past the recovered GameBlock2830C prefix.
        struct BonusUnitsView { GameBlock2830C prefix; u32 ids[10]; };
        const BonusUnitsView *save = reinterpret_cast<const BonusUnitsView *>(gameDataBlocksGetSaveData());
        gameFlagSetValue(0x45b, 1, 1);
        gameFlagSetValue(0x4f6, 1, 1);
        for (s32 index = 0; index < 10; ++index) {
            u16 id = static_cast<u16>(save->ids[index]);
            if (id != 0) {
                BtlEquip *unit = slotRecordFindById(id);
                if (unit != NULL && bitsAt60Test(unit, 1) == 0) {
                    s32 maximum = recordGetScaledMaximum(unit);
                    unit->hp = static_cast<s16>(maximum - unit->maxHp + unit->hp);
                    if (unit->hp > maximum) {
                        unit->hp = static_cast<s16>(maximum);
                    }
                }
            }
        }
    }
    if (aocHasType36(g_aocSystem, 0x4f7) != 0 && gameFlagIsSet(0x4f7) == 0) {
        gameFlagSetValue(0x45b, 1, 1);
        gameFlagSetValue(0x4f7, 1, 1);
        partyRefreshSlotValues();
    }
}
}
