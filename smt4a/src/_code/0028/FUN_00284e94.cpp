#include "common.h"

extern "C" {

u32 FUN_0026c3a0(void);

typedef struct Screen {
    /* 0x000 */ u8 unk000[0x1C];
    /* 0x01C */ s32 state;
    /* 0x020 */ u8 unk020[0x994];
    /* 0x9B4 */ u8 mode;
} Screen;
extern Screen *DAT_0057f268;

/* Returns 1 unless the screen is in state 0x1B with a mode other than 1, 6, 7, 0xD and 0xC, where FUN_0026c3a0's answer is used; returns 0 for any other state. */
u32 FUN_00284e94(void)
{
    u8 mode;
    u32 result;

    if (DAT_0057f268 != NULL) {
        if (DAT_0057f268->state != 0x1B) {
            return 0;
        }
        mode = DAT_0057f268->mode;
        if ((mode != 1 && mode != 6) && ((mode != 7 && mode != 0xD) && mode != 0xC)) {
            result = FUN_0026c3a0();
            return result;
        }
    }
    return 1;
}

} /* extern "C" */
