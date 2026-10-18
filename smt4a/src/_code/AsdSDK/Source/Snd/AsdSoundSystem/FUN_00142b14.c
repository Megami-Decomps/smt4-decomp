/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00142b14` (_code @ 0x142b14, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0063f4fd; /* 0x63f4fd */
extern unsigned char DAT_0063f4ff; /* 0x63f4ff */


void FUN_00142b14(unsigned char param_1)

{
  if (DAT_0063f4fd != '\0') {
    DAT_0063f4ff = param_1;
  }
  return;
}
