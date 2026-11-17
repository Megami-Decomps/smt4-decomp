#include "ui/UiSpriteApi.h"
#include "camp/CampStateA.h"

extern "C" {



/* Unless the state is already 3 or 4, runs uiSpriteSetImageKeyframe(member, 0x18, 0) and sets the state to 3. */
void FUN_00212724(void)
{
    CampStateA *object = g_camp;
    if (object == NULL) {
        return;
    }
    u8 state;

    state = object->spriteState;
    if (state != 4 && state != 3) {
        uiSpriteSetImageKeyframe(&object->sprites[36], 0x18, 0);
        object->spriteState = 3;
    }
}

} /* extern "C" */
