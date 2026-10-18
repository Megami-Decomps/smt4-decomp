/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e8e64` (_code @ 0x3e8e64, 0x220 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00235794. */
/* Supplied declaration required: FUN_00380c70. */
extern unsigned char FUN_00380cb0(float);
extern unsigned int FUN_003e8c7c(int *, float *);
extern unsigned int FUN_003e9084(int *, float *);
extern unsigned int FUN_003e919c(int *, float *);


unsigned int FUN_003e8e64(int *param_1,float *param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_s0; 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int *piVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  float temp_v5;
  float in_s0;
  float temp_v6;
  float temp_v7;
  
  temp_v5 = 0.0f;
  puVar2 = (unsigned int *)*param_1;
  switch(puVar2[2]) {
  case 0:
    if ((*puVar2 & 1) != 0) {
      in_s0 = (float)puVar2[3];
    }
    else {
      temp_v3 = puVar2[3];
      if (temp_v3 != 0) {
        temp_v5 = (float)(temp_v3 + (int)(puVar2 + 3));
      }
      FUN_00235794(temp_v5);
    }
    *param_2 = in_s0;
    param_3 = param_3 | 1;
    break;
  case 1:
    if ((*puVar2 & 1) != 0) {
      temp_v5 = (float)puVar2[3];
    }
    else {
      temp_v3 = puVar2[3];
      if (temp_v3 != 0) {
        temp_v5 = (float)(temp_v3 + (int)(puVar2 + 3));
      }
      FUN_00380c70();
    }
    *param_2 = temp_v5;
    param_3 = param_3 | 1;
    break;
  case 2:
    if ((*puVar2 & 1) != 0) {
      temp_v0 = (unsigned char)((*puVar2 & 2) >> 1);
    }
    else {
      temp_v3 = puVar2[3];
      if (temp_v3 != 0) {
        temp_v5 = (float)(temp_v3 + (int)(puVar2 + 3));
      }
      temp_v0 = FUN_00380cb0(temp_v5);
    }
    param_3 = param_3 | 1;
    *(unsigned char *)param_2 = temp_v0;
    break;
  case 3:
    temp_v3 = *puVar2;
    if ((temp_v3 & 4) == 0) {
      if ((temp_v3 & 1) != 0) {
        temp_v6 = (float)puVar2[3];
      }
      else {
        temp_v2 = puVar2[3];
        if (temp_v2 != 0) {
          temp_v1 = (int)(puVar2 + 3) + temp_v2;
        }
        else {
          temp_v1 = 0;
        }
        temp_v7 = in_s0;
        FUN_00235794(temp_v1);
        temp_v6 = in_s0;
        in_s0 = temp_v7;
      }
      *param_2 = temp_v6;
      param_3 = param_3 | 1;
    }
    if ((temp_v3 & 8) == 0) {
      puVar2 = (unsigned int *)*param_1;
      if ((*puVar2 & 2) != 0) {
        in_s0 = (float)puVar2[4];
      }
      else {
        temp_v3 = puVar2[4];
        if (temp_v3 != 0) {
          temp_v5 = (float)(temp_v3 + (int)(puVar2 + 4));
        }
        FUN_00235794(temp_v5);
      }
      param_2[1] = in_s0;
      param_3 = param_3 | 2;
    }
    break;
  case 4:
    param_3 = FUN_003e8c7c(param_1,param_2);
    break;
  case 5:
    param_3 = FUN_003e919c(param_1,param_2);
    break;
  case 6:
    param_3 = FUN_003e9084(param_1,param_2);
    break;
  case 7:
    if ((*puVar2 & 1) != 0) {
      in_s0 = (float)puVar2[3];
    }
    else {
      temp_v3 = puVar2[3];
      if (temp_v3 != 0) {
        temp_v1 = (int)(puVar2 + 3) + temp_v3;
      }
      else {
        temp_v1 = 0;
      }
      FUN_00235794(temp_v1);
    }
    temp_v1 = (int)in_s0;
    if (temp_v1 < 0) {
      return param_3;
    }
    if (*(int *)(*param_1 + 0x10) <= temp_v1) {
      return param_3;
    }
    piVar4 = (int *)(*param_1 + 0x14);
    temp_v4 = *piVar4;
    if (temp_v4 != 0) {
      temp_v4 = (int)piVar4 + temp_v4;
    }
    else {
      temp_v4 = 0;
    }
    piVar4 = (int *)(temp_v4 + temp_v1 * 4);
    temp_v1 = *piVar4;
    if (temp_v1 != 0) {
      temp_v1 = (int)piVar4 + temp_v1;
    }
    else {
      temp_v1 = 0;
    }
    if (temp_v1 != 0) {
      *param_2 = (float)(temp_v1 - (int)param_2);
    }
    else {
      *param_2 = 0.0f;
    }
    param_3 = param_3 | 1;
  }
  return param_3;
}
