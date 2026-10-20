/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103f7c` (_code @ 0x103f7c, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001142cc(unsigned int, int);

/* Supplied declaration required: FUN_001142cc. */
extern unsigned int FUN_002e9af4(void);


void FUN_00103f7c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002e9af4();
  FUN_001142cc(temp_v0,param_1);
  *(unsigned int *)(param_1 + 0x44) = temp_v0;
  return;
}

} /* extern "C" */
