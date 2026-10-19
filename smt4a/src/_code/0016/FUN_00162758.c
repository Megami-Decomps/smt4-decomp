/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00162758` (_code @ 0x162758, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */
extern int DAT_005b3bc0; /* 0x5b3bc0 */
extern unsigned int *DAT_005b3bc4; /* 0x5b3bc4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_0019af70. */
/* Supplied declaration required: FUN_0019f764. */
/* Supplied declaration required: FUN_0019f7dc. */
/* Supplied declaration required: FUN_001a64f4. */
/* Supplied declaration required: FUN_001a9084. */
extern int FUN_002e3390(int);
extern int aeabi_uidivmod(unsigned int, int);


void FUN_00162758(float *param_1,unsigned int *param_2,unsigned int param_3,int param_4)

{
/* irregular: 5 unstructured edge(s); 3 goto(s); irregular input(s): in_d15, in_d8, in_d9, in_fpscr, in_s0, in_s1, in_s3; 13 native warning(s); review required */
  unsigned short temp_v0;
  unsigned char temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned short *puVar9;
  unsigned short *puVar10;
  unsigned short *puVar11;
  romwright_code *pcVar12;
  int *piVar13;
  unsigned int temp_v7;
  int *piVar15;
  int temp_v8;
  unsigned int temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  float in_s0;
  float in_s1;
  float temp_v12;
  unsigned int in_s3;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  unsigned long long in_d8;
  unsigned long long temp_v17;
  unsigned long long in_d9;
  long long temp_v18;
  unsigned long long temp_v19;
  unsigned long long temp_v20;
  float temp_v21;
  long long temp_v22;
  unsigned long long in_d15;
  unsigned long long temp_v23;
  int iStack_94;
  romwright_code *pcStack_90;
  romwright_code *pcStack_8c;
  unsigned char temp_v24 [4];
  char cStack_84;
  unsigned char bStack_83;
  char cStack_82;
  unsigned char bStack_81;
  unsigned short uStack_80;
  unsigned short uStack_7e;
  unsigned short uStack_7c;
  unsigned short uStack_7a;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned long long uStack_64;
  unsigned long long uStack_5c;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned long long uStack_20;
  
  VectorSignedToFloat((int)(*param_1 + param_1[2] + in_s0),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)(param_1[1] + param_1[3] + in_s1),(unsigned char)(in_fpscr >> 0x16) & 3);
  uStack_28 = (unsigned int)in_d8;
  uStack_24 = (unsigned int)((unsigned long long)in_d8 >> 0x20);
  temp_v15 = 0.0f;
  uStack_20 = in_d9;
  temp_v2 = FUN_002e3390(param_4);
  uStack_64 = romwright_piece_4_4(uStack_24,uStack_28);
  temp_v13 = 1.0f;
  uStack_5c = uStack_20;
  uStack_2c = (unsigned int)in_d15;
  uStack_28 = (unsigned int)((unsigned long long)in_d15 >> 0x20);
  puVar3 = (unsigned int *)&DAT_005b3bc0;
  if (DAT_005b3bc0 != 0) {
    puVar3 = DAT_005b3bc4;
  }
  if ((DAT_005b3bc0 == 0 || puVar3 <= param_2) ||
     (temp_v8 = DAT_005b3bc0 + (int)param_2 * 0x2c, temp_v8 == 0)) {
    return;
  }
  temp_v20 = 0;
  temp_v19 = (unsigned long long)in_s3;
  uStack_70 = param_3;
  uStack_6c = param_3;
  uStack_68 = param_3;
  FUN_001a64f4(temp_v24);
  temp_v9 = (unsigned int)((unsigned long long)temp_v20 >> 0x20);
  piVar15 = *(int **)(temp_v8 + 8);
  temp_v3 = temp_v9;
  FUN_001a9084(&iStack_94,piVar15,0x30);
  FUN_0019f7dc(DAT_0059dbb4);
  iStack_94 = param_4;
  temp_v18 = (unsigned long long)temp_v9 << 0x20;
  temp_v17 = (unsigned long long)temp_v3;
  piVar13 = (int *)((int)&iStack_94 + ((int)pcStack_8c >> 1));
  pcVar12 = pcStack_90;
  if (((unsigned int)pcStack_8c & 1) != 0) {
    pcVar12 = *(romwright_code **)((unsigned char *)pcStack_90 + *piVar13);
  }
  temp_v3 = (*pcVar12)(piVar13);
  if (temp_v2 >= iStack_94 - param_4) {
    temp_v22 = (unsigned long long)(unsigned int)(int)temp_v15 << 0x20;
    temp_v23 = 0x3f000000;
    do {
      temp_v16 = (float)temp_v17;
      temp_v9 = (unsigned int)((unsigned long long)temp_v18 >> 0x20);
      if (temp_v3 != 10) {
        temp_v4 = (**(romwright_code **)(*piVar15 + 0x44))(piVar15,temp_v3);
        if (temp_v4 != 0) {
          (**(romwright_code **)(*piVar15 + 0x40))(piVar15,temp_v24,temp_v3);
          temp_v5 = (unsigned int)bStack_83;
          temp_v21 = (float)((unsigned long long)temp_v20 >> 0x20);
          temp_v9 = in_fpscr & 0xfffffff;
          temp_v7 = temp_v9 | ((unsigned int)(temp_v13 < temp_v21) << 0x1f) | ((unsigned int)(temp_v13 == temp_v21) << 0x1e);
          temp_v1 = (unsigned char)(temp_v7 >> 0x18);
          VectorUnsignedToFloat(temp_v5,(unsigned char)(temp_v7 >> 0x16) & 3);
          VectorUnsignedToFloat((unsigned int)bStack_81,(unsigned char)(temp_v7 >> 0x16) & 3);
          temp_v14 = (float)VectorSignedToFloat((int)cStack_82,(unsigned char)(temp_v7 >> 0x16) & 3);
          temp_v12 = (float)VectorSignedToFloat((int)cStack_84,(unsigned char)(temp_v7 >> 0x16) & 3);
          if (!((unsigned char)((temp_v1 >> 6) & 1) || (unsigned char)(temp_v1 >> 7) != ((temp_v13 != temp_v13) || (temp_v21 != temp_v21)))) {
            VectorUnsignedToFloat(temp_v5,(unsigned char)(temp_v7 >> 0x16) & 3);
            cStack_84 = (char)(int)(temp_v12 * temp_v13);
            cStack_82 = (char)(int)(temp_v14 * temp_v13);
          }
          else {
            temp_v7 = temp_v9 | ((unsigned int)(temp_v15 < temp_v21) << 0x1f) | ((unsigned int)(temp_v15 == temp_v21) << 0x1e)
            ;
            temp_v1 = (unsigned char)(temp_v7 >> 0x18);
            if (!(unsigned char)((temp_v1 >> 6) & 1) && (unsigned char)(temp_v1 >> 7) == ((temp_v15 != temp_v15) || (temp_v21 != temp_v21))) {
              temp_v7 = temp_v9 | ((unsigned int)(temp_v15 < temp_v14) << 0x1f) |
                       ((unsigned int)(temp_v15 == temp_v14) << 0x1e);
              temp_v1 = (unsigned char)(temp_v7 >> 0x18);
              cStack_82 = (char)((unsigned long long)temp_v22 >> 0x20);
              if (!((unsigned char)((temp_v1 >> 6) & 1) || (unsigned char)(temp_v1 >> 7) != ((temp_v15 != temp_v15) || (temp_v14 != temp_v14))))
              {
                cStack_84 = cStack_84 + (char)(int)((temp_v15 - temp_v14) * (float)temp_v23);
              }
              else {
                VectorUnsignedToFloat(temp_v5,(unsigned char)(temp_v7 >> 0x16) & 3);
                cStack_84 = (char)(int)(temp_v12 * (temp_v15 / temp_v14));
              }
            }
          }
          temp_v9 = (temp_v7 & 0xfffffff) | ((unsigned int)(temp_v13 < temp_v21) << 0x1f) |
                   ((unsigned int)(temp_v13 == temp_v21) << 0x1e);
          in_fpscr = temp_v9 | ((unsigned int)((temp_v13 != temp_v13) || (temp_v21 != temp_v21)) << 0x1c);
          temp_v1 = (unsigned char)(temp_v9 >> 0x18);
          if ((unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
            in_fpscr = temp_v7 & 0xfffffff;
          }
          temp_v19 = temp_v19 & 0xffffffff;
          temp_v4 = *(int *)(temp_v8 + 4);
          for (puVar10 = *(unsigned short **)(temp_v4 + 0x10); puVar10 != (unsigned short *)0x0;
              puVar10 = *(unsigned short **)(puVar10 + 4)) {
            temp_v11 = temp_v3 <= *puVar10;
            temp_v10 = *puVar10 == temp_v3;
            if (!temp_v11 || temp_v10) {
              temp_v11 = puVar10[1] <= temp_v3;
              temp_v10 = temp_v3 == puVar10[1];
            }
            if (!temp_v11 || temp_v10) {
              temp_v0 = puVar10[2];
              temp_v9 = 0xffff;
              if (temp_v0 == 0) {
                temp_v9 = ((temp_v3 - *puVar10) + (unsigned int)puVar10[6]) & 0xffff;
                goto LAB_00181ed4;
              }
              if (temp_v0 != 1) {
                if (temp_v0 == 2) {
                  puVar9 = puVar10 + 7;
                  puVar10 = puVar10 + 6 + ((unsigned int)puVar10[6] * 2 - 1);
                  if (puVar9 <= puVar10) {
                    do {
                      puVar11 = puVar9 + ((((int)puVar10 - (int)puVar9) >> 2) / 2) * 2;
                      temp_v7 = (unsigned int)*puVar11;
                      if (temp_v7 >= temp_v3 && temp_v7 != temp_v3) {
                        puVar10 = puVar11 + -2;
                      }
                      if (temp_v7 < temp_v3) {
                        puVar9 = puVar11 + 2;
                      }
                      if (temp_v7 == temp_v3) {
                        temp_v9 = (unsigned int)puVar11[1];
                        break;
                      }
                    } while (puVar9 <= puVar10);
                  }
                }
LAB_00181ed4:
                if (temp_v9 == 0xffff) break;
                goto LAB_00181ef0;
              }
              temp_v9 = (unsigned int)puVar10[(temp_v3 - *puVar10) + 6];
              goto LAB_00181ed4;
            }
          }
          temp_v9 = (unsigned int)*(unsigned short *)(temp_v4 + 2);
LAB_00181ef0:
          temp_v4 = aeabi_uidivmod(temp_v9,(unsigned int)*(unsigned short *)(*(int *)(temp_v4 + 8) + 0xc) *
                                        (unsigned int)*(unsigned short *)(*(int *)(temp_v4 + 8) + 0xe));
          FUN_0019f764(DAT_0059dbb4,*(unsigned int *)(*(int *)(temp_v8 + 0xc) + temp_v4 * 4),
                       *(unsigned char *)(temp_v8 + 0x24));
          VectorUnsignedToFloat((unsigned int)uStack_7c,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat((unsigned int)uStack_80,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat((unsigned int)uStack_7a,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat((unsigned int)bStack_83,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat((unsigned int)uStack_7e,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat((unsigned int)bStack_81,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)cStack_84,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_0019af70(param_3,uStack_70,uStack_6c,uStack_68);
          temp_v10 = ((unsigned int)pcStack_8c & 1) == 0;
          pcVar12 = (romwright_code *)(int)cStack_82;
          if (temp_v10) {
            pcVar12 = pcStack_90;
          }
          piVar13 = (int *)((int)&iStack_94 + ((int)pcStack_8c >> 1));
          VectorSignedToFloat((romwright_code *)(int)cStack_82,(unsigned char)(in_fpscr >> 0x16) & 3);
          if (!temp_v10) {
            pcVar12 = *(romwright_code **)((unsigned char *)pcStack_90 + *piVar13);
          }
          temp_v3 = (*pcVar12)(piVar13);
          temp_v12 = (float)VectorSignedToFloat((int)cStack_82,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v12 = temp_v12 + (float)temp_v19;
        }
        else {
          temp_v10 = ((unsigned int)pcStack_8c & 1) == 0;
          pcVar12 = (romwright_code *)(int)cStack_82;
          if (temp_v10) {
            pcVar12 = pcStack_90;
          }
          VectorSignedToFloat((romwright_code *)(int)cStack_82,(unsigned char)(in_fpscr >> 0x16) & 3);
          if (!temp_v10) {
            pcVar12 = *(romwright_code **)((unsigned char *)pcStack_90 + *(int *)((int)&iStack_94 + ((int)pcStack_8c >> 1)));
          }
          temp_v3 = (*pcVar12)();
          temp_v12 = (float)VectorSignedToFloat((int)cStack_82,(unsigned char)(in_fpscr >> 0x16) & 3);
        }
        temp_v12 = temp_v12 + temp_v16;
      }
      else {
        temp_v6 = (**(romwright_code **)(*piVar15 + 0x24))(piVar15);
        temp_v10 = ((unsigned int)pcStack_8c & 1) == 0;
        VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
        pcVar12 = pcStack_8c;
        if (temp_v10) {
          pcVar12 = pcStack_90;
        }
        temp_v18 = (unsigned long long)temp_v9 << 0x20;
        if (!temp_v10) {
          pcVar12 = *(romwright_code **)((unsigned char *)pcStack_90 + *(int *)((int)&iStack_94 + ((int)pcStack_8c >> 1)));
        }
        temp_v3 = (*pcVar12)();
        in_fpscr = (in_fpscr & 0xfffffff) |
                   ((unsigned int)(temp_v16 <= (float)((unsigned long long)temp_v18 >> 0x20)) << 0x1d);
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
          temp_v18 = (unsigned long long)(unsigned int)temp_v16 << 0x20;
        }
        temp_v12 = (float)((unsigned long long)temp_v20 >> 0x20);
      }
      temp_v17 = (unsigned long long)(unsigned int)temp_v12;
    } while (temp_v2 >= iStack_94 - param_4);
  }
  FUN_0019f7dc(DAT_0059dbb4);
  return;
}
