#include "common.h"

namespace { struct BustUp { u8 padding[0x5ec]; s32 state; }; }

extern "C" {
/* Reads or updates the requested state. */
extern BustUp *g_bustupCutAnim;
s32 FUN_00309ba0(void)
{
    if (g_bustupCutAnim == NULL) {
        return 0;
    }
    return g_bustupCutAnim->state == 5;
}
}
