#include "common.h"

extern "C" {

typedef struct Block47e200 {
    /* 0x000 */ u8 unk000[0x304];
    /* 0x304 */ s32 state;
} Block47e200;

extern Block47e200 DAT_0047e200;

/* Maps the state (4 or 5) to a direction: 1 or -1; 0 for any other state. */
s32 FUN_00246708(void)
{
    switch (DAT_0047e200.state) {
    case 4:
        return 1;
    case 5:
        return -1;
    default:
        return 0;
    }
}

} /* extern "C" */
