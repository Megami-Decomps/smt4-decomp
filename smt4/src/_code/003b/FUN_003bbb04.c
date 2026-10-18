/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bbb04` (_code @ 0x3bbb04, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00248a9c(void);
/* Supplied declaration required: FUN_002eb7f4. */


void FUN_003bbb04(unsigned int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00248a9c();
  temp_v1 = 0;
  if (temp_v1 < param_4) {
    do {
      if (temp_v0 <= temp_v1 + param_3) {
        return;
      }
      FUN_002eb7f4(temp_v1 + param_3,param_2 + temp_v1 * 0x4c);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < param_4);
  }
  return;
}
