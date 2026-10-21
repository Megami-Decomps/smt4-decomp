#include "common.h"

extern "C" {

struct CutAnimation { u8 unk000[0x5f0]; u32 state; };
extern CutAnimation *g_bustupCutAnim;

s32 bustupCutAnimIsStateFive(void)
{
    CutAnimation *object = g_bustupCutAnim;
    if (object == NULL) {
        return 0;
    }
    return object->state == 5;
}

} /* extern "C" */
