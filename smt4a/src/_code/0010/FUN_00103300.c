/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103300` (_code @ 0x103300, 0x1ec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e3d04. */
extern int FUN_002e6c50(unsigned int);
extern unsigned int FUN_002e6c58(unsigned int);
/* Supplied declaration required: FUN_002e6c60. */
/* Supplied declaration required: FUN_002e6c74. */
/* Supplied declaration required: FUN_002e6d0c. */


unsigned int FUN_00103300(unsigned char param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 goto(s); 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char *pbVar3;
  int temp_v2;
  unsigned char *pbVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v0 = param_2[3];
  param_2[3] = (temp_v0 & 0xffd7ffff) | 0x400000;
  if ((int)(temp_v0 << 0x1a) < 0) {
    FUN_002e6d0c(param_2);
  }
  temp_v0 = param_2[3];
  if ((temp_v0 & 0x1082) != 2) {
    FUN_002e6c60(param_2);
    return 0xffffffff;
  }
  if ((temp_v0 & 0xa000) == 0x8000) {
    if ((int)(temp_v0 << 0xf) < 0) {
      temp_v0 = param_2[0xb];
      if ((unsigned int)param_2[0xb] <= (unsigned int)param_2[1]) {
        temp_v0 = param_2[1];
      }
      param_2[1] = temp_v0;
    }
    else {
      param_2[0xb] = param_2[4];
      param_2[1] = param_2[4];
      temp_v1 = FUN_002e6c58(param_2[5]);
      param_2[6] = temp_v1;
    }
  }
  temp_v0 = (unsigned int)param_1;
  if (((int)param_2[2] < 0) && (-1 < (int)(param_2[3] << 0x16))) {
    param_2[2] = ~param_2[2];
    *param_2 = 0;
    param_2[3] = param_2[3] | 0x12000;
    pbVar3 = (unsigned char *)param_2[1];
    param_2[1] = (unsigned int)(pbVar3 + 1);
    *pbVar3 = param_1;
    return temp_v0;
  }
  param_2[3] = param_2[3] | 0x2000;
  *param_2 = 0;
  if (param_2[4] == 0) {
    temp_v2 = FUN_002e6c50(param_2[5]);
    if (temp_v2 != 0) {
      if ((param_2[3] & 0x3ff) >> 8 != 0) {
        temp_v2 = param_2[7];
        FUN_002e3d04();
        param_2[4] = temp_v2;
        if (temp_v2 == 0) goto LAB_001033cc;
        param_2[3] = param_2[3] | 0x800;
      }
      else {
LAB_001033cc:
        param_2[7] = 1;
        param_2[4] = (unsigned int)(param_2 + 9);
        temp_v4 = param_2[3] & 0xfffffcff;
        temp_v5 = 0x400;
        param_2[3] = temp_v4 | temp_v5;
      }
    }
    else {
      temp_v2 = param_2[7];
      FUN_002e3d04();
      param_2[4] = temp_v2;
      if (temp_v2 == 0) goto LAB_001033cc;
      temp_v5 = param_2[3];
      temp_v4 = temp_v5 | 0x800;
      param_2[3] = temp_v4;
      if ((temp_v5 & 0x3ff) >> 8 == 0) {
        temp_v5 = 0x100;
        param_2[3] = temp_v4 | temp_v5;
      }
    }
    param_2[1] = param_2[4];
  }
  temp_v5 = param_2[3];
  pbVar3 = (unsigned char *)param_2[4];
  if ((int)(temp_v5 << 0x17) < 0) {
    temp_v5 = param_2[0xb];
    if ((unsigned int)param_2[0xb] <= (unsigned int)param_2[1]) {
      temp_v5 = param_2[1];
    }
    if ((temp_v5 - (int)pbVar3 != 0) &&
       (pbVar5 = pbVar3, FUN_002e6c74(pbVar3,temp_v5 - (int)pbVar3,param_2), pbVar5 != (unsigned char *)0x0)) {
      return 0xffffffff;
    }
    if (-1 < (int)(param_2[3] << 8)) {
      param_2[0xb] = (unsigned int)(pbVar3 + 1);
      param_2[1] = (unsigned int)(pbVar3 + 1);
      param_2[2] = param_2[7] - 1;
      param_2[3] = param_2[3] | 0x10000;
      *pbVar3 = param_1;
      return temp_v0;
    }
    param_2[0xb] = (unsigned int)pbVar3;
    param_2[1] = (unsigned int)pbVar3;
    param_2[2] = 0;
  }
  else {
    if ((int)(temp_v5 << 8) < 0) {
      temp_v5 = temp_v5 & 0x10000;
    }
    else {
      pbVar5 = (unsigned char *)param_2[1];
      param_2[1] = (unsigned int)(pbVar5 + 1);
      *pbVar5 = param_1;
      param_2[3] = param_2[3] | 0x10000;
      if (temp_v0 == 10) {
        temp_v5 = 1;
      }
      else {
        temp_v5 = 0;
      }
    }
    temp_v4 = param_2[0xb];
    temp_v3 = param_2[1];
    temp_v6 = temp_v3;
    if (temp_v3 < temp_v4) {
      temp_v6 = temp_v4;
    }
    temp_v2 = temp_v6 - (int)pbVar3;
    if ((((int)(param_2[3] << 0x15) < 0) || ((int)param_2[7] <= temp_v2)) || (temp_v5 != 0)) {
      if (temp_v4 <= temp_v3) {
        temp_v4 = temp_v3;
      }
      param_2[0xb] = (unsigned int)pbVar3;
      param_2[1] = (unsigned int)pbVar3;
      param_2[2] = 0;
      if ((0 < temp_v2) &&
         (pbVar5 = pbVar3, FUN_002e6c74(pbVar3,temp_v2,param_2,temp_v2,param_4), pbVar5 != (unsigned char *)0x0))
      {
        return 0xffffffff;
      }
      if (temp_v4 - temp_v3 != 0) {
        param_2[0xb] = (unsigned int)pbVar3;
        param_2[1] = (unsigned int)pbVar3;
        param_2[6] = param_2[6] - (temp_v4 - temp_v3);
        param_2[3] = param_2[3] | 0x10;
      }
    }
    if (-1 < (int)(param_2[3] << 8)) {
      return temp_v0;
    }
    temp_v2 = param_2[1];
    param_2[0xb] = (unsigned int)pbVar3;
    param_2[1] = (unsigned int)pbVar3;
    param_2[6] = param_2[6] + (temp_v2 - (int)pbVar3);
  }
  return 0xfffffffe;
}
