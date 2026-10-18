/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00359c9c` (_code @ 0x359c9c, 0xec bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00238e18. */
extern int FUN_002396f8(unsigned char *);
/* Supplied declaration required: FUN_00263720. */
/* Supplied declaration required: FUN_002adb40. */
/* Supplied declaration required: FUN_0035a09c. */


int FUN_00359c9c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [8];
  unsigned char temp_v6 [8];
  unsigned char temp_v7 [12];
  
  FUN_00263720(temp_v5);
  temp_v1 = FUN_00238e18(temp_v7,param_1 + 0x20);
  FUN_002adb40(temp_v5,temp_v1);
  FUN_00238e18(temp_v6,param_1 + 0x20);
  if ((*(char *)(param_1 + 0x131) == '\0') && (temp_v2 = FUN_002396f8(temp_v5), temp_v2 != 0)) {
    temp_v2 = param_1;
    FUN_0035a09c(param_1,param_2,param_3,param_4);
    if (-1 < temp_v2) {
      temp_v3 = 0x70;
      temp_v2 = (int)*(char *)(param_1 + 0x130);
      if (temp_v2 != 0) {
        temp_v4 = 0;
        do {
          temp_v0 = temp_v4 * 0xc;
          temp_v2 = temp_v2 - 1;
          temp_v4 = temp_v4 + 1;
          temp_v3 = temp_v3 + 8 + ((*(int *)(param_1 + temp_v0 + 0x74) + 3U) & 0xfffffffc);
        } while (temp_v2 != 0);
      }
      *(int *)(param_1 + 4) = *(int *)(param_1 + 0x134) + temp_v3 + 0x20;
      *(int *)(param_1 + 8) = temp_v3;
      temp_v2 = 0;
    }
    return temp_v2;
  }
  return -0x377ef416;
}
