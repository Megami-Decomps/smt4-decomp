/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f3570` (_code @ 0x2f3570, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447060; /* 0x447060 */


unsigned char FUN_002f3570(void)

{
  return *(int *)(DAT_00447060 + 200) >= 0x3f000000;
}
