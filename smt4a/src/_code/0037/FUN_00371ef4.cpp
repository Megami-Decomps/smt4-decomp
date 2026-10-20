#include "common.h"

extern "C" {

typedef struct StatusDownMode {
    /* 0x000 */ u8 unk000[0x518];
    /* 0x518 */ s32 mode;
    /* 0x51C */ s32 prevMode;
    /* 0x520 */ u8 unk520[4];
    /* 0x524 */ s32 unk524;
} StatusDownMode;

extern StatusDownMode *g_statusDown;

extern void FUN_00230d30(void);

/* Switches the status screen to mode 4, remembering the previous mode. */
void FUN_00371ef4(void)
{
    StatusDownMode *status = g_statusDown;

    status->unk524 = 0;
    status->prevMode = status->mode;
    status->mode = 4;
    FUN_00230d30();
}

}
