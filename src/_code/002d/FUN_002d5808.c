/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d5808` (_code @ 0x2d5808, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00269614. */
extern unsigned int FUN_00269644(void);
/* Supplied declaration required: FUN_002c23f8. */


unsigned int FUN_002d5808(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0x7e8;
  FUN_002c23f8();
  if (temp_v0 == 0) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = FUN_00269644();
  }
  FUN_00269614(temp_v1,param_2,param_1 * 6,param_1 << 2);
  return temp_v1;
}
