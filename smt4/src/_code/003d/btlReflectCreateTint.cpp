/* NON_MATCHING: only the core registers carrying the first two converted colour bytes (r1/r2) are swapped. Retail converts
 * signed (vcvt.s32), as the (s32) casts do; an (s16) cast also matches, but the bytes are u8 fields and nothing else
 * shows a halfword, so that width would be chosen for the allocation alone (rejected in the wave 76 review). */
#include "battle/btlReflect.h"

extern "C" {


/* Queues a tinted action: the color floats (0..1) become percent bytes. */
void btlReflectCreateTint(u32 actor, u32 options, u32 value, f32 red, f32 green, f32 blue)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
    action->kind = 4;
    action->colorBytes.color[0] = (s32)(red * 100.0f);
    action->colorBytes.color[1] = (s32)(green * 100.0f);
    action->colorBytes.color[2] = (s32)(blue * 100.0f);
    action->value = value;
}
}
