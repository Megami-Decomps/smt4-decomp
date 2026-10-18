/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c3c84` (_code @ 0x4c3c84, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_003f0e20. */


void FUN_004c3c84(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0014aa78();
  FUN_003f0e20(temp_v0,param_1);
  if (temp_v0 != 0) {
    *(unsigned int *)(temp_v0 + param_2 * 4 + 0x74) = param_3;
  }
  return;
}
