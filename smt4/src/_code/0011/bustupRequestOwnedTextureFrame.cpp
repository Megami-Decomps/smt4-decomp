#include "event/bustupEvent/BustupCutAnim.h"

extern "C" {
extern BustupCutAnim *g_bustupCutAnim;
s32 jobIsValid(u32);
s32 jobWorkGetFirstWord(u32);
s32 FUN_00126160(u32);
void FUN_00126170(u32, s32);
void textureRequestIndexedFrame(u32 job, s32 index, s32 row, s32 column, s32 transition);

// Request a texture frame on the idle bustup slot with the requested owner id.
u32 bustupRequestOwnedTextureFrame(s32 owner, u32 resource, u32 frame, u32 flags, u32 argument)
{
    BustupCutAnim *animation = g_bustupCutAnim;
    if (animation == NULL) {
        return 0;
    }
    u32 result = 0;
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
    return result;
}
}
