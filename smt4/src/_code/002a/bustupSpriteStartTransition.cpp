#include "common.h"

extern "C" {

/* One word of the addon sprite table: the texture entry the sprite shows. */
typedef struct AddonSpriteRecord {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 textureEntry;
} AddonSpriteRecord;

/* A bustup sprite and its transition state. */
typedef struct BustupSprite {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *request;      /* the addon table request, NULL when none */
    /* 0x08 */ s32 slot;
    /* 0x0C */ s32 unk0c;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ s32 textureIndex;   /* -1 when no texture is held */
    /* 0x18 */ u8 unk18[0xC];
    /* 0x24 */ s32 operation;      /* the transition being played */
    /* 0x28 */ f32 progress;
    /* 0x2C */ f32 progressEnd;
    /* 0x30 */ s8 hidden;
    /* 0x31 */ u8 unk31[3];
    /* 0x34 */ u8 position[0x24];
    /* 0x58 */ f32 offset[3];
    /* 0x64 */ u8 unk64[0x10];
    /* 0x74 */ f32 duration;       /* frames the transition takes */
    /* 0x78 */ u8 unk78[0x10];
    /* 0x88 */ f32 fade;
    /* 0x8C */ u8 unk8c;
    /* 0x8D */ u8 fading;
} BustupSprite;

void aocSlotRelease(BustupSprite *sprite);
void FUN_002a4e18(void *position, s32 slot);
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
        FUN_002a4e18(sprite->position, sprite->slot);
        sprite->hidden = 1;
        sprite->offset[1] = 0.0f;
        sprite->offset[0] = 0.0f;
        sprite->offset[2] = 0.0f;
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
