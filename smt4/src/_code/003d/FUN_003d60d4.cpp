/* NON_MATCHING: the compiler contracts vector multiply/add stages and merges intermediate stores. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"

extern "C" {
extern BattleVector3 DAT_00493530;
f32 FUN_00227280(u32 mode, u32 duration, u32 frame);

void FUN_003d60d4(BattleVectorTransition *work)
{
    f32 factor = FUN_00227280(work->path.mode, work->path.duration, work->path.frame);
    BattleVector3 difference = {
        work->path.end.x - DAT_00493530.x,
        work->path.end.y - DAT_00493530.y,
        work->path.end.z - DAT_00493530.z
    };
    BattleVector3 correction = {
        work->path.start.x - work->elapsedData.alternateElapsed.x,
        work->path.start.y - work->elapsedData.alternateElapsed.y,
        work->path.start.z - work->elapsedData.alternateElapsed.z
    };
    work->current.x = DAT_00493530.x + difference.x * factor;
    work->current.y = DAT_00493530.y + difference.y * factor;
    work->current.z = DAT_00493530.z + difference.z * factor;
    work->current.x -= correction.x * factor;
    work->current.y -= correction.y * factor;
    work->current.z -= correction.z * factor;
}
}
