#include "ui/MessageMainA.h"
#include "ui/UiSpriteApi.h"

extern "C" {

enum { MESSAGE_INDICATOR_SPRITE = 18 };

/* Starts the message panel's open or close indicator animation. */
u32 messageWindowStartTimer(s32 enabled)
{
    MessageWindowA *panel = g_messageMain.banner;
    if (enabled) {
        panel->transition = 1;
        uiSpriteStateInitFromSource(&panel->sprites[MESSAGE_INDICATOR_SPRITE], 8, 0, &panel->parameters, 11, 1.0f);
        uiSpriteSetKeyframe(&panel->sprites[MESSAGE_INDICATOR_SPRITE], 8, 0);
    } else {
        panel->transition = 2;
        uiSpriteStateInitFromSource(&panel->sprites[MESSAGE_INDICATOR_SPRITE], 8, 0, &panel->parameters, 11, 1.0f);
        uiSpriteSetKeyframe(&panel->sprites[MESSAGE_INDICATOR_SPRITE], 9, 0);
    }
    return 1;
}
} /* extern "C" */
