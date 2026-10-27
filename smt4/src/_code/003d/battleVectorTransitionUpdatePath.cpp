#include "shard/W5_W5Match4_BattleVectorTransition.h"

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
extern BattleVector3 DAT_00493530;
f32 FUN_00227280(u32 mode, u32 duration, u32 frame);

void battleVectorTransitionUpdatePath(BattleVectorTransition *work)
{
    f32 factor = FUN_00227280(work->path.mode, work->path.duration, work->path.frame);
    BattleVector3 first;
    vectorSubtract(&first, &work->path.end, &DAT_00493530);
    BattleVector3 second;
    vectorSubtract(&second, &work->path.start, &work->elapsedData.alternateElapsed);
    vectorScale(&first, &first, factor);
    vectorScale(&second, &second, factor);
    vectorAdd(&work->current, &DAT_00493530, &first);
    vectorSubtract(&work->current, &work->current, &second);
}
}
