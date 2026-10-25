#include "ui/IfTouch.h"

extern "C" {

s32 FUN_001c3688(void)
{
    return (s16)g_ifTouch.state->unk660;
}

} /* extern "C" */
