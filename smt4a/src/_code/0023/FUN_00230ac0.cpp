#include "ui/UiSpriteApi.h"
#include "ui/PartyPanelStateA.h"

extern "C" {

// Map party-panel modes to the member and image keyframes (the sprites keep s16 keys) and apply them to all four
// member displays.
void FUN_00230ac0(s32 mode, s32 imageFrame, u32 flags, s32 resetAuxiliary)
{
    PartyPanelStateA *panel = g_partyPanel;
    s32 memberFrame = mode;
    switch (mode) {
    case 4:
        memberFrame = 10;
        break;
    case 5:
        memberFrame = 11;
        break;
    case 7:
        memberFrame = 13;
        break;
    case 8:
        memberFrame = 14;
        break;
    }
    switch (mode) {
    case 4:
    case 5:
        imageFrame = 12;
        break;
    case 7:
    case 8:
        imageFrame = 13;
        break;
    }
    uiSpriteSetImageKeyframe(&g_partyPanel->sprites[PARTY_PANEL_SPRITE_IMAGE], (s16)imageFrame, flags);
    for (s32 i = 0; i < 4; ++i)
        uiSpriteSetKeyframe(&panel->sprites[PARTY_PANEL_SPRITE_MEMBERS + i], (s16)memberFrame, flags);
    if (resetAuxiliary)
        uiSpriteSetKeyframe(&panel->sprites[PARTY_PANEL_SPRITE_LAYOUT], 12, flags);
    else
        uiSpriteSetKeyframe(&panel->sprites[PARTY_PANEL_SPRITE_LAYOUT], (s16)memberFrame, flags);
}
}
