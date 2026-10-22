#include "camp/CampState.h"

extern "C" {

void uiSpriteSetImageKeyframe(u8 *member, s32 a, s32 b);

extern CampStateA *g_camp;

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
        uiSpriteSetImageKeyframe(object->transitionSprite, 0x17, 0);
        object->spriteState = 1;
    }
}

} /* extern "C" */
