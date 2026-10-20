/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036bbe0` (_code @ 0x36bbe0, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_0063fd88; /* 0x63fd88 */
extern unsigned int DAT_0063fdb4; /* 0x63fdb4 */
extern unsigned int *DAT_0063fef4; /* 0x63fef4 */


unsigned int FUN_0036bbe0(void)

{
  unsigned int temp_v0;
  
  if (DAT_0063fef4 == &DAT_0063fd88) {
    temp_v0 = 0;
  }
  else if (DAT_0063fef4 == &DAT_0063fdb4) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = 2;
  }
  return temp_v0;
}

} /* extern "C" */
