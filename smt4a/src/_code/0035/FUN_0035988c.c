/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035988c` (_code @ 0x35988c, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0063f500; /* 0x63f500 */


unsigned int FUN_0035988c(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (((param_1 < 0x10) && (DAT_0063f500 != 0)) &&
     (*(int *)(DAT_0063f500 + param_1 * 4 + 0x20) != 0)) {
    temp_v0 = 1;
  }
  return temp_v0;
}
