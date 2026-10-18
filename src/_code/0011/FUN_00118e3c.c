/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00118e3c` (_code @ 0x118e3c, 0x12c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043ded0; /* 0x43ded0 */

extern int FUN_001260a8(unsigned int);
extern unsigned char FUN_00126628(unsigned int);
extern unsigned char FUN_00126638(unsigned int);
/* Supplied declaration required: FUN_002b74c4. */
/* Supplied declaration required: FUN_002b7510. */
extern int FUN_002b755c(unsigned int);
extern int FUN_002b756c(unsigned int);
extern int FUN_002bf41c(unsigned int);
/* Supplied declaration required: FUN_002c0110. */


unsigned int FUN_00118e3c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v0 = DAT_0043ded0;
  if (DAT_0043ded0 == 0) {
    temp_v2 = 0;
  }
  else {
    temp_v2 = 0;
    temp_v4 = 0;
    if (0 < *(int *)(DAT_0043ded0 + 0x2c)) {
      do {
        temp_v5 = temp_v0 + temp_v4 * 4;
        temp_v3 = FUN_002bf41c(*(unsigned int *)(temp_v5 + 4));
        if ((temp_v3 != 0) && (temp_v3 = FUN_002b756c(*(unsigned int *)(temp_v5 + 4)), temp_v3 != 4)) {
          temp_v3 = FUN_002b755c(*(unsigned int *)(temp_v5 + 4));
          if (temp_v3 == param_1) {
            FUN_002b7510(*(unsigned int *)(temp_v5 + 4),1);
            temp_v1 = FUN_00126628(*(unsigned int *)(temp_v5 + 4));
            FUN_002c0110(temp_v1);
            temp_v2 = 1;
          }
          else {
            FUN_002b7510(*(unsigned int *)(temp_v5 + 4),0);
          }
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < *(int *)(temp_v0 + 0x2c));
    }
    temp_v4 = 0;
    do {
      temp_v5 = temp_v0 + temp_v4 * 4;
      temp_v3 = FUN_002bf41c(*(unsigned int *)(temp_v5 + 0x34));
      if (temp_v3 != 0) {
        temp_v3 = FUN_001260a8(*(unsigned int *)(temp_v5 + 0x34));
        if (temp_v3 == param_1) {
          FUN_002b74c4(*(unsigned int *)(temp_v5 + 0x34),1);
          temp_v1 = FUN_00126638(*(unsigned int *)(temp_v5 + 0x34));
          FUN_002c0110(temp_v1);
          temp_v2 = 1;
        }
        else {
          FUN_002b74c4(*(unsigned int *)(temp_v5 + 0x34),0);
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 10);
  }
  return temp_v2;
}
