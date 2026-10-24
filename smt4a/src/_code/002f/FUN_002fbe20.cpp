/* NON_MATCHING: retail retains unused error literal 0xd8e0a002; saved string/length registers and outgoing stores also differ. */
#include "common.h"

struct WideRequestContext {
    u32 unk00;
    s32 state; // 0x04
    u32 unk08;
    u32 handle; // 0x0c
};

extern "C" {
u32 wstrlen(const u16 *);
u32 FUN_0043b0dc(u32 *, s32, const u16 *, u32, const u16 *, u32);

u32 FUN_002fbe20(WideRequestContext *context, const u16 *first, const u16 *second)
{
    if (context->state <= 0)
        return 0xd8a0a064;
    u32 secondLength = wstrlen(second) + 1;
    u32 firstLength = wstrlen(first) + 1;
    return FUN_0043b0dc(&context->handle, context->state, first, firstLength,
                         second, secondLength);
}
}
