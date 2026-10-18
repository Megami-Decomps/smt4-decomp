/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00134f44` (_code @ 0x134f44, 0xba bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int FUN_002e6dac(void);
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_002efb90. */
/* Supplied declaration required: FUN_0030774e. */


void FUN_00134f44(int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int *puVar8;
  unsigned int *puVar9;
  
  puVar8 = (unsigned int *)param_1[1];
  temp_v0 = ((int)puVar8 - *param_1) >> 3;
  if (temp_v0 < (unsigned int)((param_1[2] - *param_1) >> 3)) {
    param_1[1] = (int)(puVar8 + 2);
    FUN_002efb90(param_1,puVar8,puVar8 + -2,param_4,param_1,param_2);
    puVar9 = puVar8 + -2;
    while (param_2 != puVar9) {
      temp_v4 = puVar9[-2];
      puVar8[-1] = puVar9[-1];
      puVar8[-2] = temp_v4;
      puVar8 = puVar8 + -2;
      puVar9 = puVar9 + -2;
    }
    temp_v4 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = temp_v4;
    return;
  }
  temp_v5 = (temp_v0 >> 1) + temp_v0 + (temp_v0 >> 3);
  temp_v1 = temp_v0 + 0x20;
  if (temp_v0 + 0x20 <= temp_v5) {
    temp_v1 = temp_v5;
  }
  temp_v2 = FUN_002e6dac();
  FUN_0030774e(*param_1,param_2,temp_v2,param_1);
  FUN_002efb90(param_1,(((int)param_2 - *param_1) & 0xfffffff8U) + temp_v2,param_3);
  FUN_0030774e(param_2,param_1[1],(((int)param_2 - *param_1) & 0xfffffff8U) + temp_v2 + 8,param_1);
  temp_v3 = *param_1;
  temp_v6 = param_1[1] - temp_v3;
  for (; temp_v3 != param_1[1]; temp_v3 = temp_v3 + 8) {
  }
  FUN_002e6e14();
  *param_1 = temp_v2;
  param_1[2] = temp_v1 * 8 + temp_v2;
  param_1[1] = (temp_v6 >> 3) * 8 + temp_v2 + 8;
  return;
}
