/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1b3c` (_code @ 0x2e1b3c, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f0c8; /* 0x57f0c8 */

extern int FUN_00275f44(unsigned int, unsigned int);


unsigned char FUN_002e1b3c(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00275f44(*(unsigned int *)(DAT_0057f0c8 + 0x680),param_1);
  return temp_v0 != 0;
}
