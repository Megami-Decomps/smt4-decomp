/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00245bb8` (_code @ 0x245bb8, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004e39e0; /* 0x4e39e0 */
extern unsigned int DAT_004e3a0c; /* 0x4e3a0c */
extern unsigned int *DAT_004e3b4c; /* 0x4e3b4c */


unsigned int FUN_00245bb8(void)

{
  unsigned int temp_v0;
  
  if (DAT_004e3b4c == &DAT_004e39e0) {
    temp_v0 = 0;
  }
  else if (DAT_004e3b4c == &DAT_004e3a0c) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = 2;
  }
  return temp_v0;
}
