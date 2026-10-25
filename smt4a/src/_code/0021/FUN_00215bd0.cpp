#include "shard/Shard0033.h"
#include "ui/UiSpriteState.h"

extern "C" {
extern ObjBRef g_gameGlobals;
void uiSpriteSetKeyframe(UiSpriteState *sprite, s32 keyframe, s32 alternate);
void uiSpriteSetImageKeyframe(UiSpriteState *sprite, s32 keyframe, s32 alternate);
void gameStateChange(s32 state);

void FUN_00215bd0(void)
{
    ObjB *session = g_gameGlobals.instance;
    uiSpriteSelectAnim(&session->spriteHeaders.headers[0], 0);
    uiSpriteSelectAnim(&session->spriteHeaders.headers[1], 1);
    uiSpriteSelectAnim(&session->spriteHeaders.headers[2], 2);
    for (s32 index = 0; index < 10; ++index) {
        uiSpriteSetKeyframe(&session->spriteLists.primary[index], 0x10, 0);
        uiSpriteSetImageKeyframe(&session->spriteLists.primary[index], 0xD, 0);
        uiSpriteSetKeyframe(&session->spriteLists.secondary[index], 1, 0);
    }
    ObjB *current = g_gameGlobals.instance;
    current->unk2011 = 0;
    if (current->unk2018 != 10 &&
        (current->activeState == 5 || current->activeState == 6 || current->activeState == 7)) {
        current->unk136C = 0;
    }
    session->menuReset.first = 0;
    session->unk1380[0] = 0;
    session->menuReset.second = 0;
    session->menuReset.active = 0;
    gameStateChange(2);
}
}
