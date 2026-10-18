/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300ae8` (_code @ 0x300ae8, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00558c98; /* 0x558c98 */

/* Supplied declaration required: FUN_002e75fa. */
/* Supplied declaration required: FUN_002ecf28. */
/* Supplied declaration required: FUN_002f3d88. */


unsigned int * FUN_00300ae8(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00558c98;
  param_1[1] = param_2;
  param_1[2] = 0;
  *(unsigned char *)(param_1 + 3) = 0;
  temp_v0 = FUN_002ecf28();
  if (temp_v0 != 0) {
    FUN_002ecf28();
    FUN_002e75fa();
  }
  else {
    FUN_002f3d88();
  }
  return param_1;
}
