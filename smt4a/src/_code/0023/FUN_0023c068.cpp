/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023c068` (_code @ 0x23c068, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f290; /* 0x57f290 */


unsigned char FUN_0023c068(void)

{
  char temp_v0;
  
  temp_v0 = '\0';
  if (DAT_0057f290 != 0) {
    temp_v0 = *(char *)(DAT_0057f290 + 0x430);
  }
  return DAT_0057f290 == 0 || temp_v0 == '\0';
}

} /* extern "C" */
