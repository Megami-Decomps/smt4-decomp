#include "common.h"

extern "C" {

typedef struct Game {
    /* 0x0000 */ u8 unk0000[0x1368];
    /* 0x1368 */ s32 state;
    /* 0x136C */ u32 unk136C;
    /* 0x1370 */ u8 unk1370[4];
    /* 0x1374 */ u32 unk1374;
} Game;

typedef struct Global588fd0 {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ s8 depth;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ Game *game;
} Global588fd0;
extern Global588fd0 DAT_00588fd0;

void FUN_0014384c(s32 table);
void FUN_0014afd0(s32 table, s32 index);

/* Counts one more user of table 0x12: the first user (depth 0 or less) prepares it and runs FUN_0014afd0 on its three entries. */
void FUN_0023b410(void)
{
    s32 i;

    if (DAT_00588fd0.depth <= 0) {
        FUN_0014384c(0x12);
        i = 0;
        do {
            FUN_0014afd0(0x12, i);
            i = i + 1;
        } while (i < 3);
    }
    DAT_00588fd0.depth = DAT_00588fd0.depth + 1;
}

} /* extern "C" */
