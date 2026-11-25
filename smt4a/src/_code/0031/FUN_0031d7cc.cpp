#include "sys/CallbackOwner.h"
#include "ui/UiSpriteApi.h"

extern "C" {
void btlDrawRosterLabels(CallbackOwner *owner, s32 x, s32 y, f32 value);
void FUN_004bee88(CallbackOwner *owner, s32 x, s32 y, f32 value);
extern CallbackOwnerSlots g_callbackOwnerSlots;

/* Updates the active owner's position-dependent state in its interactive modes. */
u32 FUN_0031d7cc(void)
{
    CallbackOwner *owner = g_callbackOwnerSlots.owner;
    if (owner != NULL) {
        s32 x = vec2GetXInt((const UiSpriteState *)&owner->position);
        s32 y = vec2GetYInt((const UiSpriteState *)&owner->position);
        f32 value = vec2GetSpeed((const UiSpriteState *)&owner->position);
        switch (owner->state) {
        case 1:
        case 3:
            FUN_004bee88(owner, x, y, value);
            btlDrawRosterLabels(owner, x, y, value);
            break;
        case 2:
            break;
        }
    }
    return 0;
}
}
