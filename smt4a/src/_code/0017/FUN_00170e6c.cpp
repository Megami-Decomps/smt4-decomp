#include "common.h"

extern "C" {

typedef struct Global5891b0 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s8 active;
} Global5891b0;
extern Global5891b0 DAT_005891b0;

void FUN_0016e758(void);
void FUN_00189938(void);
s32 FUN_001c6e20(void);

/* Toggles the active state: with `deactivate` set, runs FUN_00189938 and clears `active` if it was set; otherwise, if FUN_001c6e20 allows it, runs FUN_0016e758 and sets `active`. */
void FUN_00170e6c(s32 deactivate)
{
    if (deactivate != 0) {
        if (DAT_005891b0.active != 0) {
            FUN_00189938();
            DAT_005891b0.active = 0;
        }
    } else {
        if (FUN_001c6e20() != 0) {
            FUN_0016e758();
            DAT_005891b0.active = 1;
        }
    }
}

} /* extern "C" */
