/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023a620` (_code @ 0x23a620, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00225dac. */
extern int FUN_003eab5c(int);


unsigned int FUN_0023a620(int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (param_1 == 0) {
    temp_v0 = 1;
    *param_3 = 0;
  }
  else {
    temp_v1 = *(int *)(param_1 + 4);
    FUN_00225dac();
    temp_v2 = *(int *)(temp_v1 + 0x10);
    if (temp_v2 != 0) {
      temp_v1 = *(int *)(temp_v2 + 0x48);
    }
    if (((temp_v2 != 0 && temp_v1 != 0) && (temp_v1 = FUN_003eab5c(temp_v2), temp_v1 != 0)) &&
       (*(char *)(temp_v1 + 0x14) == '\0')) {
      *param_3 = *(unsigned int *)(temp_v2 + 0x48);
      return 0;
    }
    temp_v0 = 0xe;
    *param_3 = 0;
  }
  return temp_v0;
}
