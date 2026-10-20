/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00237a94` (_code @ 0x237a94, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00237d78(void);
int FUN_00238aac(int *, int);

/* Supplied declaration required: FUN_00237d78. */
/* Supplied declaration required: FUN_00238aac. */


void FUN_00237a94(unsigned int *param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  
  piVar1 = (int *)param_2[2];
  FUN_00238aac(piVar1,2);
  if (piVar1 == (int *)0x0) {
    *param_1 = 0;
  }
  else {
    if (piVar1 != (int *)0xfffffff8) {
      FUN_00237d78();
    }
    *piVar1 = *param_2;
    piVar1[1] = (int)param_2;
    *param_2 = (int)piVar1;
    *(int **)(*piVar1 + 4) = piVar1;
    *param_1 = (unsigned int)piVar1;
  }
  return;
}

} /* extern "C" */
