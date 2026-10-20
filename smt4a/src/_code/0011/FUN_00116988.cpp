/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00116988` (_code @ 0x116988, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(...);
int onlineUrlDestroy(...);
int FUN_00302698(int *);

extern unsigned char DAT_00559da4; /* 0x559da4 */

/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: onlineUrlDestroy. */
/* Supplied declaration required: FUN_00302698. */


unsigned int * FUN_00116988(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int *piVar2;
  int *piVar3;
  
  *param_1 = (unsigned int)&DAT_00559da4;
  param_1 = param_1 + 0x22;
  onlineUrlDestroy();
  piVar3 = (int *)(param_1 + -6);
  if (param_1[-2] != 0) {
    FUN_00302698(piVar3);
    puVar1 = (unsigned int *)param_1[-2];
    *puVar1 = param_1[-5];
    param_1[-5] = (unsigned int)puVar1;
    while (piVar2 = (int *)*piVar3, piVar2 != (int *)0x0) {
      *piVar3 = *piVar2;
      asdOperatorDeleteArray(piVar2[2]);
      asdOperatorDeleteArray(piVar2);
    }
    param_1[-5] = 0;
    param_1[-4] = 0;
    param_1[-3] = 0;
  }
  param_1 = param_1 + -0x20;
  onlineUrlDestroy(param_1);
  return param_1 + -2;
}

} /* extern "C" */
