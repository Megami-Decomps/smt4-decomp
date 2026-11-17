#include "ui/UiSpriteApi.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

/* Clears the sprite and sets its texture table, images, animation resource (whose tables the tracks take), id
   and opacity, at scale 1 with every track done. */
void uiSpriteInitializeState(UiSpriteState *sprite, u32 textureTable, s32 image, s32 secondaryImage,
                             UiResourceParameters *resources, u16 id, f32 alpha)
{
    memClear(sprite, sizeof(UiSpriteState));
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
}
