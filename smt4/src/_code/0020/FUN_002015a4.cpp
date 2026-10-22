#include "ui/IfTouch.h"

extern "C" {

s32 FUN_002015a4(void)
{
    return (s16)g_ifTouch.state->unk670;
}

} /* extern "C" */
