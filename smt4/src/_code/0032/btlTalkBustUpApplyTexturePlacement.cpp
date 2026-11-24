/* NON_MATCHING: retail stores the three pose floats through the incoming r0, while the build uses r4. */
#include "battle/Talk/btlTalkBustUp.h"
#include "ui/UiSpriteApi.h"
#include "ui/UiTexturePlacement.h"
#include "camp/UIQuest/UIQuest.h"
#include "sys/RuntimeObjects.h"
#include <string.h>

extern "C" {

void FUN_002eb764(UiSpriteState *sprite, u8 value);

enum {
    TALK_BUSTUP_TEXTURE_TABLE = 24,
    TALK_BUSTUP_IMAGES_PER_TEXTURE = 1000,
};

/* Animation image for a pose within the portrait's texture. */
static __inline s32 portraitAnimationId(const BtlTalkBustUp *portrait, s32 pose)
{
    return portrait->textureNode * TALK_BUSTUP_IMAGES_PER_TEXTURE + pose;
}

/* Initializes the portrait and the overlays used by its animation category. */
void btlTalkBustUpApplyTexturePlacement(BtlTalkBustUp *portrait)
{
    s32 i;

    portrait->scaleX = 1.0f;
    portrait->scaleY = 1.0f;
    portrait->progress = 0.0f;
    BtlTalkBustUpPlacement *placement = &portrait->placement;
    memset(placement->playing, 0, sizeof(placement->playing));
    placement->unk04 = 0;
    for (i = 0; i < 5; i++) {
        uiSpriteStateInitFromSource(&portrait->sprites[i], TALK_BUSTUP_TEXTURE_TABLE, -1, &portrait->resources, 0x97, 1.0f);
    }
    pairSetFirstResetSecond(&portrait->sprites[0], portrait->textureNode * TALK_BUSTUP_IMAGES_PER_TEXTURE);
    spriteStartAnimationByIndex(&portrait->sprites[0], 0);
    switch (portrait->category) {
    case 0:
    case 1:
    case 4:
    case 5:
    case 6:
    case 7:
    case 9:
    case 10:
    case 11:
    case 14:
    case 15:
    case 18:
        return;
    case 2:
    case 0x11:
        pairSetFirstResetSecond(&portrait->sprites[1], portraitAnimationId(portrait, 1));
        spriteStartAnimationByIndex(&portrait->sprites[1], 0);
        uiStoreTextureEntryCenter((PointDeltaWork *)&portrait->sprites[1], TALK_BUSTUP_TEXTURE_TABLE,
            portrait->textureNode * TALK_BUSTUP_IMAGES_PER_TEXTURE + 2);
        return;
    case 3:
        uiStoreTextureEntryCenter((PointDeltaWork *)&portrait->sprites[0], TALK_BUSTUP_TEXTURE_TABLE,
            portrait->textureNode * TALK_BUSTUP_IMAGES_PER_TEXTURE);
        FUN_002eb764(&portrait->sprites[0], 1);
        pairSetFirstResetSecond(&portrait->sprites[1], portrait->textureNode * TALK_BUSTUP_IMAGES_PER_TEXTURE);
        spriteStartAnimationByIndex(&portrait->sprites[1], 0);
        uiStoreTextureEntryCenter((PointDeltaWork *)&portrait->sprites[1], TALK_BUSTUP_TEXTURE_TABLE,
            portrait->textureNode * TALK_BUSTUP_IMAGES_PER_TEXTURE);
        FUN_002eb764(&portrait->sprites[1], 1);
        return;
    case 8:
        pairSetFirstResetSecond(&portrait->sprites[0], 0x13881);
        uiGetLayoutPointDifference((PointDeltaWork *)&portrait->sprites[0], TALK_BUSTUP_TEXTURE_TABLE, 80000, 0x13881);
        return;
    case 0xd:
        pairSetFirstResetSecond(&portrait->sprites[1], portraitAnimationId(portrait, 1));
        return;
    case 0xc:
    case 0x10:
        pairSetFirstResetSecond(&portrait->sprites[1], portraitAnimationId(portrait, 1));
        pairSetFirstResetSecond(&portrait->sprites[2], portraitAnimationId(portrait, 2));
        spriteStartAnimationByIndex(&portrait->sprites[1], 0);
        spriteStartAnimationByIndex(&portrait->sprites[2], 0);
        return;
    case 0x13:
        pairSetFirstResetSecond(&portrait->sprites[0], portrait->textureNode * TALK_BUSTUP_IMAGES_PER_TEXTURE);
        pairSetFirstResetSecond(&portrait->sprites[1], portraitAnimationId(portrait, 1));
        return;
    }
}

} /* extern "C" */
