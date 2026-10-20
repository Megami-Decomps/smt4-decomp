#include "common.h"

extern "C" {

void FUN_0047c5a8(void);

typedef struct Target {
    /* 0x00 */ u8 unk00[0x1A];
    /* 0x1A */ u8 mode;
    /* 0x1B */ u8 unk1B;
    /* 0x1C */ s32 handle;
} Target;

/* When the target `*ref` is in mode 1, 2 or 3 and has a handle, runs FUN_0047c5a8; always returns 0. */
u32 FUN_002dec0c(Target **ref)
{
    u8 mode;
    Target *target;
    s32 handle;

    target = *ref;
    mode = target->mode;
    if ((mode == 1 || mode == 2) || mode == 3) {
        handle = 0;
        if (target != NULL) {
            handle = target->handle;
        }
        if (target != NULL && handle != 0) {
            FUN_0047c5a8();
        }
    }
    return 0;
}

} /* extern "C" */
