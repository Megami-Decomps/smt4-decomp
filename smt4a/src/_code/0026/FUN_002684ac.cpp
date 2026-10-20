/* Adds `mask` to the game data block's flags (+0x18), clears its byte +1 and continues with FUN_00140e00(0) (a tail call). */
#include "common.h"

extern "C" {

struct Blocks002684ac {
    /* 0x00 */ u8 unk00[1];
    /* 0x01 */ u8 dirty;
    /* 0x02 */ u8 unk02[0x16];
    /* 0x18 */ u32 flags;
};

extern Blocks002684ac g_gameDataBlocks;

void FUN_00140e00(u32 arg);

void FUN_002684ac(u32 mask)
{
    g_gameDataBlocks.dirty = 0;
    g_gameDataBlocks.flags |= mask;
    FUN_00140e00(0);
}

}
