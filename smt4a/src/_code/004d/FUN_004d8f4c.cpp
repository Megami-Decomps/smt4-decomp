/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d8f4c` (_code @ 0x4d8f4c, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004d9090(...);
int FUN_004d9108(...);

/* Supplied declaration required: FUN_004d9090. */
/* Supplied declaration required: FUN_004d9108. */


void FUN_004d8f4c(unsigned int *param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int *piVar3;
  unsigned char temp_v0;
  
  piVar3 = (int *)(param_1 + 1);
  *param_2 = (int)piVar3;
  param_2[1] = (int)piVar3;
  *(unsigned char *)(param_2 + 3) = 1;
  piVar2 = (int *)param_1[5];
  temp_v0 = piVar2 != piVar3;
  if (temp_v0) {
    piVar2 = (int *)*piVar2;
  }
  if (!temp_v0 || piVar2 == param_2) {
    param_1[5] = (unsigned int)param_2;
  }
  piVar2 = (int *)param_1[6];
  temp_v0 = piVar2 != piVar3;
  if (temp_v0) {
    piVar2 = (int *)piVar2[1];
  }
  if (!temp_v0 || piVar2 == param_2) {
    param_1[6] = (unsigned int)param_2;
  }
  param_1[7] = param_1[7] + 1;
  piVar2 = (int *)param_2[2];
  while (piVar1 = piVar2, piVar1 != piVar3) {
    piVar2 = piVar1;
    if ((int *)*piVar1 != param_2) {
      piVar2 = piVar1 + 1;
    }
    FUN_004d9090(piVar2);
    FUN_004d9108(piVar2);
    param_2 = piVar1;
    piVar2 = (int *)piVar1[2];
  }
  FUN_004d9090(param_1);
  FUN_004d9108(param_1);
  param_1[3] = *param_1;
  return;
}

} /* extern "C" */
