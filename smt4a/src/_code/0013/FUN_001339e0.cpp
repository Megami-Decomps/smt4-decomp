/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001339e0` (_code @ 0x1339e0, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(int);
int FUN_00307ad6(...);
int FUN_00307af8(...);
int vectorSize12B(int *);
int word3CopyConstruct(...);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int rt_malloc(void);
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: FUN_00307ad6. */
/* Supplied declaration required: FUN_00307af8. */
extern int bufGrowCapacity5(unsigned int, int *);
/* Supplied declaration required: vectorSize12B. */
/* Supplied declaration required: word3CopyConstruct. */
extern int __aeabi_idivmod(int, unsigned int);


void FUN_001339e0(int *param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int *puVar9;
  int temp_v8;
  unsigned int *puVar11;
  
  temp_v0 = FUN_00307af8();
  temp_v1 = vectorSize12B(param_1);
  if (temp_v1 < temp_v0) {
    puVar9 = (unsigned int *)param_1[1];
    param_1[1] = (int)(puVar9 + 3);
    word3CopyConstruct(param_1,puVar9);
    puVar11 = puVar9 + -3;
    while (param_2 != puVar11) {
      temp_v6 = puVar11[-2];
      temp_v7 = puVar11[-1];
      puVar9[-3] = puVar11[-3];
      puVar9[-2] = temp_v6;
      puVar9[-1] = temp_v7;
      puVar9 = puVar9 + -3;
      puVar11 = puVar11 + -3;
    }
    temp_v6 = param_3[1];
    temp_v7 = param_3[2];
    *param_2 = *param_3;
    param_2[1] = temp_v6;
    param_2[2] = temp_v7;
  }
  else {
    temp_v6 = vectorSize12B(param_1);
    temp_v2 = bufGrowCapacity5(temp_v6,param_1);
    temp_v3 = rt_malloc();
    FUN_00307ad6(*param_1,param_2,temp_v3,param_1);
    temp_v4 = __aeabi_idivmod((int)param_2 - *param_1,0xc);
    word3CopyConstruct(param_1,temp_v4 * 0xc + temp_v3,param_3);
    temp_v4 = __aeabi_idivmod((int)param_2 - *param_1,0xc);
    FUN_00307ad6(param_2,param_1[1],temp_v4 * 0xc + temp_v3 + 0xc,param_1);
    temp_v5 = vectorSize12B(param_1);
    temp_v8 = *param_1;
    for (temp_v4 = temp_v8; temp_v4 != param_1[1]; temp_v4 = temp_v4 + 0xc) {
    }
    FUN_00307af8(param_1);
    asdOperatorDeleteArray(temp_v8);
    *param_1 = temp_v3;
    param_1[1] = temp_v5 * 0xc + temp_v3 + 0xc;
    param_1[2] = temp_v2 * 0xc + temp_v3;
  }
  return;
}

} /* extern "C" */
