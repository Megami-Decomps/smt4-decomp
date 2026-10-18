/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fca44` (_code @ 0x2fca44, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043de68; /* 0x43de68 */

extern unsigned int FUN_003bbf14(unsigned int);


unsigned int FUN_002fca44(void)

{
  unsigned int temp_v0;
  
  if (DAT_0043de68 != 0) {
    temp_v0 = FUN_003bbf14(*(unsigned int *)(DAT_0043de68 + 4));
    return temp_v0;
  }
  return 0;
}
