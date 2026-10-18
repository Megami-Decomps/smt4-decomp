/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cc618` (_code @ 0x3cc618, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_003cc618(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_2 + 4);
  if (temp_v0 != 0) {
    FUN_003283ac(*(unsigned short *)(temp_v0 + *(int *)(temp_v0 + 0x74c0) * 0x150 + 0x4564));
  }
  else if (*(int *)(param_2 + 8) != 0) {
    FUN_003283ac(*(unsigned short *)(*(int *)(param_2 + 8) + 0x38));
  }
  return 1;
}
