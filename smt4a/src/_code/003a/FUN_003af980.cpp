#include "common.h"

struct MessageWork {
    /* 0x000 */ u8 unk000[0x154];
    /* 0x154 */ u8 mode;
    /* 0x155 */ u8 unk155[0xbdb];
    /* 0xD30 */ u8 sprite[1];
};

extern "C" {

extern struct {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ MessageWork *work;
} g_messageMain;

void uiSpriteSelectAnim(void *sprite, s32 anim);

/* Script command: plays animation 7 on the message sprite and sets the message mode to 4. */
u32 FUN_003af980(void)
{
    MessageWork *work = g_messageMain.work;

    uiSpriteSelectAnim(work->sprite, 7);
    work->mode = 4;
    return 1;
}

} /* extern "C" */
