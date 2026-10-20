/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae3f0` (_code @ 0x3ae3f0, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_btlUi; /* 0x439c88 */


unsigned char FUN_003ae3f0(void)

{
  return *(char *)((*(int *)((unsigned char *)&g_btlUi + 0x20)) + 0x7f4a) != '\0';
}

} /* extern "C" */
