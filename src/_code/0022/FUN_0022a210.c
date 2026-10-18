/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022a210` (_code @ 0x22a210, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00432fc8; /* 0x432fc8 */

/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_002c4360. */


unsigned int FUN_0022a210(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = *(unsigned int *)(DAT_00432fc8 + 0x754);
  *(unsigned int *)(DAT_00432fc8 + 0x754) = temp_v1 & 0xffffff8f;
  if ((temp_v1 & 0x10) != 0) {
    *param_1 = 1;
    if (param_1[2] != 0) {
      FUN_002c4360();
      param_1[2] = 0;
    }
    if (param_1[3] != 0) {
      FUN_002c4360();
      param_1[3] = 0;
    }
    if (param_1[4] != 0) {
      FUN_002c4360();
      param_1[4] = 0;
    }
    return 0;
  }
  temp_v0 = param_1[4];
  FUN_002972f8(temp_v0,param_1[3]);
  param_1[5] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x108) = 2;
  *param_1 = 0;
  return 0;
}
