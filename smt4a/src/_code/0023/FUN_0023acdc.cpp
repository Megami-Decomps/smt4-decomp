/* NON_MATCHING: address formation now matches (0x88 sub-base pointer); only the bit/byte-load schedule and a register differ. */
#include "shard/W4_W4Match6b_GameDataBlock.h"

// Set the persistent entry bit for a valid identifier in the range 1..500.
extern "C" void FUN_0023acdc(u32 id)
{
    if (id != 0 && id < 501) {
        GameDataSub* sub = &g_gameDataBlocks.saveBlock->save.sub;
        u8* flag = &sub->entryFlags[(s32)id / 8];
        u8 mask = (u8)(1u << ((s32)id % 8));
        *flag = (u8)(*flag | mask);
    }
}
