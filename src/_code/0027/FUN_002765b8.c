/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002765b8` (_code @ 0x2765b8, 0x110 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_0025c110. */
/* Supplied declaration required: FUN_002c0e4c. */
extern int FUN_002c0e9c(void);
/* Supplied declaration required: FUN_002c0ec4. */
/* Supplied declaration required: FUN_003880c4. */


unsigned int FUN_002765b8(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v4 = 0;
  FUN_002c0ec4(0x30,0);
  temp_v0 = FUN_002c0e4c();
  temp_v2 = DAT_00433158;
  FUN_0025c110(DAT_00433158,0x27,0);
  if (0 < temp_v2 + temp_v0) {
    do {
      temp_v1 = FUN_002c0ec4(0x30,0);
      temp_v2 = FUN_002c0e9c();
      temp_v3 = FUN_002c0e4c(temp_v1);
      if (temp_v4 < temp_v3) {
        temp_v2 = temp_v2 + temp_v4 * 0x28;
      }
      else {
        temp_v0 = DAT_00433158;
        FUN_0025c110(DAT_00433158,0x27,0);
        temp_v2 = 0;
        if (temp_v4 < temp_v3 + temp_v0) {
          temp_v2 = DAT_00433158;
          FUN_003880c4(DAT_00433158,temp_v4 - temp_v3);
        }
      }
      if ((*(int *)(temp_v2 + 0x20) != -1) && (*(int *)(temp_v2 + 0x20) == param_1)) {
        return temp_v4;
      }
      temp_v4 = temp_v4 + 1;
      FUN_002c0ec4(0x30,0);
      temp_v0 = FUN_002c0e4c();
      temp_v2 = DAT_00433158;
      FUN_0025c110(DAT_00433158,0x27,0);
    } while ((int)temp_v4 < temp_v2 + temp_v0);
  }
  return 0xffffffff;
}
