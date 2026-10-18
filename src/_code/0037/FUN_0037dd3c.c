/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037dd3c` (_code @ 0x37dd3c, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001312b4. */
/* Supplied declaration required: FUN_00235870. */
/* Supplied declaration required: FUN_0023592c. */
/* Supplied declaration required: FUN_00235c44. */


void FUN_0037dd3c(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  if (param_2 == 0) {
    *(unsigned char *)(param_1 + 0x48) = 0;
  }
  else if (param_2 == 1) {
    *(unsigned char *)(param_1 + 0x48) = 1;
  }
  else {
    if (param_2 != 2) {
      if (param_2 != 3) {
        return;
      }
      for (temp_v0 = *(int *)(param_1 + 0xc4); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x138)) {
        FUN_00235c44(temp_v0);
        FUN_001312b4(temp_v0);
      }
    }
    else {
      FUN_0023592c();
      for (temp_v0 = *(int *)(param_1 + 0xc4); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x138)) {
        if (*(char *)(temp_v0 + 0xc6) != '\0') {
          FUN_00235870(temp_v0);
        }
      }
      for (temp_v0 = *(int *)(param_1 + 0xc4); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x138)) {
        FUN_00235c44(temp_v0);
      }
    }
    *(unsigned int *)(param_1 + 0xc4) = 0;
    *(unsigned char *)(param_1 + 0x48) = 1;
  }
  return;
}
