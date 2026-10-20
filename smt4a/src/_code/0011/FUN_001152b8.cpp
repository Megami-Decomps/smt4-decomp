/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001152b8` (_code @ 0x1152b8, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00301430(...);

/* Supplied declaration required: FUN_00301430. */


unsigned int FUN_001152b8(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = *(unsigned int *)(param_1 + 4);
  FUN_00301430(temp_v0,3,0);
  if (param_2 != 0) {
    temp_v0 = temp_v0 | 4;
  }
  else {
    temp_v0 = temp_v0 & 0xfffffffb;
  }
  temp_v1 = *(int *)(param_1 + 4);
  FUN_00301430(temp_v1,4,temp_v0);
  if (temp_v1 < 0) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
