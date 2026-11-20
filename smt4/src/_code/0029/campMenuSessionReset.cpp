/* NON_MATCHING: after the flag clear, retail loads the instance before the 0x1E60 offset and derives 0x1E67 into the same register (the build loads the offset first and uses r3). */
#include "ui/UiSpriteApi.h"
#include "shard/Shard0033.h"
#include "font/ComWin/ComWin.h"
#include "game/GameGlobalsRef.h"

// IV's three initial headers and menu controls differ from the Apocalypse session view.
struct MenuSessionResetViewIV {
    u8 unk0000[0x10];
    u32 state;
    u8 unk0014[4];
    u32 first;
    u32 second;
    u8 active;
    u8 unk0021[0x3f7];
    UiSpriteState headers[3];
    u8 unk05bc[0x230];
    UiSpriteState primary[10];
    UiSpriteState secondary[10];
    s32 mode;
    u32 selection;
    u8 unk12e4[0xc];
    u8 flag12f0;
    u8 unk12f1[0xb6f];
    u8 flag1e60;
    u8 unk1e61[6];
    u8 kind;
};
typedef char MenuSessionResetOffsetsCheck[offsetof(MenuSessionResetViewIV, first) == 0x18 &&
    offsetof(MenuSessionResetViewIV, headers) == 0x418 &&
    offsetof(MenuSessionResetViewIV, primary) == 0x7ec &&
    offsetof(MenuSessionResetViewIV, secondary) == 0xd64 &&
    offsetof(MenuSessionResetViewIV, mode) == 0x12dc &&
    offsetof(MenuSessionResetViewIV, flag12f0) == 0x12f0 &&
    offsetof(MenuSessionResetViewIV, flag1e60) == 0x1e60 &&
    offsetof(MenuSessionResetViewIV, kind) == 0x1e67 ? 1 : -1];

/* Enters game state `state` with its step counter cleared. */
static void gameSetState(s32 state)
{
    g_gameGlobals.data->unk10 = 0;
    g_gameGlobals.data->activeState = state;
}

extern "C" {

void campMenuSessionReset()
{
    MenuSessionResetViewIV *session = (MenuSessionResetViewIV *)g_gameGlobals.data;
    spriteStartAnimationByIndex(&session->headers[0], 0);
    spriteStartAnimationByIndex(&session->headers[1], 1);
    spriteStartAnimationByIndex(&session->headers[2], 2);
    for (s32 index = 0; index < 10; ++index) {
        uiSpriteSetKeyframe(&session->primary[index], 4, 0);
        uiSpriteSetKeyframe(&session->secondary[index], 1, 0);
    }
    MenuSessionResetViewIV *current = (MenuSessionResetViewIV *)g_gameGlobals.data;
    current->flag1e60 = 0;
    if (current->kind != 9 &&
        (current->mode == 4 || current->mode == 5 || current->mode == 6)) {
        current->selection = 0;
    }
    session->first = 0;
    session->flag12f0 = 0;
    session->second = 0;
    session->active = 0;
    gameSetState(1);
}
}
