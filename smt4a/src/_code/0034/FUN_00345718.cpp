/* NON_MATCHING: retail loads the panel global twice (the first through a removed one-instruction getter armcc knew preserved the flags: `cmp r0,#0` precedes both loads) and keeps different argument registers across the two indicator branches. */
#include "ui/MessageMainA.h"
#include "ui/UiSpriteApi.h"

extern "C" {

// Select the message panel's enabled or disabled indicator animation.
u32 FUN_00345718(s32 enabled)
{
    MessageWindowA *panel = g_messageMain.banner;
    UiSpriteState *sprite = &panel->sprites[17] + 1;
    if (enabled) {
        panel->transition = 1;
        uiSpriteStateInitFromSource(sprite, 8, 0, &panel->parameters, 11, 1.0f);
        uiSpriteSetKeyframe(sprite, 8, 0);
    } else {
        panel->transition = 2;
        uiSpriteStateInitFromSource(sprite, 8, 0, &panel->parameters, 11, 1.0f);
        uiSpriteSetKeyframe(sprite, 9, 0);
    }
    return 1;
}
}
