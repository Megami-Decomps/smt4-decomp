/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121890` (_code @ 0x121890, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b5058. */


void FUN_00121890(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002b5058();
  FUN_002b5058(param_1 + 0xb4);
  *(unsigned char *)(param_1 + 0x18d) = 0;
  return;
}
