/* NON_MATCHING: romwright 0.5.0 decompilation of `nnnstdMemCpy` (_code @ 0x2acaac, 0x388 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int HintPreloadData(unsigned int *);
int SBORROW4(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: HintPreloadData (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */


unsigned long long nnnstdMemCpy(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  unsigned char *pbVar9;
  int temp_v2;
  unsigned short temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  
  if (param_3 >= 9) {
    puVar6 = param_1;
    puVar3 = param_2;
    if (((unsigned int)param_2 & 1) != 0) {
      param_3 = param_3 - 1;
      puVar3 = (unsigned int *)((int)param_2 + 1);
      puVar6 = (unsigned int *)((int)param_1 + 1);
      *(unsigned char *)param_1 = (unsigned char)*param_2;
    }
    if (((unsigned int)puVar3 & 2) != 0) {
      param_3 = param_3 - 2;
      pbVar7 = (unsigned char *)((int)puVar3 + 1);
      temp_v4 = *puVar3;
      puVar3 = (unsigned int *)((int)puVar3 + 2);
      temp_v0 = *pbVar7;
      pbVar7 = (unsigned char *)((int)puVar6 + 1);
      *(unsigned char *)puVar6 = (unsigned char)temp_v4;
      puVar6 = (unsigned int *)((int)puVar6 + 2);
      *pbVar7 = temp_v0;
    }
    temp_v4 = (unsigned int)puVar6 & 3;
    if (temp_v4 != 0) {
      puVar6 = (unsigned int *)((unsigned int)puVar6 & 0xfffffffc);
      if (temp_v4 != 2) {
        if (temp_v4 < 3) {
          temp_v4 = *puVar6 & 0xff;
          temp_v15 = SBORROW4(param_3,0x20);
          temp_v2 = param_3 - 0x20;
          temp_v14 = temp_v2 < 0;
          if ((int)param_3 >= 0x20) {
            do {
              if (temp_v14 == temp_v15) {
                temp_v5 = *puVar3;
                temp_v7 = puVar3[1];
                temp_v8 = puVar3[2];
                temp_v9 = puVar3[3];
                temp_v10 = puVar3[4];
                temp_v12 = puVar3[5];
                temp_v11 = puVar3[6];
                temp_v13 = puVar3[7];
                puVar3 = puVar3 + 8;
                temp_v6 = temp_v4 | (temp_v5 << 8);
                temp_v4 = temp_v13 >> 0x18;
                *puVar6 = temp_v6;
                puVar6[1] = (temp_v5 >> 0x18) | (temp_v7 << 8);
                puVar6[2] = (temp_v7 >> 0x18) | (temp_v8 << 8);
                puVar6[3] = (temp_v8 >> 0x18) | (temp_v9 << 8);
                puVar6[4] = (temp_v9 >> 0x18) | (temp_v10 << 8);
                puVar6[5] = (temp_v10 >> 0x18) | (temp_v12 << 8);
                puVar6[6] = (temp_v12 >> 0x18) | (temp_v11 << 8);
                puVar6[7] = (temp_v11 >> 0x18) | (temp_v13 << 8);
                puVar6 = puVar6 + 8;
                temp_v15 = SBORROW4(temp_v2,0x20);
                temp_v2 = temp_v2 - 0x20;
                temp_v14 = temp_v2 < 0;
              }
            } while (temp_v14 == temp_v15);
          }
          temp_v15 = SBORROW4(temp_v2 + 0x20,4);
          temp_v2 = temp_v2 + 0x1c;
          temp_v14 = temp_v2 < 0;
          do {
            if (temp_v14 == temp_v15) {
              temp_v5 = *puVar3;
              *puVar6 = temp_v4 | (temp_v5 << 8);
              temp_v4 = temp_v5 >> 0x18;
              temp_v15 = SBORROW4(temp_v2,4);
              temp_v2 = temp_v2 - 4;
              temp_v14 = temp_v2 < 0;
              puVar6 = puVar6 + 1;
              puVar3 = puVar3 + 1;
            }
          } while (temp_v14 == temp_v15);
          pbVar7 = (unsigned char *)((int)puVar3 - 1);
          temp_v4 = temp_v2 + 5;
        }
        else {
          temp_v4 = *puVar6 & 0xffffff;
          temp_v15 = SBORROW4(param_3,0x20);
          temp_v2 = param_3 - 0x20;
          temp_v14 = temp_v2 < 0;
          if ((int)param_3 >= 0x20) {
            do {
              if (temp_v14 == temp_v15) {
                temp_v5 = *puVar3;
                temp_v7 = puVar3[1];
                temp_v8 = puVar3[2];
                temp_v9 = puVar3[3];
                temp_v10 = puVar3[4];
                temp_v12 = puVar3[5];
                temp_v11 = puVar3[6];
                temp_v13 = puVar3[7];
                puVar3 = puVar3 + 8;
                temp_v6 = temp_v4 | (temp_v5 << 0x18);
                temp_v4 = temp_v13 >> 8;
                *puVar6 = temp_v6;
                puVar6[1] = (temp_v5 >> 8) | (temp_v7 << 0x18);
                puVar6[2] = (temp_v7 >> 8) | (temp_v8 << 0x18);
                puVar6[3] = (temp_v8 >> 8) | (temp_v9 << 0x18);
                puVar6[4] = (temp_v9 >> 8) | (temp_v10 << 0x18);
                puVar6[5] = (temp_v10 >> 8) | (temp_v12 << 0x18);
                puVar6[6] = (temp_v12 >> 8) | (temp_v11 << 0x18);
                puVar6[7] = (temp_v11 >> 8) | (temp_v13 << 0x18);
                puVar6 = puVar6 + 8;
                temp_v15 = SBORROW4(temp_v2,0x20);
                temp_v2 = temp_v2 - 0x20;
                temp_v14 = temp_v2 < 0;
              }
            } while (temp_v14 == temp_v15);
          }
          temp_v15 = SBORROW4(temp_v2 + 0x20,4);
          temp_v2 = temp_v2 + 0x1c;
          temp_v14 = temp_v2 < 0;
          do {
            if (temp_v14 == temp_v15) {
              temp_v5 = *puVar3;
              *puVar6 = temp_v4 | (temp_v5 << 0x18);
              temp_v4 = temp_v5 >> 8;
              temp_v15 = SBORROW4(temp_v2,4);
              temp_v2 = temp_v2 - 4;
              temp_v14 = temp_v2 < 0;
              puVar6 = puVar6 + 1;
              puVar3 = puVar3 + 1;
            }
          } while (temp_v14 == temp_v15);
          pbVar7 = (unsigned char *)((int)puVar3 - 3);
          temp_v4 = temp_v2 + 7;
        }
      }
      else {
        temp_v4 = *puVar6 & 0xffff;
        temp_v15 = SBORROW4(param_3,0x20);
        temp_v2 = param_3 - 0x20;
        temp_v14 = temp_v2 < 0;
        if ((int)param_3 >= 0x20) {
          do {
            if (temp_v14 == temp_v15) {
              temp_v5 = *puVar3;
              temp_v7 = puVar3[1];
              temp_v8 = puVar3[2];
              temp_v9 = puVar3[3];
              temp_v10 = puVar3[4];
              temp_v12 = puVar3[5];
              temp_v11 = puVar3[6];
              temp_v13 = puVar3[7];
              puVar3 = puVar3 + 8;
              temp_v6 = temp_v4 | (temp_v5 << 0x10);
              temp_v4 = temp_v13 >> 0x10;
              *puVar6 = temp_v6;
              puVar6[1] = (temp_v5 >> 0x10) | (temp_v7 << 0x10);
              puVar6[2] = (temp_v7 >> 0x10) | (temp_v8 << 0x10);
              puVar6[3] = (temp_v8 >> 0x10) | (temp_v9 << 0x10);
              puVar6[4] = (temp_v9 >> 0x10) | (temp_v10 << 0x10);
              puVar6[5] = (temp_v10 >> 0x10) | (temp_v12 << 0x10);
              puVar6[6] = (temp_v12 >> 0x10) | (temp_v11 << 0x10);
              puVar6[7] = (temp_v11 >> 0x10) | (temp_v13 << 0x10);
              puVar6 = puVar6 + 8;
              temp_v15 = SBORROW4(temp_v2,0x20);
              temp_v2 = temp_v2 - 0x20;
              temp_v14 = temp_v2 < 0;
            }
          } while (temp_v14 == temp_v15);
        }
        temp_v15 = SBORROW4(temp_v2 + 0x20,4);
        temp_v2 = temp_v2 + 0x1c;
        temp_v14 = temp_v2 < 0;
        do {
          if (temp_v14 == temp_v15) {
            temp_v5 = *puVar3;
            *puVar6 = temp_v4 | (temp_v5 << 0x10);
            temp_v4 = temp_v5 >> 0x10;
            temp_v15 = SBORROW4(temp_v2,4);
            temp_v2 = temp_v2 - 4;
            temp_v14 = temp_v2 < 0;
            puVar6 = puVar6 + 1;
            puVar3 = puVar3 + 1;
          }
        } while (temp_v14 == temp_v15);
        pbVar7 = (unsigned char *)((int)puVar3 - 2);
        temp_v4 = temp_v2 + 6;
      }
      if ((temp_v4 & 4) != 0) {
        pbVar8 = pbVar7 + 2;
        temp_v0 = pbVar7[1];
        *(unsigned char *)puVar6 = *pbVar7;
        *(unsigned char *)((int)puVar6 + 1) = temp_v0;
        pbVar9 = pbVar7 + 3;
        pbVar7 = pbVar7 + 4;
        temp_v0 = *pbVar9;
        pbVar9 = (unsigned char *)((int)puVar6 + 3);
        *(unsigned char *)((int)puVar6 + 2) = *pbVar8;
        puVar6 = puVar6 + 1;
        *pbVar9 = temp_v0;
      }
      if ((temp_v4 & 2) != 0) {
        pbVar9 = pbVar7 + 1;
        temp_v0 = *pbVar7;
        pbVar7 = pbVar7 + 2;
        temp_v1 = *pbVar9;
        pbVar9 = (unsigned char *)((int)puVar6 + 1);
        *(unsigned char *)puVar6 = temp_v0;
        puVar6 = (unsigned int *)((int)puVar6 + 2);
        *pbVar9 = temp_v1;
      }
      puVar3 = puVar6;
      pbVar9 = pbVar7;
      if ((temp_v4 & 1) != 0) {
        pbVar9 = pbVar7 + 1;
        puVar3 = (unsigned int *)((int)puVar6 + 1);
        *(unsigned char *)puVar6 = *pbVar7;
      }
      return romwright_piece_4_4(pbVar9,puVar3);
    }
    while (temp_v4 = param_3 - 0x20, param_3 >= 0x20) {
      temp_v5 = puVar3[1];
      temp_v6 = puVar3[2];
      temp_v7 = puVar3[3];
      temp_v8 = puVar3[4];
      temp_v9 = puVar3[5];
      temp_v10 = puVar3[6];
      temp_v12 = puVar3[7];
      HintPreloadData(puVar3 + 0x18);
      *puVar6 = *puVar3;
      puVar6[1] = temp_v5;
      puVar6[2] = temp_v6;
      puVar6[3] = temp_v7;
      puVar6[4] = temp_v8;
      puVar6[5] = temp_v9;
      puVar6[6] = temp_v10;
      puVar6[7] = temp_v12;
      puVar6 = puVar6 + 8;
      puVar3 = puVar3 + 8;
      param_3 = temp_v4;
    }
    temp_v5 = 0;
    if ((unsigned char)((unsigned char)(temp_v4 >> 4) & 1)) {
      temp_v5 = *puVar3;
      temp_v6 = puVar3[1];
      temp_v7 = puVar3[2];
      temp_v8 = puVar3[3];
      puVar3 = puVar3 + 4;
      *puVar6 = temp_v5;
      puVar6[1] = temp_v6;
      puVar6[2] = temp_v7;
      puVar6[3] = temp_v8;
      puVar6 = puVar6 + 4;
    }
    if ((int)(param_3 << 0x1c) < 0) {
      temp_v5 = *puVar3;
      temp_v6 = puVar3[1];
      puVar3 = puVar3 + 2;
      *puVar6 = temp_v5;
      puVar6[1] = temp_v6;
      puVar6 = puVar6 + 2;
    }
    puVar4 = puVar6;
    puVar5 = puVar3;
    if ((unsigned char)((unsigned char)(temp_v4 >> 2) & 1)) {
      puVar5 = puVar3 + 1;
      temp_v5 = *puVar3;
      puVar4 = puVar6 + 1;
      *puVar6 = temp_v5;
    }
    temp_v3 = (unsigned short)temp_v5;
    if ((temp_v4 & 3) != 0) {
      temp_v15 = (unsigned char)((unsigned char)(temp_v4 >> 1) & 1);
      param_3 = param_3 << 0x1f;
      temp_v14 = (int)param_3 < 0;
      puVar3 = puVar5;
      if (temp_v15) {
        puVar3 = (unsigned int *)((int)puVar5 + 2);
        temp_v3 = (unsigned short)*puVar5;
      }
      puVar6 = puVar3;
      if (temp_v14) {
        puVar6 = (unsigned int *)((int)puVar3 + 1);
        param_3 = (unsigned int)(unsigned char)*puVar3;
      }
      puVar3 = puVar4;
      if (temp_v15) {
        puVar3 = (unsigned int *)((int)puVar4 + 2);
        *(unsigned short *)puVar4 = temp_v3;
      }
      puVar5 = puVar3;
      if (temp_v14) {
        puVar5 = (unsigned int *)((int)puVar3 + 1);
        *(unsigned char *)puVar3 = (unsigned char)param_3;
      }
      return romwright_piece_4_4(puVar6,puVar5);
    }
    return romwright_piece_4_4(puVar5,puVar4);
  }
  if (param_3 == 8) {
    temp_v4 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = temp_v4;
    return romwright_piece_4_4(param_2 + 2,param_1 + 2);
  }
  if (param_3 >= 5) {
    if (param_3 == 6) {
      temp_v4 = param_2[1];
      *param_1 = *param_2;
      *(short *)(param_1 + 1) = (short)temp_v4;
      return romwright_piece_4_4((unsigned char *)((int)param_2 + 6),(unsigned char *)((int)param_1 + 6));
    }
    if (param_3 < 6) {
      temp_v4 = param_2[1];
      *param_1 = *param_2;
      *(unsigned char *)(param_1 + 1) = (unsigned char)temp_v4;
      return romwright_piece_4_4((unsigned char *)((int)param_2 + 5),(unsigned char *)((int)param_1 + 5));
    }
    temp_v4 = param_2[1];
    *param_1 = *param_2;
    temp_v0 = *(unsigned char *)((int)param_2 + 6);
    *(short *)(param_1 + 1) = (short)temp_v4;
    *(unsigned char *)((int)param_1 + 6) = temp_v0;
    return romwright_piece_4_4((unsigned char *)((int)param_2 + 7),(unsigned char *)((int)param_1 + 7));
  }
  if (param_3 == 4) {
    *param_1 = *param_2;
    return romwright_piece_4_4(param_2 + 1,param_1 + 1);
  }
  if (param_3 < 2) {
    puVar3 = param_1;
    puVar6 = param_2;
    if (param_3 != 0) {
      puVar6 = (unsigned int *)((int)param_2 + 1);
      puVar3 = (unsigned int *)((int)param_1 + 1);
      *(unsigned char *)param_1 = (unsigned char)*param_2;
    }
    return romwright_piece_4_4(puVar6,puVar3);
  }
  if (param_3 == 2) {
    *(short *)param_1 = (short)*param_2;
    return romwright_piece_4_4((unsigned char *)((int)param_2 + 2),(unsigned char *)((int)param_1 + 2));
  }
  temp_v0 = *(unsigned char *)((int)param_2 + 2);
  *(short *)param_1 = (short)*param_2;
  *(unsigned char *)((int)param_1 + 2) = temp_v0;
  return romwright_piece_4_4((unsigned char *)((int)param_2 + 3),(unsigned char *)((int)param_1 + 3));
}

} /* extern "C" */
