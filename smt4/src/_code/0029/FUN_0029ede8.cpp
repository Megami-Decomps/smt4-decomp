#include "util/MemoryHelpers.h"

extern "C" {
extern u8 DAT_004def48[];
void FUN_001dba90(u8 *entry, u32 first, u32 second, u32 third);

void FUN_0029ede8(s32 index, u32 first, u32 second, u32 third)
{
    u8 *entry = &DAT_004def48[index * 0x60];
    memClearWords((u32 *)entry, 0x60);
    FUN_001dba90(entry, first, second, third);
}
}
