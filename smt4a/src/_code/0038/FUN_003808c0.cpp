#include "common.h"

struct PlayerStats {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s16 stat0;
    /* 0x22 */ s16 stat1;
    /* 0x24 */ s16 stat2;
    /* 0x26 */ s16 stat3;
    /* 0x28 */ s16 stat4;
};

extern "C" {

PlayerStats *gameGetPlayerData(void);
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);

/* Script command: reports one of the five player stats picked by the first argument. */
u32 FUN_003808c0(void)
{
    switch (scrGetArg(0)) {
    case 0:
        scrSetResult(gameGetPlayerData()->stat0);
        break;
    case 1:
        scrSetResult(gameGetPlayerData()->stat1);
        break;
    case 2:
        scrSetResult(gameGetPlayerData()->stat2);
        break;
    case 3:
        scrSetResult(gameGetPlayerData()->stat3);
        break;
    case 4:
        scrSetResult(gameGetPlayerData()->stat4);
        break;
    }
    return 1;
}

} /* extern "C" */
