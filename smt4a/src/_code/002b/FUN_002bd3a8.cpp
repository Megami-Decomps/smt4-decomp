#include "common.h"

extern "C" {

void FUN_0046b068(void);

typedef struct Target {
    /* 0x00 */ u8 unk00[0x19];
    /* 0x19 */ u8 mode;
    /* 0x1A */ u8 unk1A[2];
    /* 0x1C */ s32 handle;
} Target;

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Target *target;
} Holder;

/* When the target's mode is 1, 3 or 4 and it has a handle, runs FUN_0046b068; always returns 0. */
u32 FUN_002bd3a8(Holder *holder)
{
    u8 mode;
    Target *target;
    s32 handle;

    target = holder->target;
    mode = target->mode;
    if ((mode == 1 || mode == 3) || mode == 4) {
        handle = 0;
        if (target != NULL) {
            handle = target->handle;
        }
        if (target != NULL && handle != 0) {
            FUN_0046b068();
        }
    }
    return 0;
}

} /* extern "C" */
