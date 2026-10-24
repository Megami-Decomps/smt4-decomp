#include "sys/CallbackOwner.h"

extern "C" {
void FUN_004bdce0(CallbackOwner *owner, s32 x, s32 y, f32 value);
void FUN_004bee88(CallbackOwner *owner, s32 x, s32 y, f32 value);
s32 vec2GetXInt(const void *position);
s32 vec2GetYInt(const void *position);
f32 vec2GetSpeed(const void *position);
extern CallbackOwnerSlots g_callbackOwnerSlots;

/* Updates the active owner's position-dependent state in its interactive modes. */
u32 FUN_0031d7cc(void)
{
    CallbackOwner *owner = g_callbackOwnerSlots.owner;
    if (owner != NULL) {
        s32 x = vec2GetXInt(&owner->position);
        s32 y = vec2GetYInt(&owner->position);
        f32 value = vec2GetSpeed(&owner->position);
        switch (owner->state) {
        case 1:
        case 3:
            FUN_004bee88(owner, x, y, value);
            FUN_004bdce0(owner, x, y, value);
            break;
        case 2:
            break;
        }
    }
    return 0;
}
}
