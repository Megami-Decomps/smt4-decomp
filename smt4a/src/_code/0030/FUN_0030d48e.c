/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030d48e` (_code @ 0x30d48e, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e75fa. */
/* Supplied declaration required: FUN_002e9538. */
extern int FUN_002e995c(int);


unsigned int * FUN_0030d48e(int param_1,unsigned int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002e995c(param_1 + 4);
  temp_v1 = *param_2;
  *(unsigned int *)(temp_v0 - 4) = temp_v1;
  FUN_002e75fa(temp_v1);
  FUN_002e9538(temp_v0,param_2 + 1);
  return (unsigned int *)(temp_v0 - 4);
}
