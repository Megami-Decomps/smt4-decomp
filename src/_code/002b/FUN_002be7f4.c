/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002be7f4` (_code @ 0x2be7f4, 0x8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c6a1a. */
/* Supplied declaration required: FUN_002c6a2e. */


unsigned int FUN_002be7f4(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int uStack_20;
  unsigned int uStack_1c;
  int uStack_8;
  unsigned int uStack_4;
  
  uStack_20 = param_1;
  uStack_1c = param_4;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_002c6a2e(param_2,&uStack_20,&uStack_8,0x2c6a1b);
  FUN_002c6a1a(0,&uStack_20);
                    /* WARNING: Treating indirect jump as return */
  return param_2;
}
