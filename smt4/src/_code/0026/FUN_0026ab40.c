/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026ab40` (_code @ 0x26ab40, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dd68; /* 0x43dd68 */


unsigned char FUN_0026ab40(void)

{
  char temp_v0;
  
  temp_v0 = '\0';
  if (DAT_0043dd68 != 0) {
    temp_v0 = *(char *)(DAT_0043dd68 + 0x430);
  }
  return DAT_0043dd68 == 0 || temp_v0 == '\0';
}
