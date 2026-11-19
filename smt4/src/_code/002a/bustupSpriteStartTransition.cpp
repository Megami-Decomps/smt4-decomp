#include "event/bustupEvent/BustupSprite.h"

extern "C" {

/* One word of the addon sprite table: the texture entry the sprite shows. */
typedef struct AddonSpriteRecord {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 textureEntry;
} AddonSpriteRecord;

void aocSlotRelease(BustupSprite *sprite);
void bustupPlaceActiveSlot(void *position, s32 slot);
AddonSpriteRecord *aocContentGetIndexedRecord(void *request, u32 index);
void uiSpriteReplaceTextureEntry(BustupSprite *sprite, u32 entry, u32 flag);

/* Starts transition `operation` on the sprite; `duration` overrides the default length (0 = default). */
void bustupSpriteStartTransition(BustupSprite *sprite, u32 operation, s32 duration)
{
    sprite->operation = operation;
    switch (operation) {
    case 1:
        sprite->duration = duration == 0 ? 4.0f : (f32)duration;
        sprite->progress = 1.0f;
        sprite->hidden = 0;
        break;
    case 2:
        sprite->duration = duration == 0 ? 12.0f : (f32)duration;
        sprite->progress = 0.0f;
        sprite->hidden = 1;
        aocSlotRelease(sprite);
        break;
    case 3:
        sprite->fading = 1;
        sprite->duration = duration == 0 ? 6.0f : (f32)duration;
        sprite->progress = 1.0f;
        sprite->fade = 1.0f;
        break;
    case 4:
        sprite->duration = duration == 0 ? 12.0f : (f32)duration;
        sprite->progress = 0.0f;
        sprite->fade = 1.0f;
        break;
    case 5:
        sprite->duration = duration == 0 ? 10.0f : (f32)duration;
        break;
    case 6:
        sprite->duration = duration == 0 ? 10.0f : (f32)duration;
        bustupPlaceActiveSlot(&sprite->position, sprite->slot);
        sprite->hidden = 1;
        sprite->moveStartOffset = 0.0f;
        sprite->offset = 0.0f;
        sprite->moveEndOffset = 0.0f;
        sprite->progress = 0.0f;
        aocSlotRelease(sprite);
        break;
    case 7:
        sprite->duration = duration == 0 ? 4.0f : (f32)duration;
        sprite->progress = 0.0f;
        sprite->hidden = 1;
        aocSlotRelease(sprite);
        break;
    case 8:
        sprite->duration = duration == 0 ? 120.0f : (f32)duration;
        sprite->hidden = 1;
        sprite->progress = 0.0f;
        sprite->progressEnd = 0.0f;
        aocSlotRelease(sprite);
        break;
    case 9:
        sprite->duration = duration == 0 ? 120.0f : (f32)duration;
        sprite->progress = 1.0f;
        sprite->hidden = 1;
        sprite->progressEnd = 0.0f;
        aocSlotRelease(sprite);
        break;
    }
    if (sprite->hidden != 0 && sprite->unk0c == 0 && sprite->textureIndex == -1 && sprite->request != NULL) {
        uiSpriteReplaceTextureEntry(sprite, aocContentGetIndexedRecord(sprite->request, 1)->textureEntry, 0xFFFFFFFF);
    }
}

}
