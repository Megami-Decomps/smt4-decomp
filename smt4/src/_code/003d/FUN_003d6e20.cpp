/* NON_MATCHING: retail reaches DAT_00493530/DAT_0049353c from one literal (53c base, 530 = base-12) and keeps &work->current in a register; operand load order of the mode-1 vector expression differs. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"
#include "shard/W5_W5Match8_CameraTransition.h"

static __inline void vectorSubtract(BattleVector3 *result, const BattleVector3 *left, const BattleVector3 *right)
{
    result->x = left->x - right->x;
    result->y = left->y - right->y;
    result->z = left->z - right->z;
}

static __inline void vectorScale(BattleVector3 *result, const BattleVector3 *vector, f32 scale)
{
    result->x = vector->x * scale;
    result->y = vector->y * scale;
    result->z = vector->z * scale;
}

static __inline void vectorAdd(BattleVector3 *result, const BattleVector3 *left, const BattleVector3 *right)
{
    result->x = left->x + right->x;
    result->y = left->y + right->y;
    result->z = left->z + right->z;
}

extern "C" {
extern CameraTransitionGlobals g_btlMain;
extern BattleVector3 DAT_00493530;
extern BattleVector3 DAT_0049353c;
extern BattleVector3 DAT_00493548;
f32 FUN_00227280(u32 mode, s32 duration, s32 frame);

/* Update the alternate vector channel, preserving its previous result in mode one. */
void FUN_003d6e20(BattleVectorTransition *work)
{
    if (g_btlMain.mode == 2) {
        BattleVector3 difference;
        vectorSubtract(&difference, &work->alternateDestination, &DAT_00493548);
        f32 factor = FUN_00227280(work->mode, work->target, work->frame);
        vectorScale(&difference, &difference, factor);
        vectorAdd(&work->elapsed, &work->elapsedData.alternateElapsed, &difference);
    } else if (g_btlMain.mode == 1) {
        work->current = DAT_0049353c;
        f32 factor = FUN_00227280(work->mode, work->target, work->frame);
        BattleVector3 offset;
        vectorSubtract(&offset, &work->reference.position, &work->current);
        vectorSubtract(&offset, &work->alternateDestination, &offset);
        vectorScale(&work->current, &offset, factor);
        DAT_0049353c = work->current;
        work->current = DAT_00493530;
        vectorAdd(&work->elapsed, &DAT_0049353c, &work->elapsedData.alternateElapsed);
    }
}
}
