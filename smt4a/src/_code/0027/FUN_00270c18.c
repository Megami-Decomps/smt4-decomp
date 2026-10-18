/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00270c18` (_code @ 0x270c18, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00573c78; /* 0x573c78 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */


unsigned int FUN_00270c18(void)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_fpscr;
  
  DAT_00573c78 = DAT_00573c78 * 0x41c64e6d + 0x3039;
  temp_v0 = DAT_00573c78 >> 0x10;
  VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  return temp_v0;
}
