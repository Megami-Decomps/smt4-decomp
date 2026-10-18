/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001588c8` (_code @ 0x1588c8, 0xc0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;


void FUN_001588c8(int *param_1,int *param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  param_1[0x1f] = param_4;
  temp_v2 = 0;
  for (temp_v0 = param_3; temp_v0 != 0; temp_v0 = temp_v0 >> 1) {
    if ((temp_v0 & 1) != 0) {
      temp_v2 = temp_v2 + 1;
    }
  }
  temp_v1 = (**(romwright_code **)(*param_2 + 0x10))(param_2);
  if (temp_v2 <= temp_v1) {
    temp_v2 = 0;
    for (; param_3 != 0; param_3 = param_3 >> 1) {
      if (((param_3 & 1) != 0) &&
         (temp_v1 = (**(romwright_code **)(*param_2 + 8))(param_2,param_1), temp_v2 < 0x10)) {
        param_1[temp_v2 + 0x23] = temp_v1;
        *(char *)(temp_v1 + 4) = (char)temp_v2;
        *(unsigned char *)(temp_v1 + 0x41) = *(unsigned char *)((int)param_1 + 0x2e);
      }
      temp_v2 = temp_v2 + 1;
    }
    param_1[0x20] = (int)param_2;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00158920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*param_1 + 0xc))(param_1);
  return;
}
