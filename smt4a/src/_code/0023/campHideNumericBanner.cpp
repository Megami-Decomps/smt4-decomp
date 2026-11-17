#include "ui/UiSpriteApi.h"
#include "camp/CampStateA.h"

extern "C" {

void messageDismissNumericBanner(s32 value);


/* Runs messageDismissNumericBanner(1), then uiSpriteSetImageKeyframe on the game's member at 0x1634. */
void campHideNumericBanner(void)
{
    messageDismissNumericBanner(1);
    uiSpriteSetImageKeyframe(&g_camp->sprites[29], 7, 0);
}

} /* extern "C" */
