/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013edc8` (_code @ 0x13edc8, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0014af98(void);
extern unsigned long long FUN_00152f44(void);
/* Supplied declaration required: FUN_001628c0. */
extern int FUN_0030ef8c(char *, unsigned char *, unsigned int);
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_0013edc8(char *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned long long temp_v7;
  unsigned char temp_v8 [228];
  
  rt_memcpy_w(temp_v8,"F003002",0xe0);
  temp_v7 = FUN_00152f44();
  temp_v3 = (unsigned int)((unsigned long long)temp_v7 >> 0x20);
  temp_v5 = (unsigned int)temp_v7;
  temp_v0 = (unsigned int)*param_1;
  if (temp_v0 != 0x44 && temp_v0 != 0x49) {
    temp_v6 = temp_v0 >= 0x46;
    if (temp_v0 != 0x46) {
      temp_v3 = temp_v0 - 0x30;
      temp_v6 = temp_v3 >= 9;
    }
    if (temp_v6 && (temp_v0 != 0x46 && temp_v3 != 9)) {
      temp_v2 = FUN_0014af98();
      FUN_001628c0(param_1,temp_v2,temp_v5,1);
      return 1;
    }
  }
  if (temp_v0 == 0x46) {
    temp_v4 = 0;
    do {
      temp_v1 = FUN_0030ef8c(param_1,temp_v8 + temp_v4 * 8,7);
      if (temp_v1 == 0) {
        temp_v2 = FUN_0014af98();
        FUN_001628c0(param_1,temp_v2,temp_v5,1);
        return 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x1c);
  }
  temp_v5 = temp_v5 | 4;
  temp_v2 = FUN_0014af98();
  FUN_001628c0(param_1,temp_v2,temp_v5,1);
  return 1;
}
