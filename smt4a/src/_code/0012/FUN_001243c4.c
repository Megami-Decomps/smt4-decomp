/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001243c4` (_code @ 0x1243c4, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: aeabi_idivmod. */


unsigned int FUN_001243c4(unsigned int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  aeabi_idivmod(param_2,400);
  if ((temp_v0 != 0) &&
     ((aeabi_idivmod(param_2,100), temp_v1 == 0 || ((param_2 & 3) != 0)))) {
    return 0;
  }
  return 1;
}
