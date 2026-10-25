#include "event/bustupEvent/BustupCutAnim.h"

extern "C" {
extern BustupCutAnimA *g_bustupCutAnim;
s32 jobIsValid(u32);
s32 jobGetWorkId(u32);
s32 FUN_0016783c(u32);
void FUN_0016784c(u32, s32);
void FUN_0019c6cc(u32, u32, u32, u32, u32);

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
            FUN_0016783c(animation->slots[slot]) == 0) {
            FUN_0016784c(animation->slots[slot], 1);
            FUN_0019c6cc(animation->slots[slot], resource, frame, flags, argument);
            result = 1;
            break;
        }
    }
    return result;
}
}
