/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00375848` (_code @ 0x375848, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005710dc; /* 0x5710dc */


unsigned int FUN_00375848(void)

{
  unsigned short temp_v0;
  
  temp_v0 = 0;
  if (DAT_005710dc != 0) {
    if (*(int *)(DAT_005710dc + 0x2f8) >= 0) {
      temp_v0 = *(unsigned int *)(DAT_005710dc + 0x308);
    }
    else {
      temp_v0 = 0;
    }
  }
  return temp_v0;
}
