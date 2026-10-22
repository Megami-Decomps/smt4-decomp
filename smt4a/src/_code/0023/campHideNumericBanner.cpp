#include "camp/CampState.h"

extern "C" {

void uiSpriteSetImageKeyframe(u8 *member, s32 a, s32 b);
void messageDismissNumericBanner(s32 value);

extern CampStateA *g_camp;

/* Runs messageDismissNumericBanner(1), then uiSpriteSetImageKeyframe on the game's member at 0x1634. */
void campHideNumericBanner(void)
{
    messageDismissNumericBanner(1);
    uiSpriteSetImageKeyframe(g_camp->numericBanner, 7, 0);
}

} /* extern "C" */
