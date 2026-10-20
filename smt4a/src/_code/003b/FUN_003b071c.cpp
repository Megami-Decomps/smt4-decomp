/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b071c` (_code @ 0x3b071c, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_statusDown; /* 0x588fe8 */


unsigned int FUN_003b071c(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (g_statusDown != 0) {
    if (*(int *)(g_statusDown + 0x518) == 0xb) {
      temp_v0 = 1;
    }
    else {
      temp_v0 = 0;
    }
  }
  return temp_v0;
}

} /* extern "C" */
