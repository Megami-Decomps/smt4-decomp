/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001464cc` (_code @ 0x1464cc, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b634c(unsigned int, int);

/* Supplied declaration required: FUN_002b634c. */


void FUN_001464cc(int param_1)

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
    FUN_002b634c(*(unsigned int *)(param_1 + 0x52c),param_1 + 0x11cc);
  }
  *(unsigned char *)(param_1 + 0x11dc) = 0;
  return;
}

} /* extern "C" */
