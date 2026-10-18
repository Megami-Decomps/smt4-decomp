/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a21e8` (_code @ 0x2a21e8, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f0c8; /* 0x57f0c8 */

extern int FUN_00224880(unsigned int);


unsigned char FUN_002a21e8(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00224880(*(unsigned int *)(DAT_0057f0c8 + 0x680));
  return temp_v0 == 2;
}
