/* NON_MATCHING: mode dispatch, vector load grouping and shared address/register allocation differ. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"
#include "shard/W5_W5Match8_CameraTransition.h"

extern "C" {
extern CameraTransitionGlobals g_btlMain;
extern BattleVector3 DAT_00493530;
extern BattleVector3 DAT_0049353c;
extern BattleVector3 DAT_00493548;
f32 FUN_00227280(u32 mode, s32 duration, s32 frame);

/* Update the alternate vector channel, preserving its previous result in mode one. */
void FUN_003d6e20(BattleVectorTransition *work)
{
    switch (g_btlMain.mode) {
    case 2: {
        BattleVector3 difference = {
            work->alternateDestination.x - DAT_00493548.x,
            work->alternateDestination.y - DAT_00493548.y,
            work->alternateDestination.z - DAT_00493548.z
        };
        f32 factor = FUN_00227280(work->mode, work->target, work->frame);
        difference.x *= factor;
        difference.y *= factor;
        difference.z *= factor;
        work->elapsed.x = work->elapsedData.alternateElapsed.x + difference.x;
        work->elapsed.y = work->elapsedData.alternateElapsed.y + difference.y;
        work->elapsed.z = work->elapsedData.alternateElapsed.z + difference.z;
        break;
    }
    case 1: {
        work->current = DAT_0049353c;
        f32 factor = FUN_00227280(work->mode, work->target, work->frame);
        work->current.x = (work->alternateDestination.x -
                           (work->reference.position.x - work->current.x)) * factor;
        work->current.y = (work->alternateDestination.y -
                           (work->reference.position.y - work->current.y)) * factor;
        work->current.z = (work->alternateDestination.z -
                           (work->reference.position.z - work->current.z)) * factor;
        DAT_0049353c = work->current;
        work->current = DAT_00493530;
        work->elapsed.x = DAT_0049353c.x + work->elapsedData.alternateElapsed.x;
        work->elapsed.y = DAT_0049353c.y + work->elapsedData.alternateElapsed.y;
        work->elapsed.z = DAT_0049353c.z + work->elapsedData.alternateElapsed.z;
        break;
    }
    }
}
}
