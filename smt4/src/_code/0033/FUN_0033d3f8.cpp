/* NON_MATCHING: retail forwards a float word from the incoming stack and appends two zero words; the draft treats that value as a VFP argument and omits one outgoing stack word. The dispatcher and both legacy callers still need their aggregate/variadic ABI recovered together. */
#include "common.h"
struct EventCallbackState { u8 unk00[16]; u32 id; };
extern "C" void FUN_0033f3a0(EventCallbackState *event, u32 first, u32 second, u32 third, f32 x, f32 y, f32 z, u32 reserved, u32 flags);
/* Dispatches an active event, clearing the optional arguments. */
extern "C" void FUN_0033d3f8(EventCallbackState *event, u32 first, u32 second, u32 third, f32 x, f32 y, f32 z)
{
    if (event->id)
        FUN_0033f3a0(event, first, second, third, x, y, z, 0, 0);
}
