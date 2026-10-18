/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a1d4` (_code @ 0x13a1d4, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

/* Supplied declaration required: FUN_00153468. */
/* Supplied declaration required: FUN_0015354c. */


void FUN_0013a1d4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  do {
    temp_v1 = (int)(char)temp_v0;
    *(unsigned short *)(param_1 + temp_v1 * 0x14) = 0xffff;
    FUN_00153468(&DAT_004e6f64,temp_v1);
    *(unsigned short *)(param_1 + temp_v1 * 0x34 + 0x28) = 0xffff;
    FUN_0015354c(&DAT_004e6f64,temp_v1);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 2);
  return;
}
