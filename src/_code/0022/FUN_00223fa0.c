/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00223fa0` (_code @ 0x223fa0, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dd68; /* 0x43dd68 */


unsigned char FUN_00223fa0(void)

{
  return *(char *)(DAT_0043dd68 + 0x956c) == '\0';
}
