/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ae49c` (_code @ 0x2ae49c, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004e3a9c; /* 0x4e3a9c */
extern unsigned int DAT_004e3b14; /* 0x4e3b14 */


unsigned int FUN_002ae49c(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = DAT_004e3a9c;
  if ((param_1 >= 2) && (temp_v0 = DAT_004e3b14, param_1 != 2)) {
    temp_v0 = 0;
  }
  return temp_v0;
}
