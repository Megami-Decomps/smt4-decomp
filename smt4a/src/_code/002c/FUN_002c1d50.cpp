/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1d50` (_code @ 0x2c1d50, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001656e0(unsigned int, int);
int FUN_0016572c(unsigned int, int);

extern int DAT_0057f3b0; /* 0x57f3b0 */

extern int FUN_00163e40(unsigned int);
extern int FUN_00165058(unsigned int);
/* Supplied declaration required: FUN_001656e0. */
/* Supplied declaration required: FUN_0016572c. */


void FUN_002c1d50(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = DAT_0057f3b0;
  if (DAT_0057f3b0 != 0) {
    temp_v2 = 0;
    if (0 < *(int *)(DAT_0057f3b0 + 0x44)) {
      do {
        temp_v3 = temp_v0 + temp_v2 * 4;
        temp_v1 = FUN_00163e40(*(unsigned int *)(temp_v3 + 4));
        if ((temp_v1 != 0) && (temp_v1 = FUN_00165058(*(unsigned int *)(temp_v3 + 4)), temp_v1 != 4)) {
          FUN_001656e0(*(unsigned int *)(temp_v3 + 4),1);
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < *(int *)(temp_v0 + 0x44));
    }
    temp_v2 = 0;
    do {
      temp_v3 = temp_v0 + temp_v2 * 4;
      temp_v1 = FUN_00163e40(*(unsigned int *)(temp_v3 + 0x4c));
      if (temp_v1 != 0) {
        FUN_0016572c(*(unsigned int *)(temp_v3 + 0x4c),1);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x10);
  }
  return;
}

} /* extern "C" */
