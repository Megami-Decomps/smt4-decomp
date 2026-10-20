/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246708` (_code @ 0x246708, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0047e200; /* 0x47e200 */


unsigned int FUN_00246708(void)

{
  unsigned int temp_v0;
  
  if ((*(int *)((unsigned char *)&DAT_0047e200 + 0x304)) == 4) {
    temp_v0 = 1;
  }
  else if ((*(int *)((unsigned char *)&DAT_0047e200 + 0x304)) == 5) {
    temp_v0 = 0xffffffff;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
