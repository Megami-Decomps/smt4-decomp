/* NON_MATCHING: compiler emits a leaf predicate instead of retail callee-saved register sequence and split-offset loads. */
#include "common.h"
namespace { struct Bustup { u8 padding[0x7c]; s16 state; u8 reserved[0x2c]; s8 active; }; }
extern "C" {
extern Bustup *g_btlTalkBustUp;
u32 FUN_0035fcbc(void)
{
    u32 result = 0;
    if (g_btlTalkBustUp != NULL && g_btlTalkBustUp->active == 0 && g_btlTalkBustUp->state == 10) { result = 1; }
    return result;
}
}
