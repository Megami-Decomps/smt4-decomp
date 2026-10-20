/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033e014` (_code @ 0x33e014, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00324c78(int);

extern int DAT_0058103c; /* 0x58103c */

/* Supplied declaration required: FUN_00324c78. */
extern int FUN_00376f94(void);


void FUN_0033e014(int param_1,unsigned short param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0058103c;
  if (((param_1 != 0x24) &&
      ((temp_v1 = FUN_00376f94(), temp_v1 != 1 || (temp_v1 = FUN_00324c78(0x29), temp_v1 != 1)))) &&
     ((param_1 == 0x18 || ((param_1 >= 100 || (temp_v1 = FUN_00324c78(param_1), temp_v1 != 1)))))) {
    *(unsigned short *)(temp_v0 + 0xcce8) = 1;
    *(unsigned short *)(temp_v0 + 0xccea) = 0;
    *(short *)(temp_v0 + 0xccec) = (short)param_1;
    *(unsigned short *)(temp_v0 + 0xccee) = param_2;
  }
  return;
}

} /* extern "C" */
