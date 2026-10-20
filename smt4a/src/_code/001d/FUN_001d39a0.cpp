/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d39a0` (_code @ 0x1d39a0, 0x1a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
} param_4_stack;

extern unsigned int FUN_001c6da0(unsigned int, unsigned int, unsigned int, unsigned int, int, int, unsigned int *);
extern int nn_snd_CTR_Dspsnd_IsInitialized(void);


unsigned int FUN_001d39a0(int param_1,int param_2,unsigned int *param_3,unsigned int param_4)

{
/* irregular: 3 goto(s) */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned short temp_v4;
  unsigned short *puVar6;
  int temp_v5;
  unsigned int temp_v6;
  unsigned short *puVar9;
  unsigned int temp_v7;
  unsigned int *puVar11;
  unsigned char temp_v8;
  int temp_v9;
  unsigned int *puVar14;
  unsigned short temp_v10;
  
  temp_v5 = param_1;
  temp_v9 = param_2;
  puVar14 = param_3;
  temp_v1 = nn_snd_CTR_Dspsnd_IsInitialized();
  if (temp_v1 == 0) {
    return 0;
  }
  temp_v7 = param_3[1];
  temp_v0 = *(unsigned short *)((int)param_3 + 0x12);
  temp_v2 = param_4 & 0xffff;
  temp_v3 = temp_v7;
  if ((param_4 & 0xc) == 0) {
    temp_v6 = 1;
    if ((param_4 & 3) != 1) {
      if ((param_4 & 3) != 2) goto LAB_001d39f4;
LAB_001d3a30:
      temp_v6 = param_4 & 3;
      temp_v3 = temp_v7 << 1;
    }
  }
  else {
LAB_001d39f4:
    temp_v6 = 1;
    if ((param_4 & 0xf) >> 2 == 1) {
      temp_v6 = param_4 & 3;
      if (temp_v6 == 1) goto LAB_001d3a30;
      if (temp_v6 == 2) {
        temp_v3 = temp_v7 << 2;
        goto LAB_001d3a54;
      }
    }
    temp_v8 = (param_4 & 0xf) >> 2 == 2;
    if (temp_v8) {
      temp_v2 = param_4 & 3;
    }
    if (temp_v8 && temp_v2 == 1) {
      temp_v6 = 0x92492493;
      temp_v1 = (int)(((long long)(int)(temp_v7 + 0xd) * -0x6db6db6d +
                    ((unsigned long long)(temp_v7 + 0xd) << 0x20)) >> 0x20);
      temp_v3 = ((temp_v1 >> 3) - (temp_v1 >> 0x1f)) * 8;
    }
  }
LAB_001d3a54:
  temp_v3 = FUN_001c6da0(*param_3,temp_v3,*param_3,temp_v6,temp_v5,temp_v9,puVar14);
  if (temp_v3 == 0) {
    return 0;
  }
  puVar11 = *(unsigned int **)(param_1 + (*(unsigned short *)(param_1 + 0x131a) & 1) * 0x60 + param_2 * 4 + 0x10b0);
  *(unsigned short *)((int)puVar11 + 0xbe) = temp_v0;
  puVar11[0x2b] = (temp_v3 >> 0x10) | (temp_v3 << 0x10);
  puVar11[0x2c] = (temp_v7 >> 0x10) | (temp_v7 << 0x10);
  temp_v10 = (unsigned short)param_4;
  *(unsigned short *)(puVar11 + 0x2d) = temp_v10;
  *(unsigned short *)(puVar11 + 0x2f) =
       ((unsigned short)puVar11[0x2f] & 0xfffd) | (((short)*(char *)(param_3 + 4) & 1U) << 1);
  if ((param_4 & 0xf) >> 2 != 2) {
    *puVar11 = *puVar11 | 0x40200000;
    puVar11[0x29] = 0;
    return 1;
  }
  puVar6 = (unsigned short *)param_3[2];
  if (puVar6 != (unsigned short *)0x0) {
    puVar9 = (unsigned short *)((int)puVar11 + 0xb6);
    *(unsigned short *)((int)puVar11 + 0xb6) = *puVar6;
    temp_v5 = 1;
    do {
      temp_v5 = temp_v5 - 1;
      puVar9[1] = puVar6[1];
      puVar6 = puVar6 + 2;
      puVar9 = puVar9 + 2;
      *puVar9 = *puVar6;
    } while (temp_v5 != 0);
    if (param_3[2] == 0) {
      temp_v4 = (unsigned short)puVar11[0x2f] & 0xfffe;
      *(unsigned short *)(puVar11 + 0x2f) = temp_v4;
      *puVar11 = *puVar11 | 0x40200000;
      puVar11[0x29] = 0;
      return 1;
    }
    temp_v4 = (unsigned short)puVar11[0x2f] | 1;
  }
  else {
    temp_v4 = (unsigned short)puVar11[0x2f] & 0xfffe;
  }
  *(unsigned short *)(puVar11 + 0x2f) = temp_v4;
  *puVar11 = *puVar11 | 0x40200000;
  puVar11[0x29] = 0;
  return 1;
}

} /* extern "C" */
