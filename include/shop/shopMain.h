/* shop/shopMain.c: the demon/item shop screen. */
#ifndef SHOP_SHOPMAIN_H
#define SHOP_SHOPMAIN_H

#include "common.h"

typedef struct ShopWork {
    /* 0x00 */ u32 task;   /* the screen's task handle */
    /* 0x04 */ u8 done;    /* the task has finished; the work area may be freed */
    /* 0x05 */ u8 unk05[0x13];
    /* 0x18 */ u32 result; /* what shopGetResult reads */
} ShopWork;

#endif
