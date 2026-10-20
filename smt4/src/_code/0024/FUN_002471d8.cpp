#include "common.h"

extern "C" {

typedef struct Stick {
    /* 0x00 */ u8 unk00[0x74];
    /* 0x74 */ s16 x;
} Stick;

extern Stick *FUN_002b63ac(void);

/* 5 when pushed left past -8, 4 when pushed right past 8, otherwise 1. */
u32 FUN_002471d8(void)
{
    Stick *stick = FUN_002b63ac();
    u32 direction;

    if (stick->x <= -9) {
        direction = 5;
    } else if (stick->x >= 9) {
        direction = 4;
    } else {
        direction = 1;
    }
    return direction;
}

} /* extern "C" */
