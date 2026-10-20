/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dca6c` (_code @ 0x2dca6c, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00257510(void);

/* Supplied declaration required: FUN_00257510. */


int FUN_002dca6c(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = (unsigned int)*(unsigned short *)(param_1 + 2);
  FUN_00257510();
  temp_v1 = (unsigned int)*(unsigned short *)(param_2 + 2);
  FUN_00257510();
  return (unsigned int)*(unsigned short *)(temp_v1 + 0x32) - (unsigned int)*(unsigned short *)(temp_v0 + 0x32);
}

} /* extern "C" */
