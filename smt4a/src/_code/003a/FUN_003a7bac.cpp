/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a7bac` (_code @ 0x3a7bac, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_statusDown; /* 0x588fe8 */


unsigned int FUN_003a7bac(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 1;
  if ((g_statusDown != 0) && (*(int *)(g_statusDown + 0x2564) != 5)) {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
