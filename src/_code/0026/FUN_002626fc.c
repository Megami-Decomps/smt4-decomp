/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002626fc` (_code @ 0x2626fc, 0x2a0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_002c6e7c; /* 0x2c6e7c */

/* Supplied declaration required: FUN_0029ec14. */
/* Supplied declaration required: FUN_0029ed44. */
/* Supplied declaration required: FUN_002b7f0a. */
/* Supplied declaration required: FUN_002b9364. */
/* Supplied declaration required: FUN_00311d20. */
extern int FUN_003c8fdc(int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_003c997c. */


int FUN_002626fc(int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
/* irregular: 6 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v4 = 0;
  if (param_2 < param_3) {
    temp_v2 = param_2;
    FUN_00311d20(param_2,param_3);
  }
  else {
    temp_v2 = param_3;
    FUN_00311d20();
  }
  if (((temp_v2 != 0) && ((*(unsigned int *)(temp_v2 + 4) & 0xffff) != 0)) &&
     (temp_v1 = param_1, FUN_0029ed44(param_1,*(unsigned int *)(temp_v2 + 4) & 0xffff), temp_v1 != 0)) {
    temp_v1 = FUN_003c8fdc(param_1,param_2,param_3,*(unsigned int *)(temp_v2 + 4) & 0xffff);
    temp_v4 = 0;
    if (temp_v1 != 0) {
      temp_v3 = param_4[1];
      *param_4 = (((*param_4 & 0xffff8000) | (param_2 & 0xffff7fff)) & 0xc0007fff) |
                 ((param_3 & 0x7fff) << 0xf);
      param_4[1] = temp_v3;
      param_4[1] = (temp_v3 & 3) | ((*(unsigned int *)(temp_v2 + 4) & 0x7fff) << 2);
      temp_v2 = *(unsigned int *)(temp_v2 + 4) & 0xffff;
      FUN_002b9364();
      temp_v4 = 0;
      do {
        temp_v0 = *(short *)(temp_v2 + 0x3c + temp_v4 * 2);
        if (temp_v0 != 0) {
          *(short *)(param_1 + *(int *)(param_1 + 0x178) * 2 + 0x146) = temp_v0;
          *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 8);
      if (*(int *)(param_1 + 0x178) < 0x18) {
        *(unsigned short *)(param_1 + *(int *)(param_1 + 0x178) * 2 + 0x146) = 0;
      }
      temp_v4 = 0;
      do {
        temp_v1 = param_1 + temp_v4 * 2;
        temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 0x146);
        if ((temp_v3 != 0) && (FUN_0029ec14(), (*(unsigned char *)(temp_v3 + 3) & 0x20) == 0)) {
          *(unsigned short *)(temp_v1 + 0x146) = 0;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 0x18);
      FUN_002b7f0a(param_1 + 0x146,*(unsigned int *)(param_1 + 0x178),2,&LAB_002c6e7c);
      temp_v1 = *(int *)(param_1 + 0x178);
      temp_v4 = 0;
      *(unsigned int *)(param_1 + 0x178) = 0;
      if (0 < temp_v1) {
        do {
          if (*(short *)(param_1 + temp_v4 * 2 + 0x146) == 0) break;
          temp_v4 = temp_v4 + 1;
          *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
        } while (temp_v4 < temp_v1);
      }
      if (*(char *)(param_1 + 0x17d) != '\0') {
        temp_v1 = (unsigned int)*(unsigned short *)(temp_v2 + 0x1e) + (unsigned int)*(unsigned char *)(temp_v2 + 3) * 0x14 +
                (unsigned int)*(unsigned short *)(temp_v2 + 0x1a) + (unsigned int)*(unsigned short *)(temp_v2 + 0x1c) +
                (unsigned int)*(unsigned short *)(temp_v2 + 0x20) + (unsigned int)*(unsigned short *)(temp_v2 + 0x22);
        temp_v4 = 0;
        do {
          temp_v2 = (unsigned int)*(unsigned short *)(param_1 + temp_v4 * 2 + 0x146);
          if (temp_v2 == 0) break;
          FUN_0029ec14();
          temp_v4 = temp_v4 + 1;
          temp_v1 = temp_v1 + (*(unsigned char *)(temp_v2 + 3) & 0x1f) * 5;
        } while (temp_v4 < 0x18);
        param_4[1] = (param_4[1] & 0x1ffff) | (temp_v1 << 0x11);
      }
      FUN_003c997c(param_1,param_2,param_3,(param_4[1] & 0x1ffff) >> 2);
      temp_v4 = param_1;
    }
  }
  return temp_v4;
}
