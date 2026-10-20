/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c3f8c` (_code @ 0x3c3f8c, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b4a90(int *, int, unsigned int);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

/* Supplied declaration required: FUN_001b4a90. */


void FUN_003c3f8c(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int aiStack_30 [5];
  int temp_v6;
  
  if ((*(short *)(param_1 + param_2 * 2 + 0x8b60) == 0) && (param_3 != 0)) {
    *(int *)(param_1 + *(int *)(param_1 + 0x8e7c) * 4 + 0x8e8c) = param_2;
  }
  else {
    temp_v4 = *(int *)(param_1 + 0x8e8c);
    temp_v5 = *(int *)(param_1 + 0x8e90);
    aiStack_30[0] = *(unsigned int *)(param_1 + 0x8e94);
    aiStack_30[1] = *(unsigned int *)(param_1 + 0x8e98);
    aiStack_30[2] = *(unsigned int *)(param_1 + 0x8e9c);
    aiStack_30[3] = *(unsigned int *)(param_1 + 0x8ea0);
    aiStack_30[4] = *(unsigned int *)(param_1 + 0x8ea4);
    temp_v6 = *(int *)(param_1 + 0x8ea8);
    FUN_001b4a90((int *)(param_1 + 0x8e8c),0x20,0xffffffff);
    if (temp_v4 != param_2) {
      *(int *)(param_1 + 0x8e8c) = temp_v4;
    }
    temp_v1 = (unsigned int)(temp_v4 != param_2);
    temp_v2 = 3;
    piVar3 = &temp_v4;
    do {
      temp_v3 = piVar3[2];
      if (temp_v5 != param_2) {
        temp_v0 = temp_v1 * 4;
        temp_v1 = temp_v1 + 1;
        *(int *)(param_1 + temp_v0 + 0x8e8c) = temp_v5;
      }
      temp_v5 = piVar3[3];
      if (temp_v3 != param_2) {
        temp_v0 = temp_v1 * 4;
        temp_v1 = temp_v1 + 1;
        *(int *)(param_1 + temp_v0 + 0x8e8c) = temp_v3;
      }
      temp_v2 = temp_v2 - 1;
      piVar3 = piVar3 + 2;
    } while (temp_v2 != 0);
    if (temp_v6 != param_2) {
      *(int *)(param_1 + temp_v1 * 4 + 0x8e8c) = temp_v6;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + *(int *)(param_1 + 0x8e7c) * 4 + 0x8e88) = param_2;
      return;
    }
  }
  return;
}

} /* extern "C" */
