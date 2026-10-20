/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c5d8c` (_code @ 0x3c5d8c, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005cc200; /* 0x5cc200 */


unsigned int FUN_003c5d8c(void)

{
  unsigned int temp_v0;
  
  if ((*(int *)((unsigned char *)&DAT_005cc200 + 0x304)) == 4) {
    temp_v0 = 1;
  }
  else if ((*(int *)((unsigned char *)&DAT_005cc200 + 0x304)) == 5) {
    temp_v0 = 0xffffffff;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
