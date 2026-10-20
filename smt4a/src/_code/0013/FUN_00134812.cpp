/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00134812` (_code @ 0x134812, 0xb6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(void);
int FUN_0030783e(...);
int vectorCount4_00307858(int *);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int rt_malloc(void);
/* Supplied declaration required: asdOperatorDeleteArray. */
extern int vectorGrowCapacity_002f1786(unsigned int, int *);
/* Supplied declaration required: FUN_0030783e. */
/* Supplied declaration required: vectorCount4_00307858. */


void FUN_00134812(int *param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int *puVar8;
  int *piVar9;
  
  temp_v0 = param_1[2];
  temp_v5 = *param_1;
  piVar9 = param_1;
  puVar3 = param_2;
  temp_v1 = vectorCount4_00307858(param_1);
  if (temp_v1 < (unsigned int)((temp_v0 - temp_v5) >> 2)) {
    puVar3 = (unsigned int *)param_1[1];
    param_1[1] = (int)(puVar3 + 1);
    if (puVar3 != (unsigned int *)0x0) {
      *puVar3 = puVar3[-1];
    }
    puVar8 = puVar3 + -1;
    while (param_2 != puVar8) {
      puVar8 = puVar8 + -1;
      puVar3 = puVar3 + -1;
      *puVar3 = *puVar8;
    }
    *param_2 = *param_3;
    return;
  }
  temp_v2 = vectorCount4_00307858(param_1);
  temp_v0 = vectorGrowCapacity_002f1786(temp_v2,param_1);
  temp_v5 = rt_malloc();
  FUN_0030783e(*param_1,param_2,temp_v5,param_1,piVar9,puVar3);
  puVar3 = (unsigned int *)((((int)param_2 - *param_1) & 0xfffffffcU) + temp_v5);
  if (puVar3 != (unsigned int *)0x0) {
    *puVar3 = *param_3;
  }
  FUN_0030783e(param_2,param_1[1],(((int)param_2 - *param_1) & 0xfffffffcU) + temp_v5 + 4,param_1);
  temp_v3 = vectorCount4_00307858(param_1);
  for (temp_v4 = *param_1; temp_v4 != param_1[1]; temp_v4 = temp_v4 + 4) {
  }
  asdOperatorDeleteArray();
  *param_1 = temp_v5;
  param_1[2] = temp_v0 * 4 + temp_v5;
  param_1[1] = temp_v3 * 4 + temp_v5 + 4;
  return;
}

} /* extern "C" */
