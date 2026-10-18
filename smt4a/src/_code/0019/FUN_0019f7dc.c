/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019f7dc` (_code @ 0x19f7dc, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0019f828. */


void FUN_0019f7dc(int param_1)

{
/* irregular: irregular input(s): in_s0; 2 native warning(s); review required */
  unsigned char temp_v0;
  float in_s0;
  
  temp_v0 = 0;
  if (*(char *)(param_1 + 0x11e8) == '\0') {
    temp_v0 = *(float *)(param_1 + 0x11e4) == in_s0;
  }
  if (!temp_v0) {
    *(float *)(param_1 + 0x11e4) = in_s0;
    FUN_0019f828(*(unsigned int *)(param_1 + 0x530),param_1 + 0x11d8);
  }
  *(unsigned char *)(param_1 + 0x11e8) = 0;
  return;
}
