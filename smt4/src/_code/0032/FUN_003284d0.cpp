/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003284d0` (_code @ 0x3284d0, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

/* Supplied declaration required: scrSetResult. */


unsigned int FUN_003284d0(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  if (temp_v0 != 0) {
    scrSetResult(*(unsigned short *)(temp_v0 + *(int *)(temp_v0 + 0xcf78) * 0x620 + 0x3c5c));
  }
  return 1;
}

} /* extern "C" */
