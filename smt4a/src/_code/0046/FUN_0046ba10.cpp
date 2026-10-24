#include "classes/Obj5333c0.h"
#include <stddef.h>

// The read-only table at 0x5333b8: a short byte table, an empty step and the 18 step functions.
struct SceneStepTable {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ SceneStep none;
    /* 0x10 */ SceneStep steps[18];
};

extern "C" {
extern const SceneStepTable DAT_005333b8;

// Reset the scene: every state starts without a step function, then states 1-18 get theirs
// (the table lists them in declaration order, which is not the state order for 9/10 and 16-18),
// and the scene begins in state 1.
void FUN_0046ba10(Obj5333c0 *scene)
{
    typedef char StepsOffset[offsetof(Obj5333c0, steps) == 0x2B8 ? 1 : -1];
    for (s32 i = 0; i < 20; i++) {
        scene->steps[i] = DAT_005333b8.none;
    }
    scene->steps[1] = DAT_005333b8.steps[0];
    scene->steps[2] = DAT_005333b8.steps[1];
    scene->steps[3] = DAT_005333b8.steps[2];
    scene->steps[4] = DAT_005333b8.steps[3];
    scene->steps[5] = DAT_005333b8.steps[4];
    scene->steps[6] = DAT_005333b8.steps[5];
    scene->steps[7] = DAT_005333b8.steps[6];
    scene->steps[8] = DAT_005333b8.steps[7];
    scene->steps[10] = DAT_005333b8.steps[8];
    scene->steps[9] = DAT_005333b8.steps[9];
    scene->steps[11] = DAT_005333b8.steps[10];
    scene->steps[12] = DAT_005333b8.steps[11];
    scene->steps[13] = DAT_005333b8.steps[12];
    scene->steps[14] = DAT_005333b8.steps[13];
    scene->steps[15] = DAT_005333b8.steps[14];
    scene->steps[17] = DAT_005333b8.steps[15];
    scene->steps[18] = DAT_005333b8.steps[16];
    scene->steps[16] = DAT_005333b8.steps[17];
    scene->state = 1;
    scene->substate = 0;
}

} /* extern "C" */
