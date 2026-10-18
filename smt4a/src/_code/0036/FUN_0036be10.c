/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036be10` (_code @ 0x36be10, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0063f4bc; /* 0x63f4bc */
extern signed char DAT_0063f4c4; /* 0x63f4c4 */

/* Supplied declaration required: FUN_001742e4. */
/* Supplied declaration required: FUN_0037b0c0. */


void FUN_0036be10(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (((DAT_0063f4c4 != '\0') && (param_1 < 0x10)) && (temp_v0 = param_1, FUN_0037b0c0(), temp_v0 != 0))
  {
    temp_v1 = *(int *)(param_1 * 4 + 0x63f2f8);
    if (temp_v1 != 0) {
      FUN_001742e4(temp_v1,param_2);
    }
    DAT_0063f4bc = DAT_0063f4bc & ~(1 << (param_1 & 0xff));
  }
  return;
}
