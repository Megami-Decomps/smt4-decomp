#include "common.h"

extern "C" {

typedef struct Stick {
    /* 0x00 */ u8 unk00[0x74];
    /* 0x74 */ s16 x;
} Stick;

extern Stick *gameGetPlayerData(void);

/* 5 when pushed left past -8, 4 when pushed right past 8, otherwise 1. */
u32 padGetStickHorizontalDirection(void)
{
    Stick *stick = gameGetPlayerData();
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
