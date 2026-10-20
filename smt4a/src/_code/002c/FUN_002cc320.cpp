/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cc320` (_code @ 0x2cc320, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(...);
int scrSetResult(int);

extern int FUN_0014bef4(unsigned int);
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_002cc320(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetArg(1);
  if (temp_v0 < (int)temp_v1) {
    temp_v2 = FUN_0014bef4(temp_v1 & 0xffff);
    scrSetResult(temp_v2 < temp_v0);
    return 1;
  }
  scrSetResult(1);
  return 1;
}

} /* extern "C" */
