/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043de60` (_code @ 0x43de60, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0043a08c(int *, unsigned int *, unsigned int);
int software_interrupt(int);

typedef int romwright_code(...);
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0043a08c. */


int * FUN_0043de60(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[3];
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)0xd8607008;
  }
  else {
    piVar1 = piVar2 + 2;
    FUN_0043a08c(piVar1,param_1 + 0xe,param_1[0xd]);
    if (((unsigned int)piVar1 & 0x80000000) == 0) {
      piVar1 = (int *)(**(romwright_code **)*param_1)(param_1,piVar2 + 2);
      if (-1 < (int)piVar1) {
        piVar1 = (int *)param_1[3];
        if (piVar1 != (int *)0x0) {
          if ((int *)*piVar1 == piVar1) {
            param_1[3] = 0;
          }
          else {
            param_1[3] = piVar1[1];
            *(int *)piVar1[1] = *piVar1;
            *(int *)(*piVar1 + 4) = piVar1[1];
          }
          piVar1[1] = 0;
          *piVar1 = 0;
        }
        param_1[10] = param_1[10] - 1;
        piVar1 = (int *)param_1[2];
        if (piVar1 != (int *)0x0) {
          piVar2[1] = (int)piVar1;
          *(int **)(*piVar1 + 4) = piVar2;
          *piVar2 = *piVar1;
          *piVar1 = (int)piVar2;
        }
        else {
          piVar2[1] = (int)piVar2;
          *piVar2 = (int)piVar2;
          param_1[2] = (unsigned int)piVar2;
        }
        param_1[0xb] = param_1[0xb] + 1;
        return (int *)0x0;
      }
      if (piVar2[2] != 0) {
        software_interrupt(0x23);
        piVar2[2] = 0;
      }
    }
  }
  return piVar1;
}

} /* extern "C" */
