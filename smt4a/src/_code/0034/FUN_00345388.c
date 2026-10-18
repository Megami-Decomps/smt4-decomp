/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00345388` (_code @ 0x345388, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f69c; /* 0x57f69c */


unsigned char FUN_00345388(unsigned char param_1)

{
  return (param_1 & *(unsigned char *)(DAT_0057f69c + 0x27e97)) != 0;
}
