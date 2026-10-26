/* NON_MATCHING: menu-reset offset-pool reuse and register scheduling differ. */
#include "shard/Shard0033.h"
#include "font/ComWin/ComWin.h"

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

extern "C" {
extern ObjBRef g_gameGlobals;
void timerStart(UiSpriteState *sprite, s32 duration, u32 flags);

void FUN_0029e788()
{
    MenuSessionResetViewIV *session = (MenuSessionResetViewIV *)g_gameGlobals.instance;
    spriteStartAnimationByIndex(&session->headers[0], 0);
    spriteStartAnimationByIndex(&session->headers[1], 1);
    spriteStartAnimationByIndex(&session->headers[2], 2);
    for (s32 index = 0; index < 10; ++index) {
        timerStart(&session->primary[index], 4, 0);
        timerStart(&session->secondary[index], 1, 0);
    }
    MenuSessionResetViewIV *current = (MenuSessionResetViewIV *)g_gameGlobals.instance;
    current->flag1e60 = 0;
    if (current->kind != 9) {
        s32 mode = current->mode;
        if (mode == 4 || mode == 5 || mode == 6) {
            current->selection = 0;
        }
    }
    session->first = 0;
    session->flag12f0 = 0;
    session->second = 0;
    session->active = 0;
    current->state = 0;
    current->mode = 1;
}
}
