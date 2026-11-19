#include "common.h"

extern "C" {
s32 FUN_003522f8(u32 *reply, u32 descriptorAddress, u32 count, u64 id, u32 flags);

/* Forwards the complete service request (the twin of Apocalypse's FUN_00426800). */
s32 FUN_003520dc(u32 *reply, u32 descriptorAddress, u32 count, u64 id, u32 flags)
{
    return FUN_003522f8(reply, descriptorAddress, count, id, flags);
}
}
