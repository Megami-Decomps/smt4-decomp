#include "common.h"

struct PlayerView {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s16 values[5];
};

extern "C" {
s32 scrGetArg(u32 index);
PlayerView *gameGetPlayerData(void);
void scrSetResult(s32 result);
}

/* Script command: returns one of the player's five values, chosen by the first argument. */
extern "C" s32 scrGetPlayerValue(void)
{
    switch (scrGetArg(0)) {
    case 0:
        scrSetResult(gameGetPlayerData()->values[0]);
        break;
    case 1:
        scrSetResult(gameGetPlayerData()->values[1]);
        break;
    case 2:
        scrSetResult(gameGetPlayerData()->values[2]);
        break;
    case 3:
        scrSetResult(gameGetPlayerData()->values[3]);
        break;
    case 4:
        scrSetResult(gameGetPlayerData()->values[4]);
        break;
    }
    return 1;
}
