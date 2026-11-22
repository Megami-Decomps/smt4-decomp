#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "ui/UiSpriteSequence.h"

/* Selects delimiter-separated frame sequence `sequence` and restarts its playback. */
extern "C" void uiSpriteStartFrameSequence(UiSpriteState *sprite, s16 sequence)
{
    UiSpriteFrameKey *selected = uiSpriteFindFrameSequence(sprite->resources, sequence);
    sprite->frameKeys = selected;
    if (selected != NULL) {
        sprite->frameIndex = 0;
        sprite->frameElapsed = 0;
        sprite->frameDone = 0;
        sprite->finished = 0;
        sprite->image = selected->image;
        sprite->secondaryImage = static_cast<u32>(-1);
    }
}
