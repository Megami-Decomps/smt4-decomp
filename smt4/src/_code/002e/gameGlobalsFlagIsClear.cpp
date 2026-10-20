/* Returns 1 if the game globals' flag byte (+0xb4 of the area at +0x1e00 of the block at +4) is clear. */
#include "common.h"

extern "C" {

struct Block002e318c {
    /* 0x0000 */ u8 unk0000[1];
};

struct Globals002e318c {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Block002e318c *block;
};

extern Globals002e318c g_gameGlobals;

s32 gameGlobalsFlagIsClear(void)
{
    u8 *area = (u8 *)g_gameGlobals.block + 0x1e00;

    return area[180] == 0;
}

}
