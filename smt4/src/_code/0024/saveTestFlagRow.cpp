/* NON_MATCHING: compiler changes the bit-mask shift and flag-byte address register schedule. */
#include "common.h"
extern "C" {
struct RecordBitFlags { u8 unk00[0xCF0]; u8 bits[1]; };
RecordBitFlags *FUN_0023d2ec(void);
/* Test a bit in one of the fixed eight-byte flag rows. */
s32 saveTestFlagRow(u32 row,u32 index) { RecordBitFlags *record=FUN_0023d2ec(); u8 mask=(u8)(1u<<(index&7)); return (record->bits[row*8+(index>>3)]&mask)!=0; }
}
