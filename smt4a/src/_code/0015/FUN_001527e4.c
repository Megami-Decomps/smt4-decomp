/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001527e4` (_code @ 0x1527e4, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f3b0; /* 0x57f3b0 */

extern int FUN_00163e40(unsigned int);
extern int FUN_00165058(unsigned int);
/* Supplied declaration required: FUN_001656e0. */
/* Supplied declaration required: FUN_0016572c. */
extern int FUN_00167888(unsigned int);
extern int FUN_00167898(unsigned int);
/* Supplied declaration required: FUN_00167f24. */
extern unsigned char FUN_00169580(unsigned int);
extern unsigned char FUN_00169590(unsigned int);


unsigned int FUN_001527e4(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v0 = DAT_0057f3b0;
  if (DAT_0057f3b0 == 0) {
    temp_v2 = 0;
  }
  else {
    temp_v2 = 0;
    temp_v4 = 0;
    if (0 < *(int *)(DAT_0057f3b0 + 0x44)) {
      do {
        temp_v5 = temp_v0 + temp_v4 * 4;
        temp_v3 = FUN_00163e40(*(unsigned int *)(temp_v5 + 4));
        if ((temp_v3 != 0) && (temp_v3 = FUN_00165058(*(unsigned int *)(temp_v5 + 4)), temp_v3 != 4)) {
          temp_v3 = FUN_00167888(*(unsigned int *)(temp_v5 + 4));
          if (temp_v3 == param_1) {
            FUN_001656e0(*(unsigned int *)(temp_v5 + 4),1);
            temp_v1 = FUN_00169580(*(unsigned int *)(temp_v5 + 4));
            FUN_00167f24(temp_v1);
            temp_v2 = 1;
          }
          else {
            FUN_001656e0(*(unsigned int *)(temp_v5 + 4),0);
          }
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < *(int *)(temp_v0 + 0x44));
    }
    temp_v4 = 0;
    do {
      temp_v5 = temp_v0 + temp_v4 * 4;
      temp_v3 = FUN_00163e40(*(unsigned int *)(temp_v5 + 0x4c));
      if (temp_v3 != 0) {
        temp_v3 = FUN_00167898(*(unsigned int *)(temp_v5 + 0x4c));
        if (temp_v3 == param_1) {
          FUN_0016572c(*(unsigned int *)(temp_v5 + 0x4c),1);
          temp_v1 = FUN_00169590(*(unsigned int *)(temp_v5 + 0x4c));
          FUN_00167f24(temp_v1);
          temp_v2 = 1;
        }
        else {
          FUN_0016572c(*(unsigned int *)(temp_v5 + 0x4c),0);
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x10);
  }
  return temp_v2;
}
