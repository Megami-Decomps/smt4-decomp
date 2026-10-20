/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00116732` (_code @ 0x116732, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f4ab0(int, unsigned int);

/* Supplied declaration required: FUN_002f4ab0. */


void FUN_00116732(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(param_1 + 100) != '\0') {
    *(unsigned char *)(param_1 + 4) = 1;
    FUN_002f4ab0(param_1 + 0x48,0xffffffff);
  }
  return;
}

} /* extern "C" */
