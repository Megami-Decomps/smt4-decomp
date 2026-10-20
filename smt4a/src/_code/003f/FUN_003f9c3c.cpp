/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f9c3c` (_code @ 0x3f9c3c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f9ac4(void);

/* Supplied declaration required: FUN_003f9ac4. */


void FUN_003f9c3c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = 0;
  *(unsigned int *)(param_1 + 0x38) = 0;
  FUN_003f9ac4();
  *(unsigned int *)(param_1 + 0x38) = temp_v0;
  return;
}

} /* extern "C" */
