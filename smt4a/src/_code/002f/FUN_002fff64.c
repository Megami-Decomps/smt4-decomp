/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fff64` (_code @ 0x2fff64, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002ede60(unsigned int, unsigned int);
extern unsigned int *FUN_002f8236(int);
/* Supplied declaration required: FUN_002f8242. */


unsigned int * FUN_002fff64(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_002ede60(param_1,param_3);
  puVar2 = (unsigned int *)FUN_002f8236(temp_v0 + 0x20);
  *puVar2 = param_2;
  FUN_002f8242();
  return puVar2 + -8;
}
