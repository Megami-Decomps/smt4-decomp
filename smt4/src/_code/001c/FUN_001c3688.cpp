#include "ui/IfTouch.h"
#include "shard/FUN_001c3688.h"

extern "C" {

s32 FUN_001c3688(void)
{
    return (s16)g_ifTouch.state->unk660;
}

} /* extern "C" */
