/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e5d88` (_code @ 0x2e5d88, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f69c; /* 0x57f69c */


unsigned char FUN_002e5d88(int param_1)

{
  return *(char *)(param_1 + DAT_0057f69c + 0x27f40) != '\0';
}
