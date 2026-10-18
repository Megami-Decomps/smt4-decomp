/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00317a64` (_code @ 0x317a64, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bee58. */


unsigned int FUN_00317a64(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 8);
  FUN_002bee58(temp_v0 + 0x984,7);
  *(unsigned char *)(temp_v0 + 0x88) = 4;
  return 1;
}
