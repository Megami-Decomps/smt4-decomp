/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00211090` (_code @ 0x211090, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043dad0; /* 0x43dad0 */


unsigned char FUN_00211090(void)

{
  return *(char *)(DAT_0043dad0 + 0x125) != '\0';
}

} /* extern "C" */
