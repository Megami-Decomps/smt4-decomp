/* NON_MATCHING: compiler schedules address formation, prologue and conditional return differently from retail. */
#include "common.h"

namespace { struct Map { u8 padding[0xe58]; u32 flags[32]; }; }

extern "C" {
Map *gameGetMapBlock(void);
u32 FUN_002fb094(s32 bit)
{
    u32 mask = 1 << (bit & 31);
    return (gameGetMapBlock()->flags[bit / 32] & mask) != 0;
}
}
