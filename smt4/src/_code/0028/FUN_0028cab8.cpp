#include "common.h"

namespace {
struct State { u8 padding[0x2384]; u32 value; };
}

extern "C" {
/* Reads or forwards the current state. */
extern State * g_statusDown;
s32 FUN_0028cab8(void)
{
    return g_statusDown != NULL ? g_statusDown->value : 0;
}
}
