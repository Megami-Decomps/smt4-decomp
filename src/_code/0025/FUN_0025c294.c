/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025c294` (_code @ 0x25c294, 0xdc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_0022add0. */
/* Supplied declaration required: FUN_002b087c. */
extern unsigned int FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int);


unsigned int FUN_0025c294(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  
  temp_v0 = FUN_002c0ec4(2);
  temp_v1 = FUN_002c0e9c();
  temp_v6 = temp_v1;
  if (((-1 < (int)param_1) && (temp_v2 = FUN_002c0e4c(temp_v0), param_1 < temp_v2)) &&
     (temp_v6 = DAT_00433158, FUN_0022add0(DAT_00433158,param_1), temp_v6 == 0)) {
    temp_v6 = temp_v1 + param_1 * 0x1c;
  }
  if (temp_v6 == 0) {
    return 0;
  }
  temp_v7 = 0;
  temp_v2 = temp_v7;
  do {
    temp_v5 = (unsigned int)*(unsigned short *)(temp_v6 + temp_v7 * 2 + 0xc);
    if ((temp_v5 != 0) && (temp_v3 = temp_v5, FUN_002b087c(), temp_v3 != 0)) {
      if ((*(unsigned char *)(temp_v3 + 3) & 1) != 0) {
        return temp_v5;
      }
      if ((temp_v2 == 0) ||
         (temp_v4 = temp_v2, FUN_002b087c(), *(unsigned char *)(temp_v4 + 2) < *(unsigned char *)(temp_v3 + 2))) {
        temp_v2 = temp_v5;
      }
    }
    temp_v7 = temp_v7 + 1;
  } while ((int)temp_v7 < 6);
  return temp_v2;
}
