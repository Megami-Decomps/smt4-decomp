/* NON_MATCHING: frame arguments are narrowed at the call (s16 prototypes) like retail; retail keeps two separate chains (member frame, then image frame) and duplicated tail branches, built merges them and saves extra registers. */
#include "ui/PartyPanelStateA.h"

extern "C" {
void uiSpriteSetImageKeyframe(void *sprite, s16 frame, u32 flags);
void uiSpriteSetKeyframe(void *sprite, s16 frame, u32 flags);

// Map party-panel modes to sprite frames and apply them to all four member displays.
void FUN_00230ac0(s32 mode, s32 imageFrame, u32 flags, s32 resetAuxiliary)
{
    PartyPanelStateA *panel = g_partyPanel;
    s32 memberFrame = mode;
    switch (mode) {
    case 4:
        memberFrame = 10;
        imageFrame = 12;
        break;
    case 5:
        memberFrame = 11;
        imageFrame = 12;
        break;
    case 7:
        memberFrame = 13;
        imageFrame = 13;
        break;
    case 8:
        memberFrame = 14;
        imageFrame = 13;
        break;
    }
    uiSpriteSetImageKeyframe(&g_partyPanel->sprites[PARTY_PANEL_SPRITE_IMAGE], imageFrame, flags);
    for (s32 i = 0; i < 4; ++i)
        uiSpriteSetKeyframe(&panel->sprites[PARTY_PANEL_SPRITE_MEMBERS + i], memberFrame, flags);
    uiSpriteSetKeyframe(&panel->sprites[PARTY_PANEL_SPRITE_LAYOUT], resetAuxiliary ? 12 : memberFrame, flags);
}
}
