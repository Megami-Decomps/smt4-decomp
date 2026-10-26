/* NON_MATCHING: scheduling only: same stores and calls, but retail loads g_messageMain first and interleaves the constant moves and the vstr differently. */
#include "common.h"
#include "sys/RuntimeObjects.h"

/* The message window object; only the fields the value popup sets are named. */
struct MessagePopupWindow {
    /* 0x000 */ u8 unk000[0x170];
    /* 0x170 */ u32 unk170;
    /* 0x174 */ u32 unk174;
    /* 0x178 */ s32 value;
    /* 0x17C */ u8 enabledA;
    /* 0x17D */ s8 enabledB;
    /* 0x17E */ u8 unk17E[2];
    /* 0x180 */ s32 valueCopy;
    /* 0x184 */ f32 valueFloat;
    /* 0x188 */ u8 unk188[4];
    /* 0x18C */ u32 unk18C;
    /* 0x190 */ u8 unk190[4];
    /* 0x194 */ u8 source[0x10];
    /* 0x1A4 */ u8 unk1A4[0x95C];
    /* 0xB00 */ u8 sprite[1];
};

extern "C" {

extern MessagePopupWindow *g_messageMain[4]; /* 0x57f588 */
void FUN_0014e188(u8 *record, u32 value0, u32 value4, const u8 *source, u16 value38, f32 value20);
void uiSpriteSelectAnim(u8 *sprite, s32 anim);

/* Shows the value popup on message window 2 with `value` and its float form, and starts its sprite animation. */
u32 FUN_003a6b10(s32 value)
{
    MessagePopupWindow *window = g_messageMain[2];

    window->enabledB = 1;
    window->unk170 = 20;
    f32 valueFloat = (f32)value;
    window->value = value;
    window->unk174 = 20;
    window->unk18C = 0;
    window->enabledA = 1;
    window->valueCopy = value;
    window->valueFloat = valueFloat;
    FUN_0014e188(window->sprite, 8, 0xffffffff, window->source, 11, 1.0f);
    pairSetFirstResetSecond(window->sprite, 0x17);
    uiSpriteSelectAnim(window->sprite, 6);
    return 1;
}

} /* extern "C" */
