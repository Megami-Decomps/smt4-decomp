/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00132764` (_code @ 0x132764, 0x4e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(...);
int FUN_002fd642(unsigned int **, int *, unsigned int **);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: FUN_002fd642. */


int * FUN_00132764(int *param_1,unsigned int param_2,unsigned int *param_3,unsigned int *param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int *temp_v0;
  unsigned int *temp_v1;
  
  puVar3 = (unsigned int *)param_1[4];
  if (puVar3 != (unsigned int *)0x0) {
    puVar1 = (unsigned int *)*puVar3;
    temp_v0 = param_3;
    temp_v1 = param_4;
    while (puVar1 != puVar3) {
      temp_v1 = puVar1;
      FUN_002fd642(&temp_v0,param_1,&temp_v1);
      puVar1 = temp_v0;
    }
    piVar2 = (int *)param_1[4];
    *piVar2 = param_1[1];
    param_1[1] = (int)piVar2;
    while (piVar2 = (int *)*param_1, piVar2 != (int *)0x0) {
      *param_1 = *piVar2;
      asdOperatorDeleteArray(piVar2[2]);
      asdOperatorDeleteArray(piVar2);
    }
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}

} /* extern "C" */
