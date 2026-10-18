/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002393cc` (_code @ 0x2393cc, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f69c; /* 0x57f69c */


unsigned char FUN_002393cc(int param_1)

{
  unsigned char temp_v0;
  
  if ((param_1 >= 10) || (temp_v0 = 1, *(char *)(param_1 + DAT_0057f69c + 0x5458) != '\x01')) {
    temp_v0 = 0;
  }
  return temp_v0;
}
