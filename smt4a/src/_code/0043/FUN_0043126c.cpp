/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043126c` (_code @ 0x43126c, 0x4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00431230(unsigned int [2]);

/* Supplied declaration required: FUN_00431230. */


unsigned int FUN_0043126c(void)

{
/* irregular: irregular input(s): in_r3; 2 native warning(s); review required */
  unsigned int in_r3;
  unsigned int temp_v0 [2];
  
  temp_v0[0] = in_r3 & 0xffffff00;
  FUN_00431230(temp_v0);
  return temp_v0[0] & 0xff;
}

} /* extern "C" */
