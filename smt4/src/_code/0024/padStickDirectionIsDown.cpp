#include "common.h"

extern "C" {

typedef struct Stick {
    /* 0x00 */ u8 unk00[0x74];
    /* 0x74 */ s16 x;
} Stick;

extern Stick *gameGetPlayerData(void);

/* Direction 4 (right) triggers at x >= 800, direction 5 (left) at x <= -800. */
u32 padStickDirectionIsDown(int direction)
{
    Stick *stick = gameGetPlayerData();

    if (direction != 4) {
        if (direction == 5 && stick->x <= -800) {
            return 1;
        }
        return 0;
    }
    if (stick->x >= 800) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
