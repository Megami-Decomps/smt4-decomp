/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00125e30` (_code @ 0x125e30, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043dcb4; /* 0x43dcb4 */


char FUN_00125e30(void)

{
  char temp_v0;
  
  temp_v0 = '\0';
  if (DAT_0043dcb4 != 0) {
    temp_v0 = *(char *)(DAT_0043dcb4 + 0x67c);
  }
  if (DAT_0043dcb4 != 0 && temp_v0 != '\0') {
    temp_v0 = '\x01';
  }
  return temp_v0;
}

} /* extern "C" */
