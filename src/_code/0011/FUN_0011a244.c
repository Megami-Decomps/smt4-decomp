/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011a244` (_code @ 0x11a244, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e2f68; /* 0x4e2f68 */
extern unsigned char DAT_004e3135; /* 0x4e3135 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002bcd94. */


void FUN_0011a244(unsigned int param_1)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int in_fpscr;
  
  DAT_004e3135 = (unsigned char)param_1;
  if (param_1 >= 0x41) {
    DAT_004e3135 = 0x40;
  }
  if (param_1 != 0) {
    VectorUnsignedToFloat((unsigned int)DAT_004e3135,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  temp_v0 = 0;
  do {
    if (*(int *)(&DAT_004e2f68 + temp_v0 * 4) != 0) {
      FUN_002bcd94(*(int *)(&DAT_004e2f68 + temp_v0 * 4),0);
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 4);
  return;
}
