/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f3908` (_code @ 0x3f3908, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);

/* Supplied declaration required: FUN_00184310. */


unsigned short FUN_003f3908(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = (unsigned int)*(unsigned short *)(param_1 + 0x62);
  FUN_00184310();
  return *(unsigned short *)(temp_v0 + 0x32);
}

} /* extern "C" */
