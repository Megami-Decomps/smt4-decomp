#include "shard/Shard0047.h"

extern "C" {

extern ByteAtD *FUN_001b2ca4(u32 a, u32 type, u32 b);

void aocClearFlagD_10(u32 a, u32 b)
{
    ByteAtD *record = FUN_001b2ca4(a, 0x10, b);

    if (record != NULL) {
        record->unk0D = 0;
    }
}

} /* extern "C" */
