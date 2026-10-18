/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d9fa0` (_code @ 0x3d9fa0, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c23f8. */
extern unsigned int FUN_0034a444(void);


void FUN_003d9fa0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0x44;
  FUN_002c23f8();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_0034a444();
  }
  *(unsigned int *)(param_1 + 0x1cf8) = temp_v1;
  return;
}
