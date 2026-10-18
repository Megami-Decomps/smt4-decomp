/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00339860` (_code @ 0x339860, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00254a2c. */
/* Supplied declaration required: FUN_0025beb8. */
/* Supplied declaration required: FUN_002a0428. */
extern int FUN_002adee0(unsigned int);
/* Supplied declaration required: FUN_002d582c. */


unsigned int FUN_00339860(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002adee0(*(unsigned int *)(param_1 + 0x4398));
  temp_v1 = 0;
  if (temp_v0 != 0) {
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x4398) + 8) + 0xc) < 0) {
      FUN_002a0428(*(int *)(param_1 + 0x4398),1);
      FUN_0025beb8(*(unsigned int *)(*(int *)(param_1 + 0x4398) + 8),0);
      FUN_00254a2c(*(unsigned int *)(*(int *)(param_1 + 0x4398) + 8),1);
      FUN_002d582c(*(unsigned int *)(param_1 + 0x4398));
    }
    temp_v1 = 1;
  }
  return temp_v1;
}
