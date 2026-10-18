/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00259594` (_code @ 0x259594, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e2ac; /* 0x43e2ac */


unsigned char FUN_00259594(unsigned char param_1)

{
  return (param_1 & *(unsigned char *)(DAT_0043e2ac + 0x24baf)) != 0;
}
