/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013462c` (_code @ 0x13462c, 0xc2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int FUN_002e6dac(void);
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_002f4ba0. */
/* Supplied declaration required: FUN_003078a2. */


void FUN_0013462c(int *param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned int *puVar5;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int *piVar9;
  
  temp_v0 = param_1[2];
  temp_v4 = *param_1;
  piVar9 = param_1;
  puVar3 = param_2;
  temp_v1 = FUN_002f4ba0(param_1);
  if (temp_v1 < (unsigned int)((temp_v0 - temp_v4) >> 2)) {
    puVar3 = (unsigned int *)param_1[1];
    param_1[1] = (int)(puVar3 + 1);
    if (puVar3 != (unsigned int *)0x0) {
      *puVar3 = puVar3[-1];
    }
    puVar5 = puVar3 + -1;
    while (param_2 != puVar5) {
      puVar5 = puVar5 + -1;
      puVar3 = puVar3 + -1;
      *puVar3 = *puVar5;
    }
    *param_2 = *param_3;
    return;
  }
  temp_v2 = FUN_002f4ba0(param_1);
  temp_v5 = (temp_v2 >> 1) + temp_v2 + (temp_v2 >> 3);
  temp_v1 = temp_v2 + 0x20;
  if (temp_v2 + 0x20 <= temp_v5) {
    temp_v1 = temp_v5;
  }
  temp_v0 = FUN_002e6dac();
  FUN_003078a2(*param_1,param_2,temp_v0,param_1,piVar9,puVar3);
  puVar5 = (unsigned int *)((((int)param_2 - *param_1) & 0xfffffffcU) + temp_v0);
  if (puVar5 != (unsigned int *)0x0) {
    *puVar5 = *param_3;
  }
  FUN_003078a2(param_2,param_1[1],(((int)param_2 - *param_1) & 0xfffffffcU) + temp_v0 + 4,param_1,
               piVar9,puVar3);
  temp_v3 = FUN_002f4ba0(param_1);
  for (temp_v4 = *param_1; temp_v4 != param_1[1]; temp_v4 = temp_v4 + 4) {
  }
  FUN_002e6e14(*param_1);
  *param_1 = temp_v0;
  param_1[2] = temp_v1 * 4 + temp_v0;
  param_1[1] = temp_v3 * 4 + temp_v0 + 4;
  return;
}
