/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126930` (_code @ 0x126930, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00103300. */


void FUN_00126930(unsigned char param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *puVar1;
  
  if (*(int *)(param_2 + 8) < 1) {
    FUN_00103300();
    return;
  }
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) - 1;
  puVar1 = *(unsigned char **)(param_2 + 4);
  *(unsigned char **)(param_2 + 4) = puVar1 + 1;
  *puVar1 = param_1;
  return;
}
