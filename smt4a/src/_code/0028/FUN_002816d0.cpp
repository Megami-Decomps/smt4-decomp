#include "common.h"

extern "C" {

void linkHolderApplyFlag(u32 handle, s32 flag);
void msgWindowReset(void);

typedef struct Screen {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u32 handle;
    /* 0x008 */ u8 unk008[0xE0];
    /* 0x0E8 */ u32 unk0E8;
    /* 0x0EC */ u32 unk0EC;
    /* 0x0F0 */ u8 unk0F0[8];
    /* 0x0F8 */ u32 unk0F8;
    /* 0x0FC */ u8 unk0FC[0x13];
    /* 0x10F */ u8 unk10F;
    /* 0x110 */ u8 unk110[4];
    /* 0x114 */ u8 unk114;
    /* 0x115 */ u8 unk115[0x37];
    /* 0x14C */ u32 unk14C;
} Screen;
extern Screen *g_campCecEdit;

/* Resets the screen at 0x57F118 (if there is one): runs msgWindowReset and linkHolderApplyFlag and restores its fields to their initial values. */
void FUN_002816d0(void)
{
    Screen *screen;

    screen = g_campCecEdit;
    if (g_campCecEdit != NULL) {
        msgWindowReset();
        screen->unk114 = 0;
        linkHolderApplyFlag(screen->handle, 0);
        screen->unk10F = 1;
        screen->unk0E8 = 0xFFFFFFFF;
        screen->unk0F8 = 1;
        screen->unk0EC = 0xFFFFFFFF;
        screen->unk14C = 0;
    }
}

} /* extern "C" */
