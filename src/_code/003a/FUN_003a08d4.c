/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a08d4` (_code @ 0x3a08d4, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002310d8(unsigned int);
/* Supplied declaration required: FUN_002466dc. */


int FUN_003a08d4(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002466dc();
  temp_v1 = FUN_002466dc(param_2);
  temp_v0 = temp_v0 - temp_v1;
  if (temp_v0 == 0) {
    temp_v0 = FUN_002310d8(param_1);
    temp_v1 = FUN_002310d8(param_2);
    temp_v0 = temp_v0 - temp_v1;
  }
  return temp_v0;
}
