#include "shard/Shard0040.h"

extern "C" {

extern u16 *gameDataBlocksGetHalf280C4(s32 index);

u8 tableByteGet1(s32 index)
{
    return ((u8 *)gameDataBlocksGetHalf280C4(index))[1];
}

} /* extern "C" */
