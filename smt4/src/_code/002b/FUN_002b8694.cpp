/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b8694` (_code @ 0x2b8694, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043da90; /* 0x43da90 */


unsigned int FUN_002b8694(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0043da90 != 0) {
    if (*(int *)(DAT_0043da90 + 0x18) == 0x36) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = 1;
    }
  }
  return temp_v0;
}

} /* extern "C" */
