/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f3aac` (_code @ 0x2f3aac, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447a48; /* 0x447a48 */


unsigned char FUN_002f3aac(void)

{
  return *(char *)(DAT_00447a48 + 4) == '\0';
}
