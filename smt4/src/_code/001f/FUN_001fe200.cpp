#include "common.h"

extern "C" {

typedef struct ViewTarget {
    /* 0x00 */ u8 unk00[5];
    /* 0x05 */ u8 mode;
    /* 0x06 */ u8 unk06[0x12];
    /* 0x18 */ void *handle;
} ViewTarget;

typedef struct ViewHolder {
    /* 0x00 */ ViewTarget *target;
} ViewHolder;

extern int FUN_003a2f88(void);

extern ViewHolder g_shop;

/* Calls FUN_003a2f88 when the held target is in mode 0-2 and has a handle; always returns 0. */
u32 FUN_001fe200(void)
{
    ViewTarget *target = g_shop.target;

    if (target->mode == 0 || target->mode == 1 || target->mode == 2) {
        if (target != NULL && target->handle != NULL) {
            FUN_003a2f88();
        }
    }
    return 0;
}

} /* extern "C" */
