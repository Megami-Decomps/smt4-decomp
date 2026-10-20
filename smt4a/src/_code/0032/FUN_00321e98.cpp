/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00321e98` (_code @ 0x321e98, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


void FUN_00321e98(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  temp_v0 = *(int *)(*(int *)(param_1 + 0x20) + 0xc0) * *(int *)(*(int *)(param_1 + 0x20) + 0xc4);
  if (temp_v0 == 0) {
    return;
  }
  temp_v1 = param_2[1];
  temp_v2 = param_2[2];
  puVar1 = (unsigned int *)
           (*(int *)(param_1 + 0x18) +
           (((unsigned int)((int)param_2 - *(int *)(param_1 + 0x18)) / 0x28) * temp_v0 + *(int *)(param_1 + 4)
           ) * 0x28);
  temp_v3 = param_2[3];
  temp_v4 = param_2[4];
  temp_v5 = param_2[5];
  temp_v6 = param_2[6];
  temp_v7 = param_2[7];
  *puVar1 = *param_2;
  puVar1[1] = temp_v1;
  puVar1[2] = temp_v2;
  puVar1[3] = temp_v3;
  puVar1[4] = temp_v4;
  puVar1[5] = temp_v5;
  puVar1[6] = temp_v6;
  puVar1[7] = temp_v7;
  temp_v2 = param_2[9];
  temp_v1 = param_2[8];
  puVar1[4] = 0xffffffff;
  puVar1[8] = temp_v1;
  puVar1[9] = temp_v2;
  return;
}

} /* extern "C" */
