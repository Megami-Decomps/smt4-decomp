/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002553c0` (_code @ 0x2553c0, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00282b94. */
extern int FUN_00293c98(void);


void FUN_002553c0(unsigned int param_1,int param_2,unsigned short param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00293c98();
  FUN_00282b94(temp_v0,param_1);
  if (temp_v0 != 0) {
    *(unsigned short *)(temp_v0 + param_2 * 2 + 0x72) = param_3;
  }
  return;
}
