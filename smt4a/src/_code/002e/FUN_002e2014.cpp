#include "common.h"

extern "C" {

typedef struct Screen {
    /* 0x000 */ u8 unk000[0x10F];
    /* 0x10F */ u8 flag;
} Screen;
extern Screen *DAT_0057f118;

/* Returns whether the flag byte at 0x10F of the screen at 0x57F118 is set. */
u8 FUN_002e2014(void)
{
    return DAT_0057f118->flag != 0;
}

} /* extern "C" */
