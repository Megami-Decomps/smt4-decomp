/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001532a0` (_code @ 0x1532a0, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_004e827c; /* 0x4e827c */
extern signed char DAT_004e827d; /* 0x4e827d */


unsigned int FUN_001532a0(int param_1)

{
  if ((*(char *)(param_1 + 0xe) == '\0') &&
     ((DAT_004e827c == '\0' || ('\x02' < (char)(DAT_004e827d - *(char *)(param_1 + 0xf)))))) {
    return 0;
  }
  return 1;
}
