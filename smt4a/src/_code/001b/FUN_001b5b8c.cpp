/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b5b8c` (_code @ 0x1b5b8c, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern signed char DAT_006446e8; /* 0x6446e8 */
extern signed char DAT_006446e9; /* 0x6446e9 */


unsigned int FUN_001b5b8c(int param_1)

{
  if ((*(char *)(param_1 + 0xe) == '\0') &&
     ((DAT_006446e8 == '\0' || ('\x02' < (char)(DAT_006446e9 - *(char *)(param_1 + 0xf)))))) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
