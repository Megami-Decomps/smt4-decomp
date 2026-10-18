/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00211688` (_code @ 0x211688, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043db10; /* 0x43db10 */


unsigned char FUN_00211688(void)

{
  return *(char *)(DAT_0043db10 + 0x15c) != '\0';
}
