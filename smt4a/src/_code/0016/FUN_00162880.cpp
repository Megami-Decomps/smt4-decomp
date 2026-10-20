/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00162880` (_code @ 0x162880, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588c44; /* 0x588c44 */


unsigned int FUN_00162880(void)

{
  unsigned int temp_v0;
  
  if ((DAT_00588c44 == 0) || (*(int *)(DAT_00588c44 + 0x4364) == 0x17)) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
