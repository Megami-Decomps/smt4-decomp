/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031bbe0` (_code @ 0x31bbe0, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f3b0; /* 0x57f3b0 */

extern int FUN_00163e40(unsigned int);
/* Supplied declaration required: FUN_003483a8. */


void FUN_0031bbe0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (DAT_0057f3b0 != 0) {
    temp_v1 = 0;
    *(char *)(DAT_0057f3b0 + 0x8c) = (char)param_1;
    if (param_1 == 0) {
      do {
        temp_v0 = FUN_00163e40(*(unsigned int *)(DAT_0057f3b0 + temp_v1 * 4 + 0x4c));
        if (temp_v0 != 0) {
          FUN_003483a8(*(unsigned int *)(DAT_0057f3b0 + temp_v1 * 4 + 0x4c),0);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x10);
      return;
    }
    do {
      temp_v0 = FUN_00163e40(*(unsigned int *)(DAT_0057f3b0 + temp_v1 * 4 + 0x4c));
      if (temp_v0 != 0) {
        FUN_003483a8(*(unsigned int *)(DAT_0057f3b0 + temp_v1 * 4 + 0x4c),1);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x10);
  }
  return;
}
