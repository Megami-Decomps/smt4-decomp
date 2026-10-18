/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_AssignPCM` (_code @ 0x15f608, 0x1b8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
} param_4_stack;

extern int FUN_002bb274(void);


unsigned int nn_snd_CTR_Dspsnd_AssignPCM(int param_1,int param_2,unsigned int *param_3,unsigned int param_4)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned short temp_v2;
  unsigned short *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned short *puVar7;
  unsigned int temp_v5;
  unsigned int *puVar9;
  unsigned char temp_v6;
  unsigned short temp_v7;
  
  temp_v0 = FUN_002bb274();
  if (temp_v0 == 0) {
    return 0;
  }
  temp_v5 = *param_3;
  temp_v3 = param_3[1];
  if (temp_v5 + 0xec000000 >= 0x8000000) {
    return 0;
  }
  temp_v4 = temp_v5;
  if ((param_4 & 0xc) == 0) {
    if ((param_4 & 3) == 1) {
      temp_v4 = temp_v5 + temp_v3;
    }
    if ((param_4 & 3) == 2) {
      temp_v4 = temp_v4 + temp_v3 * 2;
    }
  }
  temp_v1 = param_4 << 0x1c;
  if ((param_4 & 0xf) >> 2 == 1) {
    if ((param_4 & 3) == 1) {
      temp_v4 = temp_v4 + temp_v3 * 2;
    }
    if ((param_4 & 3) == 2) {
      temp_v4 = temp_v4 + temp_v3 * 4;
    }
  }
  temp_v6 = (param_4 & 0xf) >> 2 == 2;
  if (temp_v6) {
    temp_v1 = param_4 & 3;
  }
  if (temp_v6 && temp_v1 == 1) {
    temp_v0 = (int)(((long long)(int)(temp_v3 + 0xd) * -0x6db6db6d + ((unsigned long long)(temp_v3 + 0xd) << 0x20))
                 >> 0x20);
    temp_v4 = temp_v4 + ((temp_v0 >> 3) - (temp_v0 >> 0x1f)) * 8;
  }
  if (temp_v4 < 0x14000001) {
    return 0;
  }
  if (temp_v4 >= 0x1c000001) {
    return 0;
  }
  puVar9 = *(unsigned int **)(param_1 + (*(unsigned short *)(param_1 + 0x131a) & 1) * 0x60 + param_2 * 4 + 0x10b0);
  *(unsigned short *)((int)puVar9 + 0xbe) = *(unsigned short *)((int)param_3 + 0x12);
  puVar9[0x2c] = (temp_v3 >> 0x10) | (temp_v3 << 0x10);
  puVar9[0x2b] = ((temp_v5 + 0xc000000) >> 0x10) | (temp_v5 << 0x10);
  temp_v7 = (unsigned short)param_4;
  *(unsigned short *)(puVar9 + 0x2d) = temp_v7;
  *(unsigned short *)(puVar9 + 0x2f) =
       ((unsigned short)puVar9[0x2f] & 0xfffd) | (((short)(char)param_3[4] & 1U) << 1);
  if ((param_4 & 0xf) >> 2 != 2) {
    *puVar9 = *puVar9 | 0x40200000;
    puVar9[0x29] = 0;
    return 1;
  }
  puVar4 = (unsigned short *)param_3[2];
  if (puVar4 != (unsigned short *)0x0) {
    puVar7 = (unsigned short *)((int)puVar9 + 0xb6);
    temp_v0 = 1;
    *(unsigned short *)((int)puVar9 + 0xb6) = *puVar4;
    do {
      temp_v0 = temp_v0 - 1;
      puVar7[1] = puVar4[1];
      puVar4 = puVar4 + 2;
      puVar7 = puVar7 + 2;
      *puVar7 = *puVar4;
    } while (temp_v0 != 0);
    if (param_3[2] == 0) {
      temp_v2 = (unsigned short)puVar9[0x2f] & 0xfffe;
      *(unsigned short *)(puVar9 + 0x2f) = temp_v2;
      *puVar9 = *puVar9 | 0x40200000;
      puVar9[0x29] = 0;
      return 1;
    }
    temp_v2 = (unsigned short)puVar9[0x2f] | 1;
  }
  else {
    temp_v2 = (unsigned short)puVar9[0x2f] & 0xfffe;
  }
  *(unsigned short *)(puVar9 + 0x2f) = temp_v2;
  *puVar9 = *puVar9 | 0x40200000;
  puVar9[0x29] = 0;
  return 1;
}
