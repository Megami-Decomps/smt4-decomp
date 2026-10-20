/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ea278` (_code @ 0x3ea278, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00573998; /* 0x573998 */
extern unsigned int DAT_0057399c; /* 0x57399c */


unsigned int FUN_003ea278(unsigned int param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  
  if ((param_2 == (unsigned int *)0x0) ||
     ((*param_2 & DAT_00573998) == 0 && (param_2[1] & DAT_0057399c) == 0)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
