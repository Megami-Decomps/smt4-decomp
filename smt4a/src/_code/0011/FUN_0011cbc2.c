/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011cbc2` (_code @ 0x11cbc2, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0031156c. */


unsigned char FUN_0011cbc2(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = 0;
  if (*(char *)(param_1 + 0x1d8) != '\0') {
    temp_v2 = 0;
    while ((temp_v2 < *(unsigned int *)(param_1 + 0x268) && (temp_v1 = param_1, FUN_0031156c(), temp_v1 != 0))) {
      temp_v2 = temp_v2 + 1;
    }
    temp_v0 = 1;
  }
  return temp_v0;
}
