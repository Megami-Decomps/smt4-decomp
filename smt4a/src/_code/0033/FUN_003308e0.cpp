/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003308e0` (_code @ 0x3308e0, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0037a5d4(void);

extern int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_0037a5d4. */


unsigned char FUN_003308e0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = scrGetArg(0);
  FUN_0037a5d4();
  return temp_v0 != 0;
}

} /* extern "C" */
