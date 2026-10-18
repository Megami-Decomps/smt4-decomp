/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00154e34` (_code @ 0x154e34, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0063f4c5; /* 0x63f4c5 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0015e874. */


void FUN_00154e34(unsigned int param_1)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned int in_fpscr;
  
  DAT_0063f4c5 = (unsigned char)param_1;
  if (param_1 >= 0x41) {
    DAT_0063f4c5 = 0x40;
  }
  if (param_1 != 0) {
    VectorUnsignedToFloat((unsigned int)DAT_0063f4c5,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  temp_v1 = 0;
  do {
    temp_v0 = *(int *)(temp_v1 * 4 + 0x63f2f8);
    if (temp_v0 != 0) {
      FUN_0015e874(temp_v0,0);
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  return;
}
