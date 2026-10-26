#include "ui/IfTouch.h"
#include "code/Code001c_Smt4.h"

extern "C" {

s32 FUN_001c36a0(void)
{
    return (s16)g_ifTouch.state->unk664;
}

} /* extern "C" */
