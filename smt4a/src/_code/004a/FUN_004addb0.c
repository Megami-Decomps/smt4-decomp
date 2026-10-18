/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004addb0` (_code @ 0x4addb0, 0x1c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
} param_4_stack;

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
extern int FUN_004adb08(unsigned int *);
extern int FUN_004af1c0(unsigned int *);


unsigned int FUN_004addb0(unsigned int *param_1,int param_2,unsigned int *param_3,unsigned int param_4)

{
/* irregular: 1 goto(s) */
  unsigned char temp_v0;
  unsigned short temp_v1;
  long long temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned char *puVar10;
  unsigned int temp_v7;
  
  temp_v3 = *param_3;
  puVar10 = (unsigned char *)((int)param_1 + 0x1491);
  puVar8 = param_1 + 0x521;
  puVar9 = param_1 + 0x520;
  if (param_4 <= temp_v3) {
LAB_004adef0:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *puVar9 = 0x40;
    *puVar8 = 0x10000;
    *(unsigned char *)((int)param_1 + 0x148f) = 0;
    *puVar10 = 0;
    return 0x43;
  }
  *param_3 = temp_v3 + 1;
  temp_v0 = *(unsigned char *)(param_2 + temp_v3);
  *puVar10 = (char)((temp_v0 & 2) >> 1);
  *(unsigned char *)((int)param_1 + 0x148d) = temp_v0 & 1;
  temp_v4 = *puVar9;
  temp_v3 = (unsigned int)(temp_v0 >> 2);
  if (temp_v4 == 0x40) {
    *puVar9 = temp_v3;
  }
  if (temp_v4 != 0x40 && temp_v4 != temp_v3) {
    if (param_1[2] == 0 && param_1[3] == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *puVar9 = 0x40;
      *puVar8 = 0x10000;
      *(unsigned char *)((int)param_1 + 0x148f) = 0;
      *puVar10 = 0;
      return 0x46;
    }
    temp_v2 = (unsigned long long)(temp_v3 - temp_v4) * (unsigned long long)param_1[2];
    temp_v6 = (unsigned int)temp_v2;
    temp_v7 = *param_1;
    *param_1 = temp_v7 + temp_v6;
    param_1[1] = param_1[3] * (temp_v3 - temp_v4) + (int)((unsigned long long)temp_v2 >> 0x20) + param_1[1] +
                 (unsigned int)romwright_carry_4(temp_v7,temp_v6);
    *puVar9 = temp_v3;
    temp_v5 = FUN_004adb08(param_1);
    if (temp_v5 == 0) {
      return 0x44;
    }
  }
  if (*(char *)((int)param_1 + 0x1491) != '\0') {
    temp_v3 = *param_3 + 2;
    temp_v1 = *(unsigned short *)(param_2 + *param_3);
    *param_3 = temp_v3;
    temp_v4 = ((temp_v1 & 0xff) << 8) | (unsigned int)(temp_v1 >> 8);
    if (param_4 < temp_v3) goto LAB_004adef0;
    temp_v3 = temp_v4;
    if (*puVar8 != 0x10000) {
      temp_v3 = (*puVar8 + 1) & 0xffff;
    }
    if (temp_v3 != temp_v4) {
      *puVar8 = 0x10000;
      temp_v5 = FUN_004af1c0(param_1);
      if (temp_v5 != 0) {
        return 0x50;
      }
      return 0x44;
    }
    *puVar8 = temp_v4;
  }
  return 0;
}
