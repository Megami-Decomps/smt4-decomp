/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00347664` (_code @ 0x347664, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00570ab4; /* 0x570ab4 */


char FUN_00347664(void)

{
  char temp_v0;
  
  temp_v0 = '\0';
  if (DAT_00570ab4 != 0) {
    temp_v0 = *(char *)(DAT_00570ab4 + 0x6c);
  }
  if (DAT_00570ab4 != 0 && temp_v0 != '\0') {
    temp_v0 = '\x01';
  }
  return temp_v0;
}
