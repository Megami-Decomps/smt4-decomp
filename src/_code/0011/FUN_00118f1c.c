/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00118f1c` (_code @ 0x118f1c, 0x12c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043ded0; /* 0x43ded0 */

extern int FUN_00126184(unsigned int);
extern unsigned char FUN_00126704(unsigned int);
extern unsigned char FUN_00126714(unsigned int);
/* Supplied declaration required: FUN_002b7184. */
/* Supplied declaration required: FUN_002b71d0. */
extern int FUN_002b721c(unsigned int);
extern int FUN_002b722c(unsigned int);
extern int FUN_002bf244(unsigned int);
/* Supplied declaration required: FUN_002bff38. */


unsigned int FUN_00118f1c(int param_1)

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
        temp_v3 = FUN_002bf244(*(unsigned int *)(temp_v5 + 4));
        if ((temp_v3 != 0) && (temp_v3 = FUN_002b722c(*(unsigned int *)(temp_v5 + 4)), temp_v3 != 4)) {
          temp_v3 = FUN_002b721c(*(unsigned int *)(temp_v5 + 4));
          if (temp_v3 == param_1) {
            FUN_002b71d0(*(unsigned int *)(temp_v5 + 4),1);
            temp_v1 = FUN_00126704(*(unsigned int *)(temp_v5 + 4));
            FUN_002bff38(temp_v1);
            temp_v2 = 1;
          }
          else {
            FUN_002b71d0(*(unsigned int *)(temp_v5 + 4),0);
          }
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < *(int *)(temp_v0 + 0x2c));
    }
    temp_v4 = 0;
    do {
      temp_v5 = temp_v0 + temp_v4 * 4;
      temp_v3 = FUN_002bf244(*(unsigned int *)(temp_v5 + 0x34));
      if (temp_v3 != 0) {
        temp_v3 = FUN_00126184(*(unsigned int *)(temp_v5 + 0x34));
        if (temp_v3 == param_1) {
          FUN_002b7184(*(unsigned int *)(temp_v5 + 0x34),1);
          temp_v1 = FUN_00126714(*(unsigned int *)(temp_v5 + 0x34));
          FUN_002bff38(temp_v1);
          temp_v2 = 1;
        }
        else {
          FUN_002b7184(*(unsigned int *)(temp_v5 + 0x34),0);
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 10);
  }
  return temp_v2;
}
