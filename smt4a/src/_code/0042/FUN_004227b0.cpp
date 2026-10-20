/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004227b0` (_code @ 0x4227b0, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a0d08(int *);
int FUN_00422654(void);
int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001a0d08. */
/* Supplied declaration required: FUN_00422654. */


int FUN_004227b0(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  
  FUN_00422654();
  if (*(int *)(param_1 + 0x50) != 0) {
    software_interrupt(0x23);
    *(int *)(param_1 + 0x50) = 0;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    software_interrupt(0x23);
    *(int *)(param_1 + 0x4c) = 0;
  }
  piVar1 = (int *)(param_1 + 0x30);
  FUN_001a0d08(piVar1);
  if (*piVar1 != 0) {
    software_interrupt(0x23);
    *piVar1 = 0;
  }
  return param_1;
}

} /* extern "C" */
