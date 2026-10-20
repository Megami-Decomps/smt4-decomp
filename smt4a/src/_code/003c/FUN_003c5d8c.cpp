#include "common.h"

extern "C" {

typedef struct Block5cc200 {
    /* 0x000 */ u8 unk000[0x304];
    /* 0x304 */ s32 state;
} Block5cc200;

extern Block5cc200 DAT_005cc200;

/* Maps the state (4 or 5) to a direction: 1 or -1; 0 for any other state. */
s32 FUN_003c5d8c(void)
{
    switch (DAT_005cc200.state) {
    case 4:
        return 1;
    case 5:
        return -1;
    default:
        return 0;
    }
}

} /* extern "C" */
