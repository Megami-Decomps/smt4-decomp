/* NON_MATCHING: retail argument packing or conditional store scheduling differs. */
#include "common.h"
struct EventCallbackState { u8 unk00[16]; u32 id; };
extern "C" void FUN_003fd140(EventCallbackState *event, u32 first, u32 second, u32 third, f32 x, f32 y, f32 z, u32 reserved, u32 flags);
/* Dispatches an active event, clearing the optional arguments. */
extern "C" void FUN_003fabfc(EventCallbackState *event, u32 first, u32 second, u32 third, f32 x, f32 y, f32 z)
{
    if (event->id)
        FUN_003fd140(event, first, second, third, x, y, z, 0, 0);
}
