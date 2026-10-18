/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2bd0` (_code @ 0x2c2bd0, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f240; /* 0x57f240 */


unsigned char FUN_002c2bd0(void)

{
  return *(char *)(DAT_0057f240 + 4) == '\0' || *(char *)(DAT_0057f240 + 4) == '\n';
}
