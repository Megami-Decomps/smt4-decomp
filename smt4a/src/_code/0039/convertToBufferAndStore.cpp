#include "shard/Shard0039.h"

extern "C" {

extern void FUN_002e6dd0(u8 *buffer, s32 size);
extern void FUN_002e342c(u8 *buffer, u32 src);
extern void FUN_00102af4(u16 *dst, u8 *buffer, u32 size);
extern void FUN_00438944(u16 *dst);

void convertToBufferAndStore(u32 src, u16 *dst)
{
    u8 buffer[0x104];

    FUN_002e6dd0(buffer, 0x100);
    FUN_002e342c(buffer, src);
    FUN_00102af4(dst, buffer, 0x100);
    FUN_00438944(dst);
}

} /* extern "C" */
