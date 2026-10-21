#include "common.h"

extern "C" {

struct StateObject { u8 unk000[0x434]; u32 state; u8 padding[0x50]; u32 nextState; };
extern StateObject *g_unite;

s32 uniteIsStateTwentyTwo(void)
{
    StateObject *object = g_unite;
    if (object == NULL) {
        return 0;
    }
    return object->state == 22 || object->nextState == 22;
}

} /* extern "C" */
