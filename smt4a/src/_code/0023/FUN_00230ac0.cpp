/* NON_MATCHING: switch lowering and common sprite assignment differ from retail's duplicated branches. */
#include "ui/PartyPanelState.h"

// The Apocalypse image sprite is embedded inside animation padding in the shared state prefix.
struct PartyPanelSpriteViewA {
    u8 unk000[0x298];
    TimerSlot members[4]; // 0x298
    TimerSlot auxiliary; // 0x4c8
    u8 unk554[0x3d4];
    TimerSlot image; // 0x928
};
extern "C" {
extern PartyPanelSpriteViewA *g_partyPanel;
void uiSpriteSetImageKeyframe(void *sprite, s32 frame, u32 flags);
void uiSpriteSetKeyframe(void *sprite, s32 frame, u32 flags);

// Map party-panel modes to sprite frames and apply them to all four member displays.
void FUN_00230ac0(s32 mode, s16 imageFrame, u32 flags, s32 resetAuxiliary)
{
    PartyPanelSpriteViewA *panel = g_partyPanel;
    s16 memberFrame = (s16)mode;
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
    uiSpriteSetImageKeyframe(&g_partyPanel->image, imageFrame, flags);
    for (s32 i = 0; i < 4; ++i)
        uiSpriteSetKeyframe(&panel->members[i], memberFrame, flags);
    uiSpriteSetKeyframe(&panel->auxiliary, resetAuxiliary ? 12 : memberFrame, flags);
}
}
