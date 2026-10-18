/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf710` (_code @ 0x2bf710, 0x2a bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Unsupported intrinsic, declaration required: coprocessor_loadlong (CALLOTHER). */
extern int *FUN_002b5498(void);


int * FUN_002bf710(void)

{
/* irregular: irregular input(s): in_cr1, in_pc, in_r3; 4 native warning(s); review required */
  int temp_v0;
  romwright_code *in_r3;
  int *piVar2;
  int in_pc;
  unsigned int in_cr1;
  
  coprocessor_loadlong(0,in_cr1,in_pc + 4);
  temp_v0 = (*in_r3)(0);
  if (temp_v0 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_002b5498();
  }
  (**(romwright_code **)(*piVar2 + 0x24))(piVar2);
  return piVar2;
}
