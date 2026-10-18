/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027d9a8` (_code @ 0x27d9a8, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004651c0; /* 0x4651c0 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */


unsigned int FUN_0027d9a8(void)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_fpscr;
  
  DAT_004651c0 = DAT_004651c0 * 0x41c64e6d + 0x3039;
  temp_v0 = DAT_004651c0 >> 0x10;
  VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  return temp_v0;
}
