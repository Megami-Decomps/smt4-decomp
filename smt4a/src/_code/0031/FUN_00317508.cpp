/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00317508` (_code @ 0x317508, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00317534(unsigned int);

extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_00317534. */


void FUN_00317508(unsigned int param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  FUN_00317534(param_1);
  *(unsigned char *)(temp_v0 + 0x3d) = param_2;
  *(unsigned int *)(temp_v0 + 0x40) = 2;
  return;
}

} /* extern "C" */
