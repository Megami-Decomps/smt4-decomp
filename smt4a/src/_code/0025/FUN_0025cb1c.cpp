/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025cb1c` (_code @ 0x25cb1c, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorUnsignedToFloat(unsigned int, int);

extern unsigned int g_randState; /* 0x5b40a0 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */


unsigned int FUN_0025cb1c(void)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_fpscr;
  
  g_randState = g_randState * 0x41c64e6d + 0x3039;
  temp_v0 = g_randState >> 0x10;
  VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  return temp_v0;
}

} /* extern "C" */
