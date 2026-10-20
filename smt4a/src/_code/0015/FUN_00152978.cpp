/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00152978` (_code @ 0x152978, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f69c; /* 0x57f69c */

extern int FUN_001775a8(void);


int FUN_00152978(void)

{
  int temp_v0;
  
  temp_v0 = FUN_001775a8();
  return DAT_0057f69c + temp_v0 * 4 + 0x21614;
}

} /* extern "C" */
