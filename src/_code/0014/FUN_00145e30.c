/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00145e30` (_code @ 0x145e30, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b668c. */


void FUN_00145e30(int param_1)

{
/* irregular: irregular input(s): in_s0; 2 native warning(s); review required */
  unsigned char temp_v0;
  float in_s0;
  
  temp_v0 = 0;
  if (*(char *)(param_1 + 0x11dc) == '\0') {
    temp_v0 = *(float *)(param_1 + 0x11d8) == in_s0;
  }
  if (!temp_v0) {
    *(float *)(param_1 + 0x11d8) = in_s0;
    FUN_002b668c(*(unsigned int *)(param_1 + 0x52c),param_1 + 0x11cc);
  }
  *(unsigned char *)(param_1 + 0x11dc) = 0;
  return;
}
