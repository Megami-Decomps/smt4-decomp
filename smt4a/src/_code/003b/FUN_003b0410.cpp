/* NON_MATCHING: retail uses `mov r1, #0` where armcc emits `mov r2, #0`. */
#include "common.h"

extern "C" {

struct Scene { u8 unk00[0x54]; u32 state; f32 time; };
extern Scene *g_lmapScene;
s32 scrGetArg(u32 index);
void FUN_00313648(s32 event);

s32 FUN_003b0410(u32 index)
{
    s32 event;
    if (scrGetArg(index) == 0) {
        event = 29;
    } else {
        g_lmapScene->state = 0;
        g_lmapScene->time = 0.0f;
        event = 44;
    }
    FUN_00313648(event);
    return 1;
}

} /* extern "C" */
