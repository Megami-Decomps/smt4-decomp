/* shop/shopMain.c: the demon/item shop screen. */
#ifndef SHOP_SHOPMAIN_H
#define SHOP_SHOPMAIN_H

#include "common.h"
#include <stddef.h>

typedef struct ShopWork {
    /* 0x00 */ u32 task;   /* the screen's task handle */
    /* 0x04 */ u8 done;    /* the task has finished; the work area may be freed */
    /* 0x05 */ u8 screenMode;
    /* 0x06 */ u8 unk06[0x12];
    /* 0x18 */ u32 result; /* what shopGetResult reads */
} ShopWork;

/* The creation path exposes the argument and initialization fields. */
typedef struct ShopCreateWork {
    /* 0x00 */ u32 task;
    /* 0x04 */ u8 done;
    /* 0x05 */ u8 unk05;
    /* 0x06 */ u8 variant;
    /* 0x07 */ u8 unk07;
    /* 0x08 */ u32 mode;
    /* 0x0C */ u8 unk0c;
    /* 0x0D */ u8 unk0d[7];
    /* 0x14 */ u8 unk14;
    /* 0x15 */ u8 unk15[3];
    /* 0x18 */ u32 result;
} ShopCreateWork;

typedef char ShopCreateWorkSizeCheck[sizeof(ShopCreateWork) == sizeof(ShopWork) ? 1 : -1];
typedef char ShopCreateWorkModeOffsetCheck[offsetof(ShopCreateWork, mode) == 8 ? 1 : -1];
typedef char ShopCreateWorkResultOffsetCheck[offsetof(ShopCreateWork, result) == 0x18 ? 1 : -1];

typedef struct ShopGlobals {
    /* 0x00 */ ShopWork *work;
} ShopGlobals;

extern "C" {
u16 FUN_0049c9a0(const u16 *idPtr);
}

extern "C" {
void FUN_0049d140(int param_1,unsigned int param_2,unsigned char param_3);
}

#endif
