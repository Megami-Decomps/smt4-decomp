#include "shard/Shard004C.h"

extern "C" {

u8 hasAnyOf3DC2(u32 mask)
{
    return (mask & 0x3DC2) != 0;
}

} /* extern "C" */
