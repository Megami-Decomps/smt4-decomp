/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003493c4` (_code @ 0x3493c4, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f268; /* 0x57f268 */


unsigned int FUN_003493c4(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0057f268 != 0) {
    temp_v0 = *(unsigned int *)(DAT_0057f268 + 0xfc4);
  }
  return temp_v0;
}

} /* extern "C" */
