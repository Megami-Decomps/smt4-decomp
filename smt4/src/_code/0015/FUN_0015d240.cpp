/* NON_MATCHING: mid-flow mov r0, r0 (nop) in a leaf with no lr save; not a removed call, cause unknown. */
#include "common.h"

struct Entry68 {
    u8 unk00[0x68];
    u32 handle;
};

extern "C" {
void FUN_0015e3a4(u32 handle, u32 value);

void FUN_0015d240(Entry68 **table, s32 index, u32 value)
{
    FUN_0015e3a4(table[index]->handle, value);
}
}
