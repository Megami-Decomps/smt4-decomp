/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e55f4` (_code @ 0x3e55f4, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_001aea28. */


void FUN_003e55f4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *(int *)(*(int *)(param_1 + 8) + 4);
  if (temp_v0 != 0) {
    *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 3;
    FUN_001aea28(DAT_0056fcc0);
  }
  temp_v0 = 0;
  do {
    temp_v1 = *(int *)(*(int *)(param_1 + temp_v0 * 0x5c + 0x24) + 4);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 3;
      FUN_001aea28(DAT_0056fcc0);
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  return;
}
