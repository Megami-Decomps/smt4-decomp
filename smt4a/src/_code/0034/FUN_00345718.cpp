/* NON_MATCHING: retail loads the panel global twice (the first through a removed one-instruction getter armcc knew preserved the flags: `cmp r0,#0` precedes both loads) and keeps different argument registers across the two indicator branches. */
#include "ui/MessageMain.h"
#include "ui/UiSpriteState.h"

extern "C" {
void FUN_0014e188(UiSpriteState *sprite, s32 animation, s32 flags,
                  void *source, s32 kind, f32 scale);
void uiSpriteSetKeyframe(UiSpriteState *sprite, s32 keyframe, s32 flags);
extern MessageGlobalsA g_messageMain;

// Select the message panel's enabled or disabled indicator animation.
u32 FUN_00345718(s32 enabled)
{
    MessagePanelA *panel = g_messageMain.panel;
    UiSpriteState *sprite = (UiSpriteState *)panel->blockB00 + 1;
    if (enabled) {
        panel->unk94[0] = 1;
        FUN_0014e188(sprite, 8, 0, panel->block194, 11, 1.0f);
        uiSpriteSetKeyframe(sprite, 8, 0);
    } else {
        panel->unk94[0] = 2;
        FUN_0014e188(sprite, 8, 0, panel->block194, 11, 1.0f);
        uiSpriteSetKeyframe(sprite, 9, 0);
    }
    return 1;
}
}
