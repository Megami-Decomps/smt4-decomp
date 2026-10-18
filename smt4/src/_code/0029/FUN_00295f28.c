/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00295f28` (_code @ 0x295f28, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c0cc4(void);
/* Supplied declaration required: FUN_002c0cec. */


unsigned int FUN_00295f28(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  FUN_002c0cec(9,1);
  temp_v0 = FUN_002c0cc4();
  if (param_1 < 99) {
    temp_v1 = *(unsigned int *)((temp_v0 + param_1 * 4) - 4);
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}
