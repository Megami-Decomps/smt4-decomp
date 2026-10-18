/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035fe38` (_code @ 0x35fe38, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */


void FUN_0035fe38(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_002c38a4();
  temp_v0 = *(int *)(param_2 + 0x24);
  temp_v1 = *(int *)(param_2 + 0x28);
  if (temp_v0 == 0 && temp_v1 == 0) {
    *(unsigned int *)(param_1 + 4) = 0;
    *(unsigned int *)(param_1 + 8) = 0;
  }
  else {
    if ((temp_v1 != 0) && (*(int *)(temp_v1 + 0x24) = temp_v0, temp_v0 == 0)) {
      *(int *)(param_1 + 4) = temp_v1;
    }
    if ((temp_v0 != 0) &&
       (temp_v1 = *(int *)(param_2 + 0x28), *(int *)(temp_v0 + 0x28) = temp_v1, temp_v1 == 0)) {
      *(int *)(param_1 + 8) = temp_v0;
    }
  }
  temp_v0 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) != 0) {
    do {
      temp_v1 = temp_v0;
      if (*(int *)(temp_v1 + 0x20) <= param_3) {
        temp_v0 = *(int *)(temp_v1 + 0x24);
        *(int *)(param_2 + 0x24) = temp_v0;
        *(int *)(param_2 + 0x28) = temp_v1;
        if (temp_v0 != 0) {
          *(int *)(temp_v0 + 0x28) = param_2;
        }
        else {
          *(unsigned int *)(param_2 + 0x24) = 0;
          *(int *)(param_1 + 4) = param_2;
        }
        *(int *)(temp_v1 + 0x24) = param_2;
        FUN_002c3820(param_1 + 0x10);
        return;
      }
      temp_v0 = *(int *)(temp_v1 + 0x28);
    } while (*(int *)(temp_v1 + 0x28) != 0);
    *(int *)(temp_v1 + 0x28) = param_2;
    *(int *)(param_2 + 0x24) = temp_v1;
    *(unsigned int *)(param_2 + 0x28) = 0;
  }
  else {
    *(unsigned int *)(param_2 + 0x24) = 0;
    *(int *)(param_1 + 4) = param_2;
    *(unsigned int *)(param_2 + 0x28) = 0;
  }
  *(int *)(param_1 + 8) = param_2;
  FUN_002c3820(param_1 + 0x10);
  return;
}
