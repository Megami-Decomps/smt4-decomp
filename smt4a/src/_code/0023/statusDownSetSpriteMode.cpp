/* NON_MATCHING: 8 lines; armcc hoists the status pointer and delays the fallback key assignment, unlike retail's saved copy of the mode. */
#include "status/StatusDownA.h"
#include "ui/UiSpriteApi.h"

namespace {
enum {
    STATUS_SPRITE_FIRST_ANIMATION = 6,
    STATUS_SPRITE_SECOND_ANIMATION = 7,
    STATUS_SPRITE_THIRD_ANIMATION = 8,
    STATUS_SPRITE_FOURTH_ANIMATION = 9,
    STATUS_SPRITE_FIRST_IMAGE = 8,
    STATUS_SPRITE_SECOND_IMAGE = 9,
};
}

/* Selects the animation and image key associated with the status-down sprite mode. */
extern "C" void statusDownSetSpriteMode(s32 mode, s32 imageKey, s32)
{
    StatusDownStateA *status = g_statusDown;
    s32 key;
    switch (mode) {
    case 0:
        key = STATUS_SPRITE_FIRST_ANIMATION;
        break;
    case 1:
        key = STATUS_SPRITE_SECOND_ANIMATION;
        break;
    case 2:
        key = STATUS_SPRITE_THIRD_ANIMATION;
        break;
    case 3:
        key = STATUS_SPRITE_FOURTH_ANIMATION;
        break;
    default:
        key = mode;
        break;
    }
    switch (mode) {
    case 0:
    case 1:
        imageKey = STATUS_SPRITE_FIRST_IMAGE;
        break;
    case 2:
    case 3:
        imageKey = STATUS_SPRITE_SECOND_IMAGE;
        break;
    }
    uiSpriteSetImageKeyframe(&status->sprites[0], imageKey, 0);
    uiSpriteSetKeyframe(&status->sprites[0], key, 0);
}
