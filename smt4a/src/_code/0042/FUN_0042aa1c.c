/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042aa1c` (_code @ 0x42aa1c, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_6_stack;

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */


void FUN_0042aa1c(int param_1,unsigned int param_2,unsigned int param_3,int param_4,unsigned int param_5,
                 unsigned int param_6)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v0 = *(unsigned int *)(param_1 + 8);
  temp_v1 = *(unsigned int *)(param_1 + 0x10) - temp_v0;
  temp_v2 = *(int *)(param_1 + 0x14) -
          (*(int *)(param_1 + 0xc) + (unsigned int)(*(unsigned int *)(param_1 + 0x10) < temp_v0));
  temp_v3 = param_4 + (unsigned int)romwright_carry_4(param_3,param_6);
  temp_v4 = temp_v1 < param_3 + param_6;
  if ((int)(temp_v2 - (temp_v3 + (unsigned int)temp_v4)) < 0 !=
      (SBORROW4(temp_v2,temp_v3) != SBORROW4(temp_v2 - temp_v3,(unsigned int)temp_v4))) {
    param_6 = temp_v1 - param_3;
  }
  temp_v3 = *(int *)(param_1 + 0x18);
  temp_v2 = temp_v3;
  if (temp_v3 == 0) {
    temp_v2 = 2;
  }
  if (temp_v3 < 0) {
    if (temp_v2 < -8) {
      temp_v2 = 0;
    }
    else {
      temp_v2 = 1;
    }
  }
  else if (0 < temp_v3) {
    if (temp_v2 < 9) {
      temp_v2 = 3;
    }
    else {
      temp_v2 = 4;
    }
  }
  puVar1 = *(unsigned int **)(*(int *)(param_1 + 4) + temp_v2 * 4 + 0xc);
  (**(romwright_code **)*puVar1)
            (puVar1,param_2,param_3 + temp_v0,
             param_4 + *(int *)(param_1 + 0xc) + (unsigned int)romwright_carry_4(param_3,temp_v0),param_5,param_6);
  return;
}
