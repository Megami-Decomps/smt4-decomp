/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00239480` (_code @ 0x239480, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f588; /* 0x57f588 */


unsigned char FUN_00239480(void)

{
  unsigned char temp_v0;
  
  if (((*(int *)((unsigned char *)&DAT_0057f588 + 0x4)) == 0) || (temp_v0 = 1, *(char *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x4)) + 8) != '\x01')) {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
