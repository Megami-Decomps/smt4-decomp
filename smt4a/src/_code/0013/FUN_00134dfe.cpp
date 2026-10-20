/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00134dfe` (_code @ 0x134dfe, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(void);
int FUN_00307770(...);
int vectorCount8_003077a4(int *);
int FUN_0030d010(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int rt_malloc(void);
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_00307770. */
extern int vectorGrowCapacity_00307792(unsigned int, int *);
/* Supplied declaration required: vectorCount8_003077a4. */
/* Supplied declaration required: FUN_0030d010. */


void FUN_00134dfe(int *param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  unsigned int *puVar8;
  int *piVar9;
  
  temp_v0 = param_1[2];
  temp_v4 = *param_1;
  piVar9 = param_1;
  puVar7 = param_2;
  temp_v1 = vectorCount8_003077a4(param_1);
  if (temp_v1 < (unsigned int)((temp_v0 - temp_v4) >> 3)) {
    puVar7 = (unsigned int *)param_1[1];
    param_1[1] = (int)(puVar7 + 2);
    FUN_0030d010(param_1,puVar7);
    puVar8 = puVar7 + -2;
    while (param_2 != puVar8) {
      temp_v5 = puVar8[-2];
      puVar7[-1] = puVar8[-1];
      puVar7[-2] = temp_v5;
      puVar7 = puVar7 + -2;
      puVar8 = puVar8 + -2;
    }
    temp_v5 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = temp_v5;
    return;
  }
  temp_v5 = vectorCount8_003077a4(param_1);
  temp_v0 = vectorGrowCapacity_00307792(temp_v5,param_1);
  temp_v4 = rt_malloc();
  FUN_00307770(*param_1,param_2,temp_v4,param_1,piVar9,puVar7);
  FUN_0030d010(param_1,(((int)param_2 - *param_1) & 0xfffffff8U) + temp_v4,param_3);
  FUN_00307770(param_2,param_1[1],(((int)param_2 - *param_1) & 0xfffffff8U) + temp_v4 + 8,param_1);
  temp_v2 = vectorCount8_003077a4(param_1);
  for (temp_v3 = *param_1; temp_v3 != param_1[1]; temp_v3 = temp_v3 + 8) {
  }
  FUN_002e6e14();
  *param_1 = temp_v4;
  param_1[2] = temp_v0 * 8 + temp_v4;
  param_1[1] = temp_v2 * 8 + temp_v4 + 8;
  return;
}

} /* extern "C" */
