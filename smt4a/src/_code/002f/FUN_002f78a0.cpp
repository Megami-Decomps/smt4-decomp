#include "ui/UiSpriteState.h"

struct MenuSpriteBankView {
    u8 unk0000[0x18];
    u32 state;
    u8 unk001c[0x61c];
    UiSpriteSource source; /* 0x638 */
    u8 unk0658[0x834];
    UiSpriteState slots[13]; /* 0xe8c */
    UiSpriteState label; /* 0x15a8 */
    UiSpriteState indicator; /* 0x1634 */
    u8 unk16c0[0x2bc];
    UiSpriteState cursor; /* 0x197c */
};
typedef char MenuSpriteBankOffsets[offsetof(MenuSpriteBankView, slots) == 0xe8c &&
    offsetof(MenuSpriteBankView, cursor) == 0x197c ? 1 : -1];

extern "C" {
void FUN_0014e188(UiSpriteState *, u32, u32, UiSpriteSource *, u32, f32);
void uiSpriteSetKeyframe(UiSpriteState *, s32, s32);
void uiSpriteSetImageKeyframe(UiSpriteState *, s32, s32);

/* Initialize the repeating menu sprites and their label, cursor and indicator. */
void FUN_002f78a0(MenuSpriteBankView *work)
{
    for (s32 i = 0; i < 13; ++i) {
        UiSpriteState *sprite = &work->slots[i];
        FUN_0014e188(sprite, 0x14, 0xbb9, &work->source, 0xc9, 1.0f);
        uiSpriteSetKeyframe(sprite, 10, 0);
        uiSpriteSetImageKeyframe(sprite, 0x13, 0);
    }
    FUN_0014e188(&work->label, 0x14, 0xbd8, &work->source, 0xc9, 1.0f);
    uiSpriteSetImageKeyframe(&work->label, 6, 0);
    FUN_0014e188(&work->cursor, 0x14, 0xbd8, &work->source, 0xc9, 1.0f);
    uiSpriteSelectAnim(&work->cursor, 8);
    work->state = 0;
    FUN_0014e188(&work->indicator, 0x14, 0xbd8, &work->source, 0xc9, 1.0f);
    uiSpriteSetImageKeyframe(&work->indicator, 0x16, 0);
}
}
