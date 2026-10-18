/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00263140` (_code @ 0x263140, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcf0; /* 0x43dcf0 */


char FUN_00263140(void)

{
  char temp_v0;
  
  temp_v0 = '\0';
  if (DAT_0043dcf0 != 0) {
    temp_v0 = *(char *)(DAT_0043dcf0 + 0x42);
  }
  if (DAT_0043dcf0 != 0 && temp_v0 != '\0') {
    temp_v0 = '\x01';
  }
  return temp_v0;
}
