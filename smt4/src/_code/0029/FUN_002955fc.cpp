#include "common.h"

namespace {
struct State { u8 padding[0x2f4]; s8 value; };
}

extern "C" {
/* Reads or forwards the current state. */
extern State * g_btlTalkBustUp;
s32 FUN_002955fc(void)
{
    return g_btlTalkBustUp != NULL ? g_btlTalkBustUp->value : 0;
}
}
