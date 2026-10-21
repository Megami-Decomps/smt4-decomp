#include "battle/btlMain.h"
#include "shard/W5_W5Match4_BattleTransition.h"
#include "shard/W5_W5Match4_BattleVectorTransition.h"

union BattleTransitionReset {
    BtlMainState base;
    BattleTransitionState scalars;
    BattleVectorTransition vectors;
    struct {
        u8 unk000[0x7c4];
        f32 progress;
        u8 unk7c8[0x50];
        BattleVector3 vectorProgress;
        u8 unk824[0x1c];
        s32 frame;
    } additional;
};

static inline void clearTransitionVector(BattleVector3 *vector)
{
    vector->x = vector->y = vector->z = 0.0f;
}

extern "C" {


void btlResetTransitionProgress(BtlMainState *state)
{
    BattleTransitionReset *transition = (BattleTransitionReset *)state;
    transition->scalars.globalElapsed = 0.0f;
    transition->scalars.secondaryElapsed = 0.0f;
    transition->scalars.alternateElapsed = 0.0f;
    transition->additional.progress = 0.0f;
    clearTransitionVector(&transition->vectors.secondaryElapsed);
    clearTransitionVector(&transition->additional.vectorProgress);
    transition->scalars.globalFrame = 0;
    transition->scalars.secondaryFrame = 0;
    transition->scalars.alternateFrame = 0;
    transition->vectors.secondaryFrame = 0;
    transition->additional.frame = 0;
}

} /* extern "C" */
