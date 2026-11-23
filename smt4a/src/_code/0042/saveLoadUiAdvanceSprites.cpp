#include "shard/SaveSlotHeaderWork.h"

/* NON_MATCHING: the saved registers for the work pointer and loop index are swapped. */
/* Advances the revealed sprites and samples the origins for their transition draws. */
extern "C" void saveLoadUiAdvanceSprites(SaveSlotHeaderWork *work)
{
    uiSpriteAdvanceAnimation(&work->sprite, 1.0f);
    for (s32 index = 0; index < work->spriteCount; ++index) {
        if ((s32)work->transitionCounter < index) {
            ++work->transitionCounter;
            break;
        }
        uiSpriteAdvanceAnimation(&work->slotSprites[index], 1.0f);
    }

    s32 x = vec2GetXInt(&work->sprite);
    s32 y = vec2GetYInt(&work->sprite);
    f32 opacity = vec2GetSpeed(&work->sprite);
    SaveSlotDrawOrigin *headerOrigin = &work->headerOrigin;
    headerOrigin->x = x;
    headerOrigin->y = y;
    headerOrigin->opacity = opacity;

    for (s32 index = 0; index < work->spriteCount; ++index) {
        s32 x = vec2GetXInt(&work->slotSprites[index]);
        s32 y = vec2GetYInt(&work->slotSprites[index]);
        f32 opacity = vec2GetSpeed(&work->slotSprites[index]);
        SaveSlotDrawOrigin *slotOrigin = &work->slotDraws[index].origin;
        slotOrigin->x = x;
        slotOrigin->y = y;
        slotOrigin->opacity = opacity;
    }

    x = vec2GetXInt(&work->slotSprites[0]);
    y = vec2GetYInt(&work->slotSprites[0]);
    opacity = vec2GetSpeed(&work->slotSprites[0]);
    SaveSlotDrawOrigin *effectOrigin = &((SaveSlotTouchWorkA *)work)->effectOrigin;
    effectOrigin->x = x;
    effectOrigin->y = y;
    effectOrigin->opacity = opacity;
}
