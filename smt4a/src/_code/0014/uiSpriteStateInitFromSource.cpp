#include "ui/UiSpriteApi.h"
#include "AsdSDK/AsdMemUtil.h"

// uiSpriteInitializeState, inlined.
static __inline void uiSpriteInitializeStateInline(UiSpriteState *sprite, u32 textureTable, s32 image, s32 secondaryImage,
                                                   UiResourceParameters *resources, u16 id, f32 alpha)
{
    sysMemClear(sprite, sizeof(UiSpriteState));
    sprite->textureTable = textureTable;
    sprite->image = image;
    sprite->secondaryImage = secondaryImage;
    sprite->alpha = alpha;
    sprite->id = id;
    sprite->scale[0] = 1.0f;
    sprite->scale[1] = 1.0f;
    sprite->scale[2] = 1.0f;
    sprite->resources = resources;
    sprite->positionKeys = resources->positionKeys;
    sprite->alphaKeys = resources->alphaKeys;
    sprite->scaleKeys = resources->scaleKeys;
    sprite->frameKeys = resources->frameKeys;
    sprite->commands = resources->commands;
    sprite->positionDone = 1;
    sprite->alphaDone = 1;
    sprite->scaleDone = 1;
    sprite->frameDone = 1;
    sprite->finished = 1;
}

/* Initializes the sprite without a secondary image. */
extern "C" void uiSpriteStateInitFromSource(UiSpriteState *sprite, u32 textureTable, s32 image,
                                            UiResourceParameters *resources, u16 id, f32 alpha)
{
    uiSpriteInitializeStateInline(sprite, textureTable, image, -1, resources, id, alpha);
}
