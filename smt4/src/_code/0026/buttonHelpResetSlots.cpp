#include "common.h"

extern "C" {

typedef struct HelpButton {
    u8 data[0x8C]; /* 0x00 */
} HelpButton;

typedef struct HelpSlot {
    /* 0x0 */ u8 kind; /* 0 = unused */
    /* 0x1 */ u8 unk1[3];
} HelpSlot;

typedef struct HelpBlock {
    /* 0x000 */ u8 unk000[0x0C];
    /* 0x00C */ u32 unk0C;
    /* 0x010 */ s32 state;
    /* 0x014 */ u8 unk014[0x20];
    /* 0x034 */ HelpButton buttons[6];
    /* 0x37C */ u8 unk37C[0x118];
    /* 0x494 */ HelpSlot slots[6];
} HelpBlock;

typedef struct HelpHolder {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ HelpBlock *block;
} HelpHolder;

extern HelpHolder g_buttonHelp;

extern void ifTouchDecrementTimer(void);
extern void spriteStartAnimationByIndex(HelpButton *button, s32 flag);

/* Resets every button of the button help block and releases the held slots, then rewinds the
 * block's state. */
void buttonHelpResetSlots(void)
{
    HelpBlock *help = g_buttonHelp.block;
    s32 i;

    for (i = 0; i < 6; i++) {
        spriteStartAnimationByIndex(&help->buttons[i], 1);
        if (help->slots[i].kind != 0) {
            if (help->slots[i].kind == 7 || help->slots[i].kind == 9) {
                ifTouchDecrementTimer();
            }
            if (help->slots[i].kind == 8) {
                ifTouchDecrementTimer();
                ifTouchDecrementTimer();
            }
            ifTouchDecrementTimer();
        }
    }
    g_buttonHelp.block->state = 3;
    g_buttonHelp.block->unk0C = 0;
}

} /* extern "C" */
