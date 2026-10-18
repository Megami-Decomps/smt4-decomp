/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023a558` (_code @ 0x23a558, 0xc8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00225dac. */
/* Supplied declaration required: FUN_003aff38. */
/* Supplied declaration required: FUN_003ea54c. */
extern unsigned int *FUN_003eab5c(int);


unsigned int
FUN_0023a558(int param_1,unsigned int param_2,unsigned int *param_3,unsigned int *param_4,
            unsigned int *param_5,unsigned int *param_6)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = *(int *)(param_1 + 4);
  FUN_00225dac();
  temp_v2 = *(int *)(temp_v0 + 0x10);
  if (temp_v2 != 0) {
    temp_v0 = *(int *)(temp_v2 + 0x48);
  }
  if (temp_v2 != 0 && temp_v0 != 0) {
    puVar2 = (unsigned int *)FUN_003eab5c(temp_v2);
    if (puVar2 != (unsigned int *)0x0) {
      if (*(char *)(puVar2 + 5) == '\0') {
        FUN_003ea54c(temp_v2,param_3,param_4);
        if (temp_v2 == 0) {
          return 9;
        }
        *param_5 = puVar2[4];
        temp_v1 = puVar2[1];
        *param_6 = *puVar2;
        param_6[1] = temp_v1;
        return 0;
      }
      FUN_003aff38(temp_v2);
    }
    *param_3 = 0;
    *param_4 = 0;
    *param_5 = 0;
    *param_6 = 0xffffffff;
    param_6[1] = 0xffffffff;
    return 0x14;
  }
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0xffffffff;
  param_6[1] = 0xffffffff;
  return 0xe;
}
