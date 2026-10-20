/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f5f90` (_code @ 0x4f5f90, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorNew(void);

/* Supplied declaration required: asdOperatorNew. */
extern unsigned int FUN_0041aed4(void);


void FUN_004f5f90(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0x44;
  asdOperatorNew();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_0041aed4();
  }
  *(unsigned int *)(param_1 + 0x1f50) = temp_v1;
  return;
}

} /* extern "C" */
