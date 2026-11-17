#include "camp/CampStateA.h"

extern "C" {

void uiSpriteSetKeyframe(UiSpriteState *unit, s32 a, s32 b);
void uiSpriteSetImageKeyframe(UiSpriteState *unit, s32 a, s32 b);
void FUN_0037c8e4(s32 a, s32 b);
void messageRestoreBanner(void);


/* Resets the camp screen: runs the two set-up calls, then restarts the 13 sprites at sprites[15..27] and three more, and clears the word at 0x18. */
void campResetScreen(void)
{
    CampStateA *game;
    s32 i;

    FUN_0037c8e4(1, 0);
    messageRestoreBanner();
    game = g_camp;
    i = 0;
    do {
        uiSpriteSetKeyframe(&game->sprites[15 + i], 10, 0);
        uiSpriteSetImageKeyframe(&game->sprites[15 + i], 0x13, 0);
        i = i + 1;
    } while (i < 0xD);
    uiSpriteSetImageKeyframe(&game->sprites[28], 6, 0);
    uiSpriteSelectAnim(&game->sprites[35], 8);
    game->unk0018 = 0;
    uiSpriteSetImageKeyframe(&game->sprites[29], 0x16, 0);
}

} /* extern "C" */
