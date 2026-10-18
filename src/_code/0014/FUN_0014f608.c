/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014f608` (_code @ 0x14f608, 0x1dc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;


int FUN_0014f608(unsigned int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned short *puVar5;
  unsigned short *puVar6;
  unsigned int *puVar7;
  unsigned short *puVar8;
  unsigned int temp_v2;
  unsigned int unaff_r11;
  unsigned char temp_v3;
  
  puVar7 = (unsigned int *)(param_3 - 0x10);
  puVar8 = (unsigned short *)(*(int *)(param_2 + 4) + param_2 + 0x10);
  puVar5 = (unsigned short *)(param_3 + param_4);
  puVar3 = *(unsigned int **)(param_2 + 8);
  puVar4 = (unsigned int *)(param_2 - ((*(unsigned short *)(param_2 + 2) & 0x7fff) >> 8));
  temp_v1 = *(unsigned int *)(param_2 + 0xc);
  if (puVar3 != (unsigned int *)0x0) {
    puVar3[3] = temp_v1;
  }
  else {
    *param_1 = temp_v1;
  }
  if (temp_v1 != 0) {
    *(unsigned int **)(temp_v1 + 8) = puVar3;
  }
  temp_v2 = (int)puVar7 - (int)puVar4;
  if (temp_v1 == 0) {
    param_1[1] = (unsigned int)puVar3;
  }
  if (temp_v2 >= 0x14) {
    if (param_5 == 0) {
      unaff_r11 = (unsigned int)(unsigned char)param_1[5];
    }
    if (param_5 != 0 || unaff_r11 != 0) {
      *(unsigned short *)puVar4 = 0x4652;
      *(unsigned short *)((int)puVar4 + 2) = 0;
      puVar4[3] = 0;
      puVar4[2] = (unsigned int)puVar3;
      puVar4[1] = temp_v2 - 0x10;
      if (puVar3 != (unsigned int *)0x0) {
        temp_v2 = puVar3[3];
        puVar3[3] = (unsigned int)puVar4;
      }
      else {
        temp_v2 = *param_1;
        *param_1 = (unsigned int)puVar4;
      }
      puVar4[3] = temp_v2;
      puVar3 = puVar4;
      if (temp_v2 != 0) {
        *(unsigned int **)(temp_v2 + 8) = puVar4;
        puVar4 = puVar7;
      }
      else {
        param_1[1] = (unsigned int)puVar4;
        puVar4 = puVar7;
      }
    }
  }
  puVar6 = puVar8;
  if ((unsigned int)((int)puVar8 - (int)puVar5) >= 0x14) {
    if (param_5 == 1) {
      temp_v2 = (unsigned int)(unsigned char)param_1[5];
    }
    if (param_5 != 1 || temp_v2 != 0) {
      *puVar5 = 0x4652;
      puVar5[1] = 0;
      *(unsigned int *)(puVar5 + 6) = 0;
      *(unsigned int **)(puVar5 + 4) = puVar3;
      *(unsigned int *)(puVar5 + 2) = ((int)puVar8 - (int)puVar5) - 0x10;
      if (puVar3 != (unsigned int *)0x0) {
        temp_v1 = puVar3[3];
        puVar3[3] = (unsigned int)puVar5;
      }
      else {
        temp_v1 = *param_1;
        *param_1 = (unsigned int)puVar5;
      }
      *(unsigned int *)(puVar5 + 6) = temp_v1;
      puVar6 = puVar5;
      if (temp_v1 != 0) {
        *(unsigned short **)(temp_v1 + 8) = puVar5;
      }
      else {
        param_1[1] = (unsigned int)puVar5;
      }
    }
  }
  temp_v1 = (int)puVar6 - (int)puVar4;
  temp_v3 = (param_1[-1] & 1) != 0;
  if (temp_v3) {
    puVar8 = (unsigned short *)0x0;
  }
  if (temp_v3 && temp_v1 >= 4) {
    puVar3 = puVar4 + -1;
    if ((int)(temp_v1 * 0x20000000) < 0) {
      *puVar4 = (unsigned int)puVar8;
      puVar3 = puVar4;
    }
    for (temp_v1 = temp_v1 >> 3; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
      puVar3[1] = (unsigned int)puVar8;
      puVar3 = puVar3 + 2;
      *puVar3 = (unsigned int)puVar8;
    }
  }
  *(unsigned short *)puVar7 = 0x5544;
  *(unsigned int *)(param_3 - 8) = 0;
  *(int *)(param_3 - 0xc) = (int)puVar6 + (-0x10 - (int)puVar7);
  *(unsigned int *)(param_3 - 4) = 0;
  temp_v0 = (unsigned short)(param_5 << 0xf) | (unsigned short)((((int)puVar7 - (int)puVar4) & 0x7fU) << 8);
  *(unsigned short *)(param_3 - 0xe) = temp_v0;
  *(unsigned short *)(param_3 - 0xe) = temp_v0 | ((unsigned short)param_1[4] & 0xff);
  temp_v1 = param_1[3];
  *(unsigned int *)(param_3 - 8) = temp_v1;
  if (temp_v1 != 0) {
    temp_v2 = *(unsigned int *)(temp_v1 + 0xc);
    *(unsigned int **)(temp_v1 + 0xc) = puVar7;
  }
  else {
    temp_v2 = param_1[2];
    param_1[2] = (unsigned int)puVar7;
  }
  *(unsigned int *)(param_3 - 4) = temp_v2;
  if (temp_v2 != 0) {
    *(unsigned int **)(temp_v2 + 8) = puVar7;
  }
  else {
    param_1[3] = (unsigned int)puVar7;
  }
  return param_3;
}
