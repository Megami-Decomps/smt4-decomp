#include "common.h"

namespace { struct State { u8 padding[0x2388]; s8 value; }; }

extern "C" {
extern State *g_statusDown;

/* Reads the current status value when the owner exists. */
s32 statusDownValueGet(void)
{
    return g_statusDown != NULL ? g_statusDown->value : 0;
}
}
