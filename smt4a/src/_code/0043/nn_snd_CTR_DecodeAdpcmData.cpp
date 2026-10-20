/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_DecodeAdpcmData` (_code @ 0x439ce8, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp6C; /* 0x6c: local_6c */
} param_5_stack;


void nn_snd_CTR_DecodeAdpcmData
               (unsigned char *param_1,unsigned short *param_2,int param_3,unsigned short *param_4,int param_5)

{
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned short temp_v2;
  short temp_v3;
  short temp_v4;
  unsigned char *pbVar6;
  short *psVar7;
  int temp_v5;
  int temp_v6;
  unsigned short *puVar10;
  int temp_v7;
  unsigned short temp_v8;
  unsigned short *puVar13;
  unsigned short unaff_r7;
  unsigned short temp_v9;
  unsigned short temp_v10 [26];
  unsigned char *pbStack_34;
  unsigned short *temp_v11;
  int iStack_2c;
  unsigned short *temp_v12;
  
  temp_v12 = param_4;
  iStack_2c = param_3;
  temp_v11 = param_2;
  pbStack_34 = param_1;
  temp_v2 = param_4[1];
  temp_v8 = param_4[2];
  while (0 < param_5) {
    temp_v0 = *param_1;
    unaff_r7 = (unsigned short)temp_v0;
    puVar10 = temp_v10;
    psVar7 = (short *)(param_3 + (unsigned int)(temp_v0 >> 4) * 4);
    temp_v5 = 7;
    temp_v3 = *psVar7;
    temp_v4 = psVar7[1];
    pbVar6 = param_1;
    do {
      pbVar6 = pbVar6 + 1;
      temp_v5 = temp_v5 - 1;
      temp_v1 = *pbVar6;
      *puVar10 = (unsigned short)(temp_v1 >> 4);
      puVar10[1] = temp_v1 & 0xf;
      puVar10 = puVar10 + 2;
    } while (temp_v5 != 0);
    param_1 = param_1 + 8;
    if (param_5 >= 0xe) {
      temp_v5 = param_5 - 0xe;
      param_5 = 0xe;
    }
    else {
      temp_v5 = 0;
      if (param_5 < 1) break;
    }
    temp_v6 = param_5;
    puVar10 = temp_v11;
    puVar13 = temp_v10;
    temp_v9 = temp_v8;
    do {
      temp_v8 = temp_v2;
      temp_v7 = ((int)(short)temp_v9 * (int)temp_v4 + (int)(short)temp_v8 * (int)temp_v3 +
               ((int)((unsigned int)*puVar13 << 0x1c) >> ((0x11 - (temp_v0 & 0xf)) & 0xff)) + 0x400) >> 0xb;
      if (temp_v7 < -0x8000) {
        temp_v7 = -0x8000;
      }
      else if (temp_v7 >= 0x8000) {
        temp_v7 = 0x7fff;
      }
      temp_v6 = temp_v6 - 1;
      temp_v2 = (unsigned short)temp_v7;
      *puVar10 = temp_v2;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
      temp_v9 = temp_v8;
    } while (temp_v6 != 0);
    temp_v11 = temp_v11 + param_5;
    param_5 = temp_v5;
  }
  *temp_v12 = unaff_r7;
  temp_v12[1] = temp_v2;
  temp_v12[2] = temp_v8;
  return;
}

} /* extern "C" */
