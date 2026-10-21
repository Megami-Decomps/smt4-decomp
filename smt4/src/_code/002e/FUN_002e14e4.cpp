/* NON_MATCHING: compiler folds the array stride and member offsets differently from retail. */
#include "common.h"

namespace { struct Record { u8 padding[0x41c]; u32 active; u8 reserved[0x224]; u32 value; u8 tail[0x1c8]; }; struct Audio { u8 padding[0x4bc]; Record records[4]; }; }

extern "C" {
extern Audio *g_asdSound;
u32 FUN_002e14e4(u32 index)
{
    if (index < 4 && g_asdSound->records[index].active != 0) { return g_asdSound->records[index].value; }
    return 0xffffffff;
}
}
