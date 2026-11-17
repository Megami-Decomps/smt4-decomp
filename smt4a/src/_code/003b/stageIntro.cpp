#include "shard/Shard003B.h"
#include "gamedata/GameFlags.h"
#include "map/MapGimicGlobal.h"

extern "C" {

extern void naviMainSetFlagsAndActivate(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);


/* Plays the stage's introduction for its kind (0, 4, 8, 0xE, 0x12) and then flags it. */
void stageIntro(void)
{
    MapGimicStageActorA *sub = &g_mapGimic->stageActor;

    if (sub->active != 0) {
        if (sub->index == 0) {
            naviMainSetFlagsAndActivate(0x4E, 8, 0, 0, 0, 0);
        }
        if (sub->index == 4) {
            naviMainSetFlagsAndActivate(0xBF, 7, 0, 0, 0, 0);
        }
        if (sub->index == 8) {
            naviMainSetFlagsAndActivate(0xCD, 3, 0, 0, 0, 0);
        }
        if (sub->index == 0xE) {
            naviMainSetFlagsAndActivate(0xDA, 5, 0, 0, 0, 0);
        }
        if (sub->index == 0x12) {
            naviMainSetFlagsAndActivate(0xED, 4, 0, 0, 0, 0);
        }
        gameFlagSetValue(sub->flag, 1, 1);
    }
}

} /* extern "C" */
