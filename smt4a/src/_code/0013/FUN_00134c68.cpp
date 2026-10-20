/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00134c68` (_code @ 0x134c68, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(void);
int FUN_003077ce(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int rt_malloc(void);
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_003077ce. */


void FUN_00134c68(int *param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar4;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int *piVar9;
  
  puVar1 = (unsigned int *)param_1[1];
  temp_v4 = ((int)puVar1 - *param_1) >> 2;
  if (temp_v4 < (unsigned int)((param_1[2] - *param_1) >> 2)) {
    param_1[1] = (int)(puVar1 + 1);
    if (puVar1 != (unsigned int *)0x0) {
      *puVar1 = puVar1[-1];
    }
    puVar4 = puVar1 + -1;
    while (param_2 != puVar4) {
      puVar4 = puVar4 + -1;
      puVar1 = puVar1 + -1;
      *puVar1 = *puVar4;
    }
    *param_2 = *param_3;
    return;
  }
  temp_v0 = (temp_v4 >> 1) + temp_v4 + (temp_v4 >> 3);
  temp_v5 = temp_v4 + 0x20;
  if (temp_v4 + 0x20 <= temp_v0) {
    temp_v5 = temp_v0;
  }
  piVar9 = param_1;
  puVar1 = param_2;
  temp_v1 = rt_malloc();
  FUN_003077ce(*param_1,param_2,temp_v1,param_1,piVar9,puVar1);
  puVar4 = (unsigned int *)((((int)param_2 - *param_1) & 0xfffffffcU) + temp_v1);
  if (puVar4 != (unsigned int *)0x0) {
    *puVar4 = *param_3;
  }
  FUN_003077ce(param_2,param_1[1],(((int)param_2 - *param_1) & 0xfffffffcU) + temp_v1 + 4,param_1,
               piVar9,puVar1);
  temp_v2 = *param_1;
  temp_v3 = param_1[1] - temp_v2;
  for (; temp_v2 != param_1[1]; temp_v2 = temp_v2 + 4) {
  }
  FUN_002e6e14();
  *param_1 = temp_v1;
  param_1[2] = temp_v5 * 4 + temp_v1;
  param_1[1] = (temp_v3 >> 2) * 4 + temp_v1 + 4;
  return;
}

} /* extern "C" */
