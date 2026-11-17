#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"
#include "battle/BattleSkillResponseMasks.h"

extern "C" {
void source4CCopyHalves(const BtlCombatantEntryA *, u16 *);
void dataTable41FindById(u32);
}

/* Propagate each nonzero source slot when the target's sharing mask is enabled. */
extern "C" f32 FUN_004c3bc0(u32 sourceId, u32 targetId)
{
    f32 result = 1.0f;
    BtlCombatantEntryA *source = btlMainFindEntryByListedId(btlGetMainState(), sourceId);
    if (source == NULL) {
        return result;
    }
    BtlCombatantEntryA *target = btlMainFindEntryByListedId(btlGetMainState(), targetId);
    if (target != NULL && (target->flags & g_btlSkillResponseMasks.valueShare) != 0) {
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
