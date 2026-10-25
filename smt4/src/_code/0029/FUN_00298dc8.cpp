#include "common.h"
#include "shard/W5_W5Match7_ScriptUnit.h"

extern "C" {

extern u8 *gameGetFlagBlock(void);

u32 FUN_00298dc8(int index)
{
    u8 *base = gameGetFlagBlock();

    return (base[index * 4 + 0x200] & 2) >> 1;
}

} /* extern "C" */
