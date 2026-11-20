#include "event/bustupEvent/BustupCutAnim.h"

extern "C" {
extern BustupCutAnimA *g_bustupCutAnim;
s32 jobIsValid(u32);
s32 jobGetWorkId(u32);
s32 bustupOwnerJobGetFrameByte(u32);
void bustupOwnerJobSetFrameByte(u32, s32);
void bustupSlotRequestTextureTransition(u32, u32, u32, u32, u32);

// Request a texture frame on the idle bustup slot with the requested owner id.
u32 bustupRequestIdleOwnerTextureFrame(s32 owner, u32 resource, u32 frame, u32 flags, u32 argument)
{
    BustupCutAnimA *animation = g_bustupCutAnim;
    if (animation == NULL)
        return 0;
    u32 result = 0;
    for (s32 slot = 1; slot < BUSTUP_CUT_SLOTS; ++slot) {
        if (jobIsValid(animation->slots[slot]) &&
            jobGetWorkId(animation->slots[slot]) == owner &&
            bustupOwnerJobGetFrameByte(animation->slots[slot]) == 0) {
            bustupOwnerJobSetFrameByte(animation->slots[slot], 1);
            bustupSlotRequestTextureTransition(animation->slots[slot], resource, frame, flags, argument);
            result = 1;
            break;
        }
    }
    return result;
}
}
