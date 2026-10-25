#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct BattleValueShareMasks {
    u8 unk00[0x38];
    u64 enabled;
};
extern "C" {
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *, u32);
void source4CCopyHalves(const BtlCombatantEntryA *, u16 *);
void dataTable41FindById(u32);
extern BattleValueShareMasks DAT_005713f0;
}

/* Propagate each nonzero source slot when the target's sharing mask is enabled. */
extern "C" f32 FUN_004c3bc0(u32 sourceId, u32 targetId)
{
    f32 result = 1.0f;
    BtlCombatantEntryA *source = FUN_003f0e20(btlGetMainState(), sourceId);
    if (source == NULL) {
        return result;
    }
    BtlCombatantEntryA *target = FUN_003f0e20(btlGetMainState(), targetId);
    if (target != NULL && (target->flags & DAT_005713f0.enabled) != 0) {
        u16 values[10] = {0};
        source4CCopyHalves(source, values);
        for (s32 i = 0; i < 9; ++i) {
            if (values[i] != 0) {
                dataTable41FindById(values[i]);
            }
        }
    }
    return result;
}
