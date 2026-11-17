#include "font/InfoWinA.h"

extern "C" {

void uiSpriteSetKeyframe(UiSpriteState *sprite, s32 a, s32 b);
void uiSpriteSetImageKeyframe(UiSpriteState *sprite, s32 a, s32 b);


/* Starts the navigator in state 1: restarts its members and sets the timer to 30, the mode to 2, and stores the given values. */
void uiNavigatorStart(u32 value, u8 option, u32 unused, u8 flagA, u8 flagB)
{
    InfoWindowA *navi;
    UiSpriteState *member;

    navi = g_infoWin;
    member = &g_infoWin->background;
    g_infoWin->state = 1;
    uiSpriteSetKeyframe(member, 5, 0);
    uiSpriteSetImageKeyframe(&navi->background, 0, 0);
    uiSpriteSetKeyframe(&navi->content, 3, 0);
    navi->style = option;
    navi->shown = 1;
    navi->timer = 0x1E;
    navi->active = 2;
    navi->pending = value;
    navi->unk32C = flagA;
    navi->unk32D = flagB;
}

} /* extern "C" */
