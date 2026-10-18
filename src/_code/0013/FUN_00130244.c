/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00130244` (_code @ 0x130244, 0xf8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002acb3c. */
/* Supplied declaration required: FUN_002bb8e4. */
/* Supplied declaration required: FUN_002bbd10. */


int FUN_00130244(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [524];
  
  *(char *)(param_1 + 0x1c) = (char)param_3;
  if (param_3 != 0) {
    temp_v2 = param_1 + 4;
    temp_v0 = 0;
    FUN_002acb3c();
    temp_v1 = temp_v0 + 1U;
    if (temp_v0 + 1U >= 0x107) {
      temp_v1 = 0x106;
    }
    FUN_002acb3c(temp_v3,param_2,temp_v1);
    *(unsigned int *)(param_1 + 0x10) = 0;
    *(unsigned int *)(param_1 + 0x14) = 0;
    *(unsigned int *)(param_1 + 8) = 0;
    *(unsigned int *)(param_1 + 0xc) = 0;
    FUN_002bb8e4(temp_v2,temp_v3,1);
    *(int *)(param_1 + 0x18) = temp_v2;
    return (temp_v2 >> 0x1f) + 1;
  }
  temp_v2 = param_1 + 4;
  temp_v0 = 0;
  FUN_002acb3c();
  temp_v1 = temp_v0 + 1U;
  if (temp_v0 + 1U >= 0x107) {
    temp_v1 = 0x106;
  }
  FUN_002acb3c(temp_v3,param_2,temp_v1);
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  FUN_002bb8e4(temp_v2,temp_v3,1);
  if ((temp_v2 < 0) && (temp_v2 < 0)) {
    FUN_002bbd10();
  }
  return 1;
}
