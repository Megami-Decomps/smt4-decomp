/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8214` (_code @ 0x2d8214, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00433a58; /* 0x433a58 */


char FUN_002d8214(void)

{
  char temp_v0;
  
  temp_v0 = '\0';
  if (DAT_00433a58 != 0) {
    temp_v0 = *(char *)(DAT_00433a58 + 0x6c);
  }
  if (DAT_00433a58 != 0 && temp_v0 != '\0') {
    temp_v0 = '\x01';
  }
  return temp_v0;
}

} /* extern "C" */
