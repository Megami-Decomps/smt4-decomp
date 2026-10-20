/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00303d1e` (_code @ 0x303d1e, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030fbc0(unsigned int, unsigned int);

extern int FUN_002e789a(int);
/* Supplied declaration required: FUN_0030fbc0. */


unsigned char FUN_00303d1e(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002e789a(param_2);
  if (temp_v0 != 0) {
    FUN_0030fbc0(param_1,*(unsigned int *)(param_2 + 0x44));
  }
  return temp_v0 != 0;
}

} /* extern "C" */
