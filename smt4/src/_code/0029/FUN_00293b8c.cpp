#include "common.h"

namespace {
struct State { u8 padding[0x481]; s8 value; };
}

extern "C" {
/* Reads or forwards the current state. */
extern State * g_statusDown;
s32 FUN_00293b8c(void)
{
    return g_statusDown != NULL ? g_statusDown->value : 0;
}
}
