/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00501084` (_code @ 0x501084, 0x514 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
} param_2_stack;

extern unsigned int DAT_005893b8; /* 0x5893b8 */


void FUN_00501084(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  int *piVar15;
  unsigned int temp_v12;
  unsigned int temp_v13 [21];
  
  param_2[1] = 0xb02b9;
  param_2[3] = 0x10242;
  param_2[4] = 0;
  param_2[5] = 0xf02bb;
  param_2[6] = 0;
  param_2[7] = 0xf02bc;
  temp_v12 = DAT_005893b8;
  param_2[8] = DAT_005893b8;
  param_2[10] = 0;
  temp_v2 = 0;
  temp_v5 = 0;
  puVar1 = param_2 + 0xc;
  temp_v6 = 0;
  do {
    piVar15 = (int *)(param_1 + temp_v6 * 0x70 + 0x160);
    if (*piVar15 != 0) {
      temp_v0 = 0;
      temp_v3 = 0;
      temp_v7 = 0;
      temp_v4 = 1;
      temp_v5 = temp_v5 + 1;
      temp_v13[0] = 0;
      temp_v13[1] = 0;
      do {
        switch(*(unsigned char *)((int)piVar15 + temp_v0 + 4)) {
        case 2:
        case 6:
        case 10:
        case 0xe:
          temp_v3 = (temp_v3 + 1) & 0xfffffffe;
          if (temp_v4 < 2) {
            temp_v4 = 2;
          }
          break;
        case 3:
        case 7:
        case 0xb:
        case 0xf:
          temp_v3 = (temp_v3 + 3) & 0xfffffffc;
          if (temp_v4 < 4) {
            temp_v4 = 4;
          }
        }
        temp_v8 = piVar15[temp_v0 + 4];
        if (temp_v8 == 0) break;
        temp_v3 = temp_v3 + temp_v8;
        if (piVar15[temp_v0 + 0x10] >= 0) {
          temp_v13[(int)(temp_v0 + ((unsigned int)((int)temp_v0 >> 0x1f) >> 0x1d)) >> 3] =
               temp_v13[(int)(temp_v0 + ((unsigned int)((int)temp_v0 >> 0x1f) >> 0x1d)) >> 3] |
               (temp_v2 << ((((int)temp_v0 % 8) * 4) & 0xffU));
          temp_v8 = ((int)temp_v2 % 8) * 4;
          param_2[((int)(temp_v2 + ((unsigned int)((int)temp_v2 >> 0x1f) >> 0x1d)) >> 3) + 10] =
               param_2[((int)(temp_v2 + ((unsigned int)((int)temp_v2 >> 0x1f) >> 0x1d)) >> 3) + 10] |
               ((unsigned int)*(unsigned char *)((int)piVar15 + temp_v0 + 4) << (temp_v8 & 0xff));
          temp_v9 = temp_v2 & 0xfffffff8;
          temp_v2 = temp_v2 + 1;
          temp_v11 = *(unsigned int *)((int)param_2 + temp_v9 + 0x10) & ~(0xf << (temp_v8 & 0xff));
          *(unsigned int *)((int)param_2 + temp_v9 + 0x10) = temp_v11;
          *(unsigned int *)((int)param_2 + temp_v9 + 0x10) =
               temp_v11 | (piVar15[temp_v0 + 0x10] << (temp_v8 & 0xff));
        }
        else {
          temp_v13[(int)(temp_v0 + ((unsigned int)((int)temp_v0 >> 0x1f) >> 0x1d)) >> 3] =
               temp_v13[(int)(temp_v0 + ((unsigned int)((int)temp_v0 >> 0x1f) >> 0x1d)) >> 3] |
               (((temp_v8 >> 2) + 0xb) << ((((int)temp_v0 % 8) * 4) & 0xffU));
        }
        temp_v0 = temp_v0 + 1;
        temp_v7 = temp_v7 + 1;
      } while (temp_v0 < 0xc);
      *puVar1 = *piVar15 + temp_v12 * -8;
      puVar2 = puVar1 + 2;
      puVar1[1] = temp_v13[0];
      puVar1 = puVar1 + 3;
      *puVar2 = ((((temp_v3 + temp_v4) - 1) & ~(temp_v4 - 1)) << 0x10) | (temp_v7 << 0x1c) | temp_v13[1];
    }
    temp_v6 = temp_v6 + 1;
    if (temp_v6 >= 0xc) {
      param_2[9] = (temp_v5 * 0x300000 + 0x200000) | 0x800f0200;
      puVar2 = puVar1;
      if ((temp_v5 & 1) != 0) {
        puVar2 = puVar1 + 1;
        *puVar1 = 0;
      }
      temp_v7 = 0xb;
      do {
        temp_v1 = param_1 + temp_v7 * 0x14;
        if (*(char *)(temp_v1 + 0x6a0) != '\0') {
          *puVar2 = temp_v2;
          puVar2[1] = 0x803f0232;
          temp_v12 = *(unsigned int *)(temp_v1 + 0x6ac);
          temp_v10 = 0;
          if (((temp_v12 & 0x7fffffff) != 0) &&
             (temp_v10 = ((temp_v12 & 0x7fffffff) >> 0x17) - 0x40, -1 >= temp_v10)) {
            temp_v12 = (temp_v12 >> 0x1f) << 0x17;
          }
          else {
            temp_v12 = (temp_v10 << 0x10) | ((temp_v12 >> 0x1f) << 0x17);
          }
          temp_v5 = *(unsigned int *)(temp_v1 + 0x6b0);
          temp_v10 = 0;
          if (((temp_v5 & 0x7fffffff) != 0) &&
             (temp_v10 = ((temp_v5 & 0x7fffffff) >> 0x17) - 0x40, -1 >= temp_v10)) {
            temp_v5 = (temp_v5 >> 0x1f) << 0x17;
          }
          else {
            temp_v5 = ((temp_v5 & 0x7fffff) >> 7) | (temp_v10 << 0x10) | ((temp_v5 >> 0x1f) << 0x17);
          }
          puVar2[2] = ((temp_v12 & 0xffffff) >> 0x10) | (temp_v5 << 8);
          temp_v12 = *(unsigned int *)(temp_v1 + 0x6ac);
          if (((temp_v12 & 0x7fffffff) != 0) && (-1 >= (int)(((temp_v12 & 0x7fffffff) >> 0x17) - 0x40)))
          {
            temp_v12 = 0;
          }
          else {
            temp_v12 = (temp_v12 & 0x7fffff) >> 7;
          }
          temp_v5 = *(unsigned int *)(temp_v1 + 0x6a8);
          temp_v10 = 0;
          if (((temp_v5 & 0x7fffffff) != 0) &&
             (temp_v10 = ((temp_v5 & 0x7fffffff) >> 0x17) - 0x40, -1 >= temp_v10)) {
            temp_v5 = (temp_v5 >> 0x1f) << 0x17;
          }
          else {
            temp_v5 = ((temp_v5 & 0x7fffff) >> 7) | (temp_v10 << 0x10) | ((temp_v5 >> 0x1f) << 0x17);
          }
          puVar2[3] = ((temp_v5 >> 8) & 0xffff) + temp_v12 * 0x10000;
          temp_v12 = *(unsigned int *)(temp_v1 + 0x6a4);
          temp_v10 = 0;
          if (((temp_v12 & 0x7fffffff) != 0) &&
             (temp_v10 = ((temp_v12 & 0x7fffffff) >> 0x17) - 0x40, -1 >= temp_v10)) {
            temp_v12 = (temp_v12 >> 0x1f) << 0x17;
          }
          else {
            temp_v12 = ((temp_v12 & 0x7fffff) >> 7) | (temp_v10 << 0x10) | ((temp_v12 >> 0x1f) << 0x17);
          }
          temp_v5 = *(unsigned int *)(temp_v1 + 0x6a8);
          if (((temp_v5 & 0x7fffffff) != 0) && (-1 >= (int)(((temp_v5 & 0x7fffffff) >> 0x17) - 0x40))) {
            temp_v5 = 0;
          }
          else {
            temp_v5 = (temp_v5 & 0x7fffff) >> 7;
          }
          puVar2[4] = (temp_v12 & 0xffffff) | (temp_v5 << 0x18);
          puVar2[5] = 0;
          puVar2 = puVar2 + 6;
          temp_v12 = ((int)temp_v2 % 8) * 4;
          param_2[((int)temp_v2 / 8) * 2 + 4] =
               (param_2[((int)temp_v2 / 8) * 2 + 4] & ~(0xf << (temp_v12 & 0xff))) |
               (temp_v7 << (temp_v12 & 0xff));
          temp_v12 = temp_v2 + 0x10;
          temp_v2 = temp_v2 + 1;
          param_2[0xb] = param_2[0xb] | (1 << (temp_v12 & 0xff));
        }
        temp_v7 = temp_v7 - 1;
      } while (-1 < temp_v7);
      *param_2 = (temp_v2 - 1) | 0xa0000000;
      param_2[2] = temp_v2 - 1;
      param_2[0xb] = (param_2[0xb] & 0xfffffff) | (temp_v2 * 0x10000000 + 0xf0000000);
      return;
    }
  } while( 1 );
}

} /* extern "C" */
