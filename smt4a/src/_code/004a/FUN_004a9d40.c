/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a9d40` (_code @ 0x4a9d40, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057a9c8; /* 0x57a9c8 */


unsigned char FUN_004a9d40(void)

{
  return *(char *)(DAT_0057a9c8 + 0x75b2) != '\0';
}
