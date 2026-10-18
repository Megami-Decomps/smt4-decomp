/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001933b4` (_code @ 0x1933b4, 0x460 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001a057c. */
/* Supplied declaration required: FUN_001a4904. */
/* Supplied declaration required: FUN_001a8000. */


void FUN_001933b4(int *param_1,int *param_2,unsigned short *param_3,int *param_4)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned char *pbVar6;
  int *piVar7;
  unsigned int *puVar8;
  int temp_v3;
  unsigned char *pbVar10;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  
  temp_v1 = *(unsigned int *)(param_3 + 4);
  temp_v4 = (temp_v1 & 0xfffff) >> 0x10 != 0xb;
  if (!temp_v4) {
    piVar7 = (int *)*param_2;
    *piVar7 = param_4[0x35];
    piVar7[1] = 0xf00f3;
    *param_2 = (int)(piVar7 + 2);
    piVar7[2] = param_4[0x35];
    piVar7[3] = 0xf00fb;
    *param_2 = (int)(piVar7 + 4);
  }
  if ((*param_3 & 0x400) != 0) {
    puVar8 = (unsigned int *)*param_2;
    *puVar8 = *(unsigned int *)(param_3 + (temp_v1 & 0xf) * 2 + 0x12);
    puVar8[1] = 0xf00c3;
    *param_2 = (int)(puVar8 + 2);
    puVar8[2] = *(unsigned int *)((int)param_3 + ((temp_v1 & 0xf0) >> 2) + 0x24);
    puVar8[3] = 0xf00cb;
    *param_2 = (int)(puVar8 + 4);
    puVar8[4] = *(unsigned int *)((int)param_3 + ((temp_v1 & 0xf00) >> 6) + 0x24);
    puVar8[5] = 0xf00d3;
    *param_2 = (int)(puVar8 + 6);
    puVar8[6] = *(unsigned int *)((int)param_3 + ((temp_v1 & 0xf000) >> 10) + 0x24);
    puVar8[7] = 0xf00db;
    *param_2 = (int)(puVar8 + 8);
    if (temp_v4) {
      puVar8[8] = *(unsigned int *)((int)param_3 + ((temp_v1 & 0xf0000) >> 0xe) + 0x24);
      puVar8[9] = 0xf00f3;
      *param_2 = (int)(puVar8 + 10);
      puVar8[10] = *(unsigned int *)((int)param_3 + ((temp_v1 & 0xf00000) >> 0x12) + 0x24);
      puVar8[0xb] = 0xf00fb;
      *param_2 = (int)(puVar8 + 0xc);
    }
  }
  if ((*param_3 & 0x800) != 0) {
    puVar8 = (unsigned int *)*param_2;
    *puVar8 = *(unsigned int *)(param_3 + 0x2a);
    puVar8[1] = 0xf0103;
    *param_2 = (int)(puVar8 + 2);
  }
  puVar3 = param_3 + 0x2c;
  FUN_001a4904(puVar3,param_3,param_4);
  if (puVar3 != (unsigned short *)0x0) {
    puVar4 = (unsigned int *)*param_2;
    FUN_001a057c(puVar4,*(unsigned char *)(*(int *)(*(int *)(*param_1 + 8) + 0x24) + 0xce),
                 param_3 + 0x2c,8);
    *param_2 = (int)puVar4;
    if ((char)param_3[0x74] != '\0') {
      *puVar4 = *(unsigned char *)(*(int *)(*(int *)(*param_1 + 8) + 0x24) + 0xe6) | 0x80000000;
      puVar4[1] = 0x804f02c0;
      puVar4[2] = *(unsigned int *)(param_3 + 0x72);
      puVar4[3] = *(unsigned int *)(param_3 + 0x70);
      puVar4[4] = *(unsigned int *)(param_3 + 0x6e);
      puVar4[5] = *(unsigned int *)(param_3 + 0x6c);
      *param_2 = (int)(puVar4 + 6);
    }
  }
  if ((*param_3 & 0x8000) != 0) {
    puVar8 = (unsigned int *)*param_2;
    *puVar8 = *(unsigned int *)(param_3 + 0x9a);
    puVar8[1] = 0xf0081;
    *param_2 = (int)(puVar8 + 2);
    puVar8[2] = *(unsigned int *)(param_3 + 0x9c);
    puVar8[3] = 0xf0091;
    *param_2 = (int)(puVar8 + 4);
    puVar8[4] = *(unsigned int *)(param_3 + 0x9e);
    puVar8[5] = 0xf0099;
    *param_2 = (int)(puVar8 + 6);
  }
  if ((*param_3 & 0x200) != 0) {
    temp_v1 = *(unsigned int *)(param_3 + 0x20);
    temp_v2 = *(unsigned int *)(param_3 + 0x22);
    temp_v5 = (float)VectorSignedToFloat((temp_v1 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = (float)VectorSignedToFloat(temp_v1 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = (float)VectorSignedToFloat((temp_v1 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = (float)VectorSignedToFloat(temp_v2 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = (float)VectorSignedToFloat((temp_v2 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
    puVar4 = (unsigned int *)*param_2;
    temp_v1 = *(unsigned int *)(*param_1 + 0x88);
    temp_v11 = (float)VectorSignedToFloat((temp_v2 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v10 = (float)VectorSignedToFloat(temp_v2 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
    *puVar4 = *(unsigned char *)(*(int *)(*(int *)(*param_1 + 8) + 0x24) + 0xf6) | 0x80000000;
    puVar4[1] = 0x804f02c0;
    puVar4[2] = temp_v1;
    puVar4[3] = (unsigned int)(temp_v5 * 0.003921569f);
    puVar4[4] = (unsigned int)(temp_v7 * 0.003921569f);
    puVar4[5] = (unsigned int)(temp_v8 * 0.003921569f);
    *param_2 = (int)(puVar4 + 6);
    puVar4[6] = *(unsigned char *)(*(int *)(*(int *)(*param_1 + 8) + 0x24) + 0xfe) | 0x80000000;
    puVar4[7] = 0x804f02c0;
    puVar4[8] = (unsigned int)(temp_v10 * 0.003921569f);
    puVar4[9] = (unsigned int)(temp_v11 * 0.003921569f);
    puVar4[10] = (unsigned int)(temp_v6 * 0.003921569f);
    puVar4[0xb] = (unsigned int)(temp_v9 * 0.003921569f);
    *param_2 = (int)(puVar4 + 0xc);
  }
  if ((*param_3 & 1) != 0) {
    pbVar6 = (unsigned char *)(*param_4 + (unsigned int)param_3[0x10] * 0x278);
    pbVar10 = pbVar6 + 4;
    if ((*pbVar6 & 1) != 0 || (*param_3 & 0x200) != 0) {
      FUN_001a8000(param_1,param_2,param_4,param_3);
      puVar4 = (unsigned int *)*param_2;
      *puVar4 = (unsigned int)pbVar6[6] | ((unsigned int)pbVar6[5] << 10) | ((unsigned int)*pbVar10 << 0x14);
      puVar4[1] = 0xf01c0;
      *param_2 = (int)(puVar4 + 2);
    }
    if ((*(unsigned char *)(*param_4 + (unsigned int)param_3[0x10] * 0x278) & 2) != 0) {
      temp_v3 = 0;
      do {
        if (pbVar10[temp_v3 + 0x164] != 0) {
          puVar8 = (unsigned int *)*param_2;
          temp_v0 = pbVar10[temp_v3 * 0x2c + 4];
          *puVar8 = *(unsigned int *)(pbVar10 + temp_v3 * 0x2c + 0x20);
          puVar8[1] = ((unsigned int)temp_v0 * 0x10 + 0x14a) | 0x801f0000;
          puVar8[2] = *(unsigned int *)(pbVar10 + temp_v3 * 0x2c + 0x24);
          puVar8[3] = 0;
          *param_2 = (int)(puVar8 + 4);
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 8);
    }
  }
  return;
}
