/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046e238` (_code @ 0x46e238, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001b315c(unsigned int);
/* Supplied declaration required: FUN_001b31ac. */
/* Supplied declaration required: FUN_001b31e0. */
/* Supplied declaration required: FUN_003fd63c. */


void FUN_0046e238(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  char *pcVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v4 = 0;
  if (temp_v4 < *(int *)(param_1 + 0x310)) {
    do {
      temp_v2 = *(int *)(param_1 + 0x318) + temp_v4 * 0x50;
      temp_v0 = FUN_001b315c(temp_v2);
      if (temp_v0 != 0) {
        temp_v1 = temp_v2;
        FUN_001b31ac();
        FUN_001b31e0();
        temp_v3 = 0;
        if (temp_v3 < temp_v2) {
          do {
            pcVar3 = (char *)(temp_v1 + temp_v3 * 0x40);
            if (*pcVar3 == '6') {
              FUN_003fd63c(*(unsigned int *)(pcVar3 + 0x3c),1);
            }
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < temp_v2);
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < *(int *)(param_1 + 0x310));
  }
  return;
}
