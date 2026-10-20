/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ab914` (_code @ 0x1ab914, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a840(void);

/* Supplied declaration required: FUN_0019a840. */


unsigned char FUN_001ab914(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  
  temp_v0 = *(int *)(param_1 + 8) != 0;
  if (temp_v0) {
    FUN_0019a840();
    *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 4;
  }
  return temp_v0;
}

} /* extern "C" */
