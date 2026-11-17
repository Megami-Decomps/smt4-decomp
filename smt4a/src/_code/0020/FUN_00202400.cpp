#include "ui/UiSpriteApi.h"
#include "camp/CampStateA.h"

extern "C" {



/* Unless the state is already 1 or 2, runs uiSpriteSetImageKeyframe(member, 0x17, 0) and sets the state to 1. */
void FUN_00202400(void)
{
    CampStateA *object = g_camp;
    if (object == NULL) {
        return;
    }
    u8 state;

    state = object->spriteState;
    if (state != 2 && state != 1) {
        uiSpriteSetImageKeyframe(&object->sprites[36], 0x17, 0);
        object->spriteState = 1;
    }
}

} /* extern "C" */
