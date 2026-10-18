/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ed838` (_code @ 0x2ed838, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e74bc. */


void FUN_002ed838(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e74bc(*(unsigned int *)(param_1 + 8));
  *(unsigned char *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  return;
}
