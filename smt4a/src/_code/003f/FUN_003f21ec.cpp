#include "common.h"

extern "C" {

typedef struct Target {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 id;
} Target;

Target *FUN_003eaf20(void);
int FUN_004c6e24(s32 id);

/* Passes the id of FUN_003eaf20's target (if any) to FUN_004c6e24. */
void FUN_003f21ec(void)
{
    Target *target = FUN_003eaf20();

    if (target != NULL) {
        FUN_004c6e24(target->id);
    }
}

} /* extern "C" */
