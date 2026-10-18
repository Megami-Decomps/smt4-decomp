/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00255318` (_code @ 0x255318, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0023de58. */
/* Supplied declaration required: FUN_00245e2c. */
/* Supplied declaration required: FUN_00282b94. */
extern int FUN_00293c98(void);


void FUN_00255318(unsigned int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = FUN_00293c98();
  FUN_00282b94(temp_v1,param_1);
  if (temp_v1 != 0) {
    temp_v1 = temp_v1 + param_2 * 2;
    param_3 = *(short *)(temp_v1 + 0x72) + param_3;
    temp_v2 = FUN_00245e2c(param_2);
    if (param_3 < temp_v2) {
      temp_v0 = FUN_00245e2c();
    }
    else {
      temp_v2 = FUN_0023de58(param_2);
      if (temp_v2 < param_3) {
        param_3 = FUN_0023de58();
      }
      temp_v0 = (unsigned short)param_3;
    }
    if (param_4 == 0) {
      *(unsigned short *)(temp_v1 + 0x72) = temp_v0;
    }
  }
  return;
}
