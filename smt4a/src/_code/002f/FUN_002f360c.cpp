/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f360c` (_code @ 0x2f360c, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ede60(...);

/* Supplied declaration required: FUN_002ede60. */


int FUN_002f360c(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002ede60();
  temp_v0 = FUN_002ede60(temp_v0 + 0x20,param_2 + 0x20);
  return temp_v0 - 0x20;
}

} /* extern "C" */
