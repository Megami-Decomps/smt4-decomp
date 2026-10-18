/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e536c` (_code @ 0x2e536c, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00163e40(unsigned int);
extern int FUN_00165058(unsigned int);
/* Supplied declaration required: FUN_001656e0. */
/* Supplied declaration required: FUN_0016572c. */


unsigned int FUN_002e536c(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = *param_1;
  if (temp_v2 != 0) {
    temp_v1 = 0;
    if (temp_v1 < *(int *)(temp_v2 + 0x44)) {
      do {
        temp_v3 = temp_v2 + temp_v1 * 4;
        temp_v0 = FUN_00163e40(*(unsigned int *)(temp_v3 + 4));
        if ((temp_v0 != 0) && (temp_v0 = FUN_00165058(*(unsigned int *)(temp_v3 + 4)), temp_v0 != 4)) {
          FUN_001656e0(*(unsigned int *)(temp_v3 + 4),0);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < *(int *)(temp_v2 + 0x44));
    }
    temp_v1 = 0;
    do {
      temp_v3 = temp_v2 + temp_v1 * 4;
      temp_v0 = FUN_00163e40(*(unsigned int *)(temp_v3 + 0x4c));
      if (temp_v0 != 0) {
        FUN_0016572c(*(unsigned int *)(temp_v3 + 0x4c),0);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x10);
  }
  return 1;
}
