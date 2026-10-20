/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002619e0` (_code @ 0x2619e0, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f574; /* 0x57f574 */


unsigned int FUN_002619e0(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(DAT_0057f574 + 8);
  if ((temp_v0 == 3 || temp_v0 == 4) || (temp_v0 == 1 || temp_v0 == 2)) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
