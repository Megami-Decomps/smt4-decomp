/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00221d58` (_code @ 0x221d58, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043ded0; /* 0x43ded0 */

extern int FUN_002bf244(unsigned int);
/* Supplied declaration required: FUN_002d85f8. */


void FUN_00221d58(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (DAT_0043ded0 != 0) {
    temp_v1 = 0;
    *(char *)(DAT_0043ded0 + 0x5c) = (char)param_1;
    if (param_1 == 0) {
      do {
        temp_v0 = FUN_002bf244(*(unsigned int *)(DAT_0043ded0 + temp_v1 * 4 + 0x34));
        if (temp_v0 != 0) {
          FUN_002d85f8(*(unsigned int *)(DAT_0043ded0 + temp_v1 * 4 + 0x34),0);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 10);
      return;
    }
    do {
      temp_v0 = FUN_002bf244(*(unsigned int *)(DAT_0043ded0 + temp_v1 * 4 + 0x34));
      if (temp_v0 != 0) {
        FUN_002d85f8(*(unsigned int *)(DAT_0043ded0 + temp_v1 * 4 + 0x34),1);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 10);
  }
  return;
}
