/* NON_MATCHING: only the core registers carrying the first two converted color bytes (r1/r2) are swapped. */
#include "battle/btlReflect.h"

extern "C" {
ReflectAction *FUN_004102d8(ReflectContext *context, s32 actor, s32 secondary, u32 options);

/* Queues a tinted action: the color floats (0..1) become percent bytes. */
void FUN_004fbdd4(u32 actor, u32 options, u32 value, f32 red, f32 green, f32 blue)
{
    ReflectAction *action = FUN_004102d8(g_btlActionReflect, (s16)actor, 0, options);
    action->kind = 5;
    action->colorBytes.color[0] = (s32)(red * 100.0f);
    action->colorBytes.color[1] = (s32)(green * 100.0f);
    action->colorBytes.color[2] = (s32)(blue * 100.0f);
    action->value = value;
}
}
