#include "shard/S2Scene3a.h"
#include "ui/UiSpriteApi.h"

/* Starts the selected sprite's position key, or its command sequence for preset 2. */
extern "C" void uiSceneApplySpritePreset(Scene3aSprites *owner, u32 index)
{
    switch (index) {
    case 0:
        uiSpriteSetKeyframe(&owner->sprites[index], 0, 0);
        break;
    case 4:
        uiSpriteSetKeyframe(&owner->sprites[index], 3, 0);
        break;
    case 1:
        uiSpriteSetKeyframe(&owner->sprites[index], 1, 0);
        break;
    case 5:
        uiSpriteSetKeyframe(&owner->sprites[index], 4, 0);
        break;
    case 2:
        spriteStartAnimationByIndex(&owner->sprites[index], 0);
        break;
    case 3:
        uiSpriteSetKeyframe(&owner->sprites[index], 2, 0);
        break;
    case 6:
        uiSpriteSetKeyframe(&owner->sprites[index], 5, 0);
        break;
    case 7:
        uiSpriteSetKeyframe(&owner->sprites[index], 6, 0);
        break;
    }
}
