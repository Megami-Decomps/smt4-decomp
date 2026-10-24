/* NON_MATCHING: retail keeps the direction in a separate register (movs r0, r1) and tests it again after the keyframe chain; the build folds the image selection into the chain and uses fewer compares. */
#include "common.h"

extern "C" {

void uiSpriteSetKeyframe(void *sprite, s16 keyframe, u32 frame);
void uiSpriteSetImageKeyframe(void *sprite, s16 keyframe, u32 frame);

/* Sets the sprite at +0x30 to the keyframe for direction `direction` (0-3 map to 4-7) and its image keyframe (0 for directions 0-1, 1 for 2-3). */
void FUN_004be990(u8 *object, s32 direction, s32 image, u32 frame)
{
    s32 keyframe = direction;

    if (direction == 0) {
        keyframe = 4;
        image = 0;
    } else {
        if (direction == 1) {
            keyframe = 5;
        } else if (direction == 2) {
            keyframe = 6;
        } else if (direction == 3) {
            keyframe = 7;
        }
        if (direction == 1) {
            image = 0;
        } else if (direction == 2 || direction == 3) {
            image = 1;
        }
    }
    uiSpriteSetKeyframe(object + 0x30, keyframe, frame);
    uiSpriteSetImageKeyframe(object + 0x30, image, frame);
}

} /* extern "C" */
