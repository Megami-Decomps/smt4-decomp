/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e9f70` (_code @ 0x3e9f70, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057392c; /* 0x57392c */
extern int DAT_00573934; /* 0x573934 */

/* Supplied declaration required: FUN_004bcb54. */


void FUN_003e9f70(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  if (DAT_00573934 != 0) {
    FUN_004bcb54();
  }
  if (DAT_0057392c != 0) {
    temp_v0 = 0;
    do {
      FUN_004bcb54(DAT_0057392c + temp_v0 * 300 + 0x68);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x18);
  }
  puVar1 = (unsigned int *)(*(int *)(param_1 + 0x4e48) + 0x3498);
  *puVar1 = *puVar1 & 0xfffffffe;
  return;
}
