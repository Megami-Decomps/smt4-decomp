/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bcfb4` (_code @ 0x3bcfb4, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(...);
int FUN_00409d8c(int, unsigned int);

/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_00409d8c. */


unsigned int FUN_003bcfb4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetArg(1);
  FUN_00409d8c(temp_v0,temp_v1);
  return 1;
}

} /* extern "C" */
