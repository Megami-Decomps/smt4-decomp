/* NON_MATCHING: null-case result initialization and animation-state branches differ. */
#include "event/bustupEvent/BustupCutAnim.h"

extern "C" {
extern BustupCutAnim *g_bustupCutAnim;
s32 jobIsValid(u32);
s32 jobWorkGetFirstWord(u32);
s32 FUN_00126160(u32);
void FUN_00126170(u32, s32);
void textureRequestIndexedFrame(u32, u32, u32, u32, u32);

// Request a texture frame on the idle bustup slot with the requested owner id.
u32 FUN_0011a0d4(s32 owner, u32 resource, u32 frame, u32 flags, u32 argument)
{
    BustupCutAnim *animation = g_bustupCutAnim;
    u32 result = 0;
    if (animation != NULL) {
        for (s32 slot = 1; slot < BUSTUP_CUT_SLOTS; ++slot) {
            if (jobIsValid(animation->slots[slot]) &&
                jobWorkGetFirstWord(animation->slots[slot]) == owner &&
                FUN_00126160(animation->slots[slot]) == 0) {
                FUN_00126170(animation->slots[slot], 1);
                textureRequestIndexedFrame(animation->slots[slot], resource, frame, flags, argument);
                result = 1;
                break;
            }
        }
    }
    return result;
}
}
