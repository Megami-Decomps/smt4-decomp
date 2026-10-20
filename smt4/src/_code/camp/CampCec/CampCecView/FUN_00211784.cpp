/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00211784` (_code @ 0x211784, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043db10; /* 0x43db10 */


unsigned char FUN_00211784(void)

{
  return *(char *)(DAT_0043db10 + 0x15c) != '\0';
}

} /* extern "C" */
