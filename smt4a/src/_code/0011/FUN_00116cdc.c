/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00116cdc` (_code @ 0x116cdc, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00116d04; /* 0x116d04 */

/* Supplied declaration required: FUN_002f76ca. */
/* Supplied declaration required: FUN_002f7824. */


void FUN_00116cdc(int param_1)

{
/* irregular: 2 native warning(s); review required */
  *(unsigned int *)(param_1 + 0xe8) = 0;
  FUN_002f7824(param_1 + 0xec);
  *(unsigned char *)(param_1 + 0xf8) = 0;
  FUN_002f76ca(param_1 + 0xfc,&LAB_00116d04);
  *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
  return;
}
