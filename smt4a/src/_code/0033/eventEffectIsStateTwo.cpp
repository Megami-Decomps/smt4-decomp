#include "common.h"

extern "C" {

struct Effect { u32 unk00[2]; u32 state; };
extern Effect *g_eventEffect;

s32 eventEffectIsStateTwo(void)
{
    Effect *obj = g_eventEffect;
    s32 result = 0;

    if (obj == NULL) {
        return 0;
    }
    if (obj->state == 2) {
        result = 1;
    }
    return result;
}

} /* extern "C" */
