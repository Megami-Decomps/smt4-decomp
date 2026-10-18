/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026f25c` (_code @ 0x26f25c, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e2ac; /* 0x43e2ac */


int FUN_0026f25c(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (param_1 < 0xc) {
    temp_v0 = DAT_0043e2ac + param_1 * 0x4c + 0x24814;
  }
  return temp_v0;
}
