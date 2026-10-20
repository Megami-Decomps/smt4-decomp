/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001029da` (_code @ 0x1029da, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001029f4(unsigned int, int, int);

/* Supplied declaration required: FUN_001029f4. */
extern unsigned int *FUN_002e3cf8(void);


void FUN_001029da(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002e3cf8();
  temp_v0 = *puVar1;
  FUN_001029f4(param_1,0,10);
  *puVar1 = temp_v0;
  return;
}

} /* extern "C" */
