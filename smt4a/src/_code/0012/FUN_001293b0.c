/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001293b0` (_code @ 0x1293b0, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_005949d8; /* 0x5949d8 */

/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_002eb624. */


void FUN_001293b0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    puVar2 = &DAT_005949d8;
    for (temp_v0 = 0; temp_v0 < *(unsigned int *)(puVar2 + 0x28); temp_v0 = temp_v0 + 1) {
      FUN_002eb624(*(int *)(param_1 + 8) + temp_v0 * 300 + 4);
    }
    FUN_002e6e14(*(unsigned int *)(param_1 + 8));
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return;
}
