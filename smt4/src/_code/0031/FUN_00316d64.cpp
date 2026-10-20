/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00316d64` (_code @ 0x316d64, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c09d0(...);

/* Supplied declaration required: FUN_002c09d0. */


unsigned int FUN_00316d64(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (((param_1 == 0) || (temp_v0 = FUN_002c09d0(), temp_v0 != 0)) &&
     ((param_2 == 0 || (temp_v0 = FUN_002c09d0(param_2), temp_v0 == 0)))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
