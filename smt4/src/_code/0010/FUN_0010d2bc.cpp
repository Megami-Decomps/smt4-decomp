/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d2bc` (_code @ 0x10d2bc, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern signed char DAT_004e3169; /* 0x4e3169 */
extern unsigned char DAT_004e316b; /* 0x4e316b */


void FUN_0010d2bc(unsigned char param_1)

{
  if (DAT_004e3169 != '\0') {
    DAT_004e316b = param_1;
  }
  return;
}

} /* extern "C" */
