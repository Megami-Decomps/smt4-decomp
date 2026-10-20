/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d3798` (_code @ 0x1d3798, 0x15c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d1438(unsigned int *);

extern unsigned int FUN_001c6da0(unsigned int, unsigned int);
extern int FUN_001c6e20(void);
/* Supplied declaration required: FUN_001d1438. */


unsigned int FUN_001d3798(int param_1,int param_2,unsigned int *param_3,unsigned int param_4)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int *puVar8;
  unsigned char temp_v7;
  
  temp_v1 = FUN_001c6e20();
  if (temp_v1 == 0) {
    return 0;
  }
  temp_v6 = param_3[1];
  temp_v0 = *(unsigned short *)((int)param_3 + 0x12);
  puVar8 = *(unsigned int **)(param_1 + (*(unsigned short *)(param_1 + 0x131a) & 1) * 0x60 + param_2 * 4 + 0x10b0);
  temp_v4 = puVar8[0x2d];
  temp_v5 = temp_v4 & 0xffff;
  temp_v2 = temp_v6;
  if ((temp_v4 & 0xc) == 0) {
    if ((temp_v4 & 3) != 1) {
      if ((temp_v4 & 3) != 2) goto LAB_001d3810;
      temp_v2 = temp_v6 << 1;
    }
  }
  else {
LAB_001d3810:
    if ((temp_v4 & 0xf) >> 2 == 1) {
      if ((temp_v4 & 3) != 1) {
        if ((temp_v4 & 3) == 2) {
          temp_v2 = temp_v6 << 2;
        }
        else {
          temp_v7 = (temp_v4 & 0xf) >> 2 == 2;
          if (temp_v7) {
            temp_v5 = temp_v4 & 3;
          }
          if (temp_v7 && temp_v5 == 1) {
            temp_v1 = (int)(((long long)(int)(temp_v6 + 0xd) * -0x6db6db6d +
                          ((unsigned long long)(temp_v6 + 0xd) << 0x20)) >> 0x20);
            temp_v2 = ((temp_v1 >> 3) - (temp_v1 >> 0x1f)) * 8;
          }
        }
      }
      else {
        temp_v2 = temp_v6 << 1;
      }
    }
    else {
      temp_v7 = (temp_v4 & 0xf) >> 2 == 2;
      if (temp_v7) {
        temp_v5 = temp_v4 & 3;
      }
      if (temp_v7 && temp_v5 == 1) {
        temp_v1 = (int)(((long long)(int)(temp_v6 + 0xd) * -0x6db6db6d +
                      ((unsigned long long)(temp_v6 + 0xd) << 0x20)) >> 0x20);
        temp_v2 = ((temp_v1 >> 3) - (temp_v1 >> 0x1f)) * 8;
      }
    }
  }
  temp_v2 = FUN_001c6da0(*param_3,temp_v2);
  temp_v3 = 0;
  if (temp_v2 != 0) {
    temp_v1 = param_4 * 0x14;
    *(unsigned short *)(puVar8 + param_4 * 5 + 0x17) = temp_v0;
    puVar8[param_4 * 5 + 0x13] = (temp_v2 >> 0x10) | (temp_v2 << 0x10);
    puVar8[param_4 * 5 + 0x14] = (temp_v6 >> 0x10) | (temp_v6 << 0x10);
    if (param_3[2] != 0) {
      FUN_001d1438(puVar8 + param_4 * 5 + 0x15);
      *(unsigned char *)((int)puVar8 + temp_v1 + 0x5a) = 1;
    }
    else {
      *(unsigned short *)((int)puVar8 + temp_v1 + 0x5a) = *(unsigned short *)((int)puVar8 + temp_v1 + 0x5a) & 0xff00;
    }
    *(unsigned short *)((int)puVar8 + 0x4a) =
         *(unsigned short *)((int)puVar8 + 0x4a) | (unsigned short)(1 << (param_4 & 0xff));
    *(unsigned char *)((int)puVar8 + temp_v1 + 0x5b) = *(unsigned char *)(param_3 + 4);
    *puVar8 = *puVar8 | 0x80000;
    temp_v3 = 1;
  }
  return temp_v3;
}

} /* extern "C" */
