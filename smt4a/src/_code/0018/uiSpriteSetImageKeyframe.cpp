/* NON_MATCHING: retail uses ldr ip, [r0, #88] where the compiled block uses ldr r3, [r0, #88]. */
#include "common.h"

struct SpriteImageKeyframe {
    u32 image;          // +0x00
    u32 alternateImage; // +0x04
    u32 unk08;          // +0x08
};

struct UiSprite {
    u8 unk00[0x20];
    u32 image;                           // +0x20
    u8 unk24[0x34];
    const SpriteImageKeyframe* keyframes; // +0x58
    s16 keyframeIndex;                    // +0x5C
    u16 keyframeTime;                     // +0x5E
    u8 alternateImage;                    // +0x60
    u8 unk61[0x26];
    u8 unk87;                            // +0x87
    u8 unk88[2];
    u8 unk8A;                            // +0x8A
};

extern "C" void uiSpriteSetImageKeyframe(UiSprite* sprite, s32 keyframeIndex,
                                         s32 alternateImage)
{
    if (sprite->keyframes != NULL) {
        sprite->keyframeIndex = (s16)keyframeIndex;
        sprite->keyframeTime = 0;
        sprite->unk87 = 0;
        sprite->unk8A = 0;
        sprite->alternateImage = (u8)alternateImage;
        sprite->image = alternateImage != 0
            ? sprite->keyframes[keyframeIndex].alternateImage
            : sprite->keyframes[keyframeIndex].image;
    }
}
