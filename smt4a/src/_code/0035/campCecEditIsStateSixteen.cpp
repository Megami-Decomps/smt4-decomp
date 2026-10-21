#include "common.h"

extern "C" {

struct StateObject { u8 unk000[0xe8]; u32 state; u32 nextState; };
extern StateObject *g_campCecEdit;

s32 campCecEditIsStateSixteen(void)
{
    StateObject *object = g_campCecEdit;
    if (object == NULL) {
        return 0;
    }
    return object->state == 16 || object->nextState == 16;
}

} /* extern "C" */
