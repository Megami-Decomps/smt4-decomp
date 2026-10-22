#include "ui/IfTouch.h"

extern "C" {

s32 FUN_001c36b8(void)
{
    return (s16)((s16)g_ifTouch.state->unk660 - (s16)g_ifTouch.state->unk658);
}

} /* extern "C" */
