#include "shard/Shard0046.h"
#include "util/CalleeContracts.h"

extern "C" {

extern s32 packageFindRecordByName(u32 a, u32 type, u32 b);

u8 aocHasType36(u32 a, u32 b)
{
    return packageFindRecordByName(a, 0x36, b) != 0;
}

} /* extern "C" */
