/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ffd8c` (_code @ 0x2ffd8c, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9672(unsigned int *);

/* Supplied declaration required: FUN_002e9672. */


void FUN_002ffd8c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(unsigned char *)(param_1 + 0xd) = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(unsigned char *)((int)param_1 + 0x35) = 0;
  FUN_002e9672(param_1 + 4);
  param_1[0xc] = 0;
  return;
}

} /* extern "C" */
