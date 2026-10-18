/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ad1cc` (_code @ 0x2ad1cc, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Unsupported intrinsic, declaration required: HintPreloadData (CALLOTHER). */


void FUN_002ad1cc(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned int *puVar12;
  
  while (temp_v0 = param_3 - 0x20, param_3 >= 0x20) {
    temp_v4 = param_2[-2];
    temp_v3 = param_2[-3];
    temp_v2 = param_2[-4];
    temp_v8 = param_2[-5];
    temp_v7 = param_2[-6];
    temp_v6 = param_2[-7];
    temp_v5 = param_2[-8];
    HintPreloadData(param_2 + -0x18);
    param_1[-1] = param_2[-1];
    param_1[-2] = temp_v4;
    param_1[-3] = temp_v3;
    param_1[-4] = temp_v2;
    param_1[-5] = temp_v8;
    param_1[-6] = temp_v7;
    param_1[-7] = temp_v6;
    param_1 = param_1 + -8;
    *param_1 = temp_v5;
    param_2 = param_2 + -8;
    param_3 = temp_v0;
  }
  if ((unsigned char)((unsigned char)(temp_v0 >> 4) & 1)) {
    puVar12 = param_2 + -1;
    temp_v3 = param_2[-2];
    temp_v2 = param_2[-3];
    param_2 = param_2 + -4;
    param_4 = *param_2;
    param_1[-1] = *puVar12;
    param_1[-2] = temp_v3;
    param_1[-3] = temp_v2;
    param_1 = param_1 + -4;
    *param_1 = param_4;
  }
  if ((int)(param_3 << 0x1c) < 0) {
    puVar12 = param_2 + -1;
    param_2 = param_2 + -2;
    param_4 = *param_2;
    param_1[-1] = *puVar12;
    param_1 = param_1 + -2;
    *param_1 = param_4;
  }
  if ((unsigned char)((unsigned char)(temp_v0 >> 2) & 1)) {
    param_2 = param_2 + -1;
    param_4 = *param_2;
    param_1 = param_1 + -1;
    *param_1 = param_4;
  }
  temp_v1 = (unsigned short)param_4;
  if ((temp_v0 & 3) == 0) {
    return;
  }
  temp_v10 = (unsigned char)((unsigned char)(temp_v0 >> 1) & 1);
  param_3 = param_3 << 0x1f;
  temp_v9 = (int)param_3 < 0;
  if (temp_v10) {
    param_2 = (unsigned int *)((int)param_2 - 2);
    temp_v1 = *(unsigned short *)param_2;
  }
  if (temp_v9) {
    param_3 = (unsigned int)*(unsigned char *)((int)param_2 - 1);
  }
  if (temp_v10) {
    param_1 = (unsigned int *)((int)param_1 - 2);
    *(unsigned short *)param_1 = temp_v1;
  }
  if (temp_v9) {
    *(char *)((int)param_1 - 1) = (char)param_3;
  }
  return;
}
