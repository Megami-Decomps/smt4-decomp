/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00294568` (_code @ 0x294568, 0x144 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00433158; /* 0x433158 */
extern int DAT_0044e15c; /* 0x44e15c */
extern int DAT_0044e160; /* 0x44e160 */

/* Supplied declaration required: FUN_002a6214. */
/* Supplied declaration required: FUN_002a6228. */
/* Supplied declaration required: FUN_002a63f8. */
extern int FUN_002aec20(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002b087c. */
/* Supplied declaration required: FUN_002b9364. */


void FUN_00294568(unsigned int param_1,int param_2)

{
/* irregular: 1 goto(s); 5 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (param_2 != 0) {
    if (-1 < (int)param_1) {
      temp_v0 = param_1;
      FUN_002b9364();
      if (temp_v0 != 0) {
        param_1 = param_1 & 0xffff;
        FUN_002b087c();
        if ((*(unsigned char *)(param_1 + 3) & 1) != 0) {
          temp_v2 = (int)*(short *)(param_1 + 0x88);
          if (temp_v2 < 0x81) {
            if ((*(char *)(DAT_0044e160 + temp_v2) < '\x01') &&
               (temp_v1 = FUN_002a63f8(0x23,temp_v2), temp_v1 == 0)) {
              FUN_002a6214(0x23,temp_v2);
            }
            *(char *)(DAT_0044e160 + temp_v2) = *(char *)(DAT_0044e160 + temp_v2) + '\x01';
          }
        }
        else {
          param_1 = *(unsigned short *)(temp_v0 + 0x90) + 1;
          if (param_1 < 0x266) goto LAB_002945fc;
        }
      }
      return;
    }
    param_1 = 0;
  }
LAB_002945fc:
  if ((*(char *)(DAT_0044e15c + param_1) < '\x01') &&
     (temp_v2 = FUN_002a63f8(0x17,param_1), temp_v2 == 0)) {
    temp_v2 = FUN_002aec20(DAT_00433158,0x17,param_1,1);
    if (temp_v2 != 0) {
      FUN_002a6228(DAT_00433158,0x17,param_1,0x10000);
    }
    else {
      FUN_002a6214(0x17,param_1);
    }
  }
  *(char *)(DAT_0044e15c + param_1) = *(char *)(DAT_0044e15c + param_1) + '\x01';
  return;
}
