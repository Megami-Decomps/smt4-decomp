/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037d5a0` (_code @ 0x37d5a0, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00324bc8(int, unsigned int, unsigned int);

extern unsigned char DAT_005f1b70; /* 0x5f1b70 */

extern unsigned int FUN_00236038(void);
/* Supplied declaration required: FUN_00324bc8. */


unsigned int FUN_0037d5a0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00236038();
  FUN_00324bc8(0xc9,temp_v0,0xffffffff);
  DAT_005f1b70 = 0;
  return 1;
}

} /* extern "C" */
