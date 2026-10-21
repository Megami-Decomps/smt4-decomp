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
    /* 0x000 */ u32 job;
    /* 0x004 */ u8 unk004[0xC];
    /* 0x010 */ s32 state;
    /* 0x014 */ u8 unk014[0x20];
    /* 0x034 */ HelpButton buttons[6];
    /* 0x37C */ u8 unk37C[0x118];
    /* 0x494 */ HelpSlot slots[6];
    /* 0x4AC */ u8 unk4AC[0xAC];
    /* 0x558 */ u32 slotHeap;
    /* 0x55C */ u8 unk55C[4];
    /* 0x560 */ u32 process;
} HelpBlock;

typedef struct HelpHolder {
    /* 0x0 */ s8 users;            /* reference count of the button help */
    /* 0x1 */ u8 unk1[3];
    /* 0x4 */ HelpBlock *block;
} HelpHolder;

extern HelpHolder g_buttonHelp;

extern void asdMemFreeSlot(u32 slot);
extern void FUN_002bee58(HelpButton *button, s32 flag);
extern void ifTouchDecrementTimer(void);
extern void scrScriptProcessDestroy(u32 process);
extern void jobStop(u32 job, s32 arg);
extern void asdMemFree(void *block);

/* Drops a reference to the button help; on the last one releases its buttons, script process and job and frees the block. */
void buttonHelpRelease(void)
{
    HelpBlock *block;
    s32 i;

    g_buttonHelp.users--;
    if (g_buttonHelp.users <= 0) {
        block = g_buttonHelp.block;
        asdMemFreeSlot(block->slotHeap);
        block->slotHeap = 0;
        if (block->state != 3) {
            for (i = 0; i < 6; i++) {
                FUN_002bee58(&block->buttons[i], 1);
                if (block->slots[i].kind != 0) {
                    ifTouchDecrementTimer();
                }
            }
        }
        scrScriptProcessDestroy(block->process);
        jobStop(block->job, 0);
        asdMemFree(block);
        g_buttonHelp.block = NULL;
        g_buttonHelp.users = 0;
    }
}

} /* extern "C" */
