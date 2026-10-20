#include "shard/Shard0031.h"

extern "C" {

/* The entry's unk20, or 0 when the entry is inactive. */
u32 FUN_0031d1a0(FlaggedEntry *entry)
{
    if (entry->inactive == 0) {
        return entry->unk20;
    }
    return 0;
}

} /* extern "C" */
