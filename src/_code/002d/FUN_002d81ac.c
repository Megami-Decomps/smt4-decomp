/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d81ac` (_code @ 0x2d81ac, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433a58; /* 0x433a58 */


char FUN_002d81ac(void)

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
