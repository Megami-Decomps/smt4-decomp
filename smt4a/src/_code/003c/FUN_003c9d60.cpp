/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c9d60` (_code @ 0x3c9d60, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

/* Supplied declaration required: FUN_003283ac. */
extern int FUN_004c3a98(int, unsigned int);
extern int FUN_004ee568(unsigned int);


unsigned int FUN_003c9d60(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_004ee568(*param_1);
  temp_v0 = FUN_004c3a98((int)*(short *)(*(int *)(temp_v0 + 0x20) + 8),0x13);
  FUN_003283ac(0 < temp_v0);
  return 1;
}

} /* extern "C" */
