/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00500df8` (_code @ 0x500df8, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00192de4. */


void FUN_00500df8(char *param_1,unsigned int *param_2,int param_3)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (*param_1 != '\0') {
    if (param_1[1] != '\0') {
      if ((param_1[1] == '\x01') && (param_1[2] == '\x01')) {
LAB_00500e64:
        temp_v0 = 2;
        *param_2 = temp_v0;
        param_2[1] = 0xf0040;
        if (param_3 == 0) {
          return;
        }
        FUN_00192de4(*(int *)(param_1 + 4) + 0x7c,param_2 + 2,1);
        return;
      }
    }
    else if (param_1[2] == '\0') goto LAB_00500e64;
    temp_v0 = 1;
  }
  *param_2 = temp_v0;
  param_2[1] = 0xf0040;
  if (param_3 == 0) {
    return;
  }
  FUN_00192de4(*(int *)(param_1 + 4) + 0x7c,param_2 + 2,1);
  return;
}
