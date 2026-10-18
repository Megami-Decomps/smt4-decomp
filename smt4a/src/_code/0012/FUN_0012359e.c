/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012359e` (_code @ 0x12359e, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */


void FUN_0012359e(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int uStack_10;
  unsigned int uStack_c;
  unsigned int uStack_8;
  
  uStack_10 = param_2;
  uStack_c = param_3;
  uStack_8 = param_4;
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(&uStack_10,temp_v0 + 0x58);
  FUN_002e6e5c(&uStack_10);
  return;
}
