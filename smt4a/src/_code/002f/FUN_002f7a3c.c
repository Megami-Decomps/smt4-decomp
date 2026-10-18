/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7a3c` (_code @ 0x2f7a3c, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002e9598. */
/* Supplied declaration required: FUN_00310e7a. */


unsigned int FUN_002f7a3c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int uStack_10;
  unsigned int uStack_c;
  
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_00310e7a(&uStack_10,param_1,param_2);
  FUN_002e9598(param_1,&uStack_10);
  FUN_002e9318(&uStack_10);
  return param_1;
}
