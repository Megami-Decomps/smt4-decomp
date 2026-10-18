/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e78d0` (_code @ 0x2e78d0, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0059496c; /* 0x59496c */

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_0030f3ee. */


void FUN_002e78d0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  if (DAT_0059496c != '\0') {
    FUN_002e6e34(&uStack_20,param_1 + 0xb8);
    FUN_0030f3ee(param_1,param_2,param_3);
    FUN_002e6e5c(&uStack_20);
    return;
  }
  FUN_0030f3ee(param_1);
  return;
}
