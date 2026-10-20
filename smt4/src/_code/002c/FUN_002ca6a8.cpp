/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ca6a8` (_code @ 0x2ca6a8, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0020dd98(void);

/* Supplied declaration required: FUN_0020dd98. */


unsigned int FUN_002ca6a8(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(*param_1 + 0x18);
  if (((temp_v0 >= 2) && (temp_v0 < 0xb)) && (temp_v0 == 5 || temp_v0 == 6)) {
    FUN_0020dd98();
  }
  return 0;
}

} /* extern "C" */
