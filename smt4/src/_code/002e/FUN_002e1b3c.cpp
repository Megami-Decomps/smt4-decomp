/* NON_MATCHING: compiler folds the array stride and member offsets differently from retail. */
#include "common.h"

namespace { struct GameData { u8 padding[0x24414]; u8 records[12][76]; }; }

extern "C" {
extern GameData *g_GameDataBlocks;
void rt_aeabi_memclr(void *buffer, u32 size);
void FUN_002e1b3c(u32 index)
{
    if (index < 12) { rt_aeabi_memclr(g_GameDataBlocks->records[index], 76); }
}
}
