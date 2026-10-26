#include "common.h"
extern "C" {
struct RecordBitFlags { u8 unk00[0xCF0]; u8 bits[1]; };
RecordBitFlags *FUN_0023d2ec(void);
/* Test a bit in one of the fixed eight-byte flag rows. */
s32 saveTestFlagRow(u32 row, u32 index)
{
    u8 *rowBits = &FUN_0023d2ec()->bits[row * 8];
    u8 mask = (u8)(1u << (index & 7));
    u32 byte = rowBits[index >> 3];
    return (mask & byte) != 0;
}
}
