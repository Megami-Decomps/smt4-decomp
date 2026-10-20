/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00387350` (_code @ 0x387350, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0020214c(void);
int FUN_003a4448(void);

/* Supplied declaration required: FUN_0020214c. */
/* Supplied declaration required: FUN_003a4448. */


void FUN_00387350(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_0020214c();
  temp_v0 = param_1;
  FUN_003a4448();
  *(int *)(temp_v0 + 0x14) = param_1;
  return;
}

} /* extern "C" */
