/* NON_MATCHING: Boolean status extraction, reference-vector loads and VFP distance-expression scheduling differ. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W5_W5Match4_BattleVectorTransition.h"
#include <math.h>
#include "util/FUN_002c501c.h"

namespace {
struct BattleDistanceReference {
    u32 unk00;
    BattleVector3 position;
};
}
extern "C" {
void FUN_0027dab0(BtlMainState *, BtlActionRecord *);
void FUN_0027da30(BtlMainState *, s32 index);
BattleVector3 FUN_0024d434(BtlMainState *, s32 index, s32 mode);

// Normalize the actor's distance from the reference point into an effect scale.
bool FUN_00224ab0(f32 *scale, s32 index, s32 mode)
{
    if (!index || !(mode < 0 || mode == 1 || mode == 4))
        return false;
    BtlActionRecord *action = &btlGetMainState()->actions[index];
    if (!action)
        return false;
    FUN_0027dab0(btlGetMainState(), action);
    FUN_0027da30(btlGetMainState(), index);
    bool enabled = (action->status & 0x10) != 0;
    if (action->status & 0x8000)
        enabled = true;
    if ((!(action->status & 0x10) && action->animation.kind == 1) || enabled) {
        BattleVector3 reference = reinterpret_cast<BattleDistanceReference *>(FUN_002c501c())->position;
        BattleVector3 position = FUN_0024d434(btlGetMainState(), index, 0);
        *scale = sqrtf((reference.x - position.x) * (reference.x - position.x) +
                       (reference.y - position.y) * (reference.y - position.y) +
                       (reference.z - position.z) * (reference.z - position.z)) /
                 sqrtf(reference.x * reference.x + reference.y * reference.y +
                       reference.z * reference.z) * 5.6f;
        enabled = true;
    }
    return enabled;
}
}
