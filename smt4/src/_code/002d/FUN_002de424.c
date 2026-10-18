/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002de424` (_code @ 0x2de424, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00249424. */
/* Supplied declaration required: FUN_00257108. */


void FUN_002de424(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_00257108();
  }
  FUN_00249424();
  *(unsigned int *)(param_1 + 0x48) = param_2;
  return;
}
