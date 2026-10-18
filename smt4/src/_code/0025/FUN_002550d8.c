/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002550d8` (_code @ 0x2550d8, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0023dcfc. */
/* Supplied declaration required: FUN_00245cc0. */
/* Supplied declaration required: FUN_00282924. */
extern int FUN_002939f4(void);


void FUN_002550d8(unsigned int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = FUN_002939f4();
  FUN_00282924(temp_v1,param_1);
  if (temp_v1 != 0) {
    temp_v1 = temp_v1 + param_2 * 2;
    param_3 = *(short *)(temp_v1 + 0x72) + param_3;
    temp_v2 = FUN_00245cc0(param_2);
    if (param_3 < temp_v2) {
      temp_v0 = FUN_00245cc0();
    }
    else {
      temp_v2 = FUN_0023dcfc(param_2);
      if (temp_v2 < param_3) {
        param_3 = FUN_0023dcfc();
      }
      temp_v0 = (unsigned short)param_3;
    }
    if (param_4 == 0) {
      *(unsigned short *)(temp_v1 + 0x72) = temp_v0;
    }
  }
  return;
}
