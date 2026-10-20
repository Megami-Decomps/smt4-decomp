/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8b34` (_code @ 0x2d8b34, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005f1904; /* 0x5f1904 */

extern int FUN_002a4b28(unsigned int);


void FUN_002d8b34(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002a4b28(param_1 & 0xffff);
  if (temp_v0 == 0) {
    DAT_005f1904 = param_1;
  }
  return;
}

} /* extern "C" */
