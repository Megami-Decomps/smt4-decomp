/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00133568` (_code @ 0x133568, 0x3a24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 31 slot(s), 124 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp770; /* 0x770: local_770 */
    unsigned int sp774; /* 0x774: local_774 */
    unsigned int sp778; /* 0x778: local_778 */
    unsigned int sp77C; /* 0x77c: local_77c */
    unsigned int sp780; /* 0x780: local_780 */
    unsigned int sp784; /* 0x784: local_784 */
    unsigned int sp788; /* 0x788: local_788 */
    unsigned int sp790; /* 0x790: local_790 */
    unsigned int sp7D4; /* 0x7d4: local_7d4 */
    unsigned int sp834; /* 0x834: local_834 */
    unsigned int sp838; /* 0x838: local_838 */
    unsigned int sp83C; /* 0x83c: local_83c */
    unsigned int sp840; /* 0x840: local_840 */
    unsigned int sp844; /* 0x844: local_844 */
    unsigned int sp848; /* 0x848: local_848 */
    unsigned int sp84C; /* 0x84c: local_84c */
    unsigned int sp850; /* 0x850: local_850 */
    unsigned int sp854; /* 0x854: local_854 */
    unsigned int sp858; /* 0x858: local_858 */
    unsigned int sp85C; /* 0x85c: local_85c */
    unsigned int sp860; /* 0x860: local_860 */
    unsigned int sp864; /* 0x864: local_864 */
    unsigned int sp868; /* 0x868: local_868 */
    unsigned int sp86C; /* 0x86c: local_86c */
    unsigned int sp870; /* 0x870: local_870 */
    unsigned int sp874; /* 0x874: local_874 */
    unsigned int sp880; /* 0x880: local_880 */
} param_2_stack;

extern romwright_code *DAT_0044e330; /* 0x44e330 */
extern unsigned int *DAT_004652a0; /* 0x4652a0 */
extern unsigned int *DAT_004652a4; /* 0x4652a4 */
extern unsigned int *DAT_004652b4; /* 0x4652b4 */
extern unsigned int DAT_004652b8; /* 0x4652b8 */
extern int DAT_004652bc; /* 0x4652bc */
extern int DAT_0046531c; /* 0x46531c */
extern int DAT_00465334; /* 0x465334 */
extern int DAT_0046534c; /* 0x46534c */
extern unsigned int *DAT_004655c0; /* 0x4655c0 */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002aa908. */
/* Supplied declaration required: FUN_002aa938. */
/* Supplied declaration required: FUN_002aaa1c. */
/* Supplied declaration required: FUN_002aabb0. */


void FUN_00133568(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 9 goto(s); irregular input(s): in_s0, in_s2; 12 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  char temp_v3;
  char temp_v4;
  unsigned int temp_v5;
  unsigned int *temp_v6;
  unsigned int *puVar8;
  unsigned int *temp_v7;
  unsigned int *temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int *temp_v11;
  unsigned int *temp_v12;
  int temp_v13;
  int temp_v14;
  unsigned int temp_v15;
  unsigned int *puVar14;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int *puVar18;
  unsigned int *puVar19;
  unsigned int temp_v19;
  unsigned int temp_v20;
  int temp_v21;
  unsigned int *puVar23;
  unsigned char temp_v22;
  unsigned char temp_v23;
  unsigned char temp_v24;
  float in_s0;
  unsigned int temp_v25;
  float temp_v26;
  float temp_v27;
  float in_s2;
  float temp_v28;
  float temp_v29;
  unsigned long long temp_v30;
  unsigned long long temp_v31;
  unsigned long long temp_v32;
  unsigned long long temp_v33;
  float temp_v34;
  unsigned long long temp_v35;
  unsigned int uStack_878;
  unsigned int *temp_v36;
  unsigned int temp_v37 [3];
  unsigned int *temp_v38;
  unsigned int temp_v39;
  unsigned int temp_v40;
  unsigned int temp_v41 [33];
  unsigned int *temp_v42;
  unsigned int temp_v43 [16];
  unsigned int temp_v44;
  int temp_v45;
  int temp_v46;
  int *temp_v47;
  unsigned int *temp_v48;
  unsigned int *temp_v49;
  unsigned int *temp_v50;
  unsigned int *temp_v51;
  unsigned char temp_v52 [1040];
  int temp_v53;
  int temp_v54 [13];
  unsigned int *temp_v55;
  unsigned int *temp_v56;
  
  puVar1 = DAT_004655c0;
  temp_v56 = param_2;
  temp_v55 = param_1;
  temp_v53 = 0;
  if ((((unsigned int)param_2 & 0x1000) != 0) && ((*param_1 & 0x200) != 0)) {
    if ((char)DAT_004655c0[0x192] != '\0') {
      temp_v0 = DAT_004655c0[0x179];
      temp_v18 = DAT_004655c0[0x17a];
      temp_v17 = DAT_004655c0[0x1a6];
      temp_v5 = DAT_004655c0[0x17b] + (temp_v0 - 1);
      temp_v14 = DAT_004655c0[0x17c] + (temp_v18 - 1);
      if ((int)temp_v0 >= (int)temp_v17) {
        temp_v0 = temp_v17 - 1;
      }
      else if ((int)temp_v0 < 0) {
        temp_v0 = 0;
      }
      temp_v20 = DAT_004655c0[0x1a7];
      if ((int)temp_v18 >= (int)temp_v20) {
        temp_v18 = temp_v20 - 1;
      }
      else if ((int)temp_v18 < 0) {
        temp_v18 = 0;
      }
      if ((int)temp_v17 < (int)temp_v5) {
        temp_v5 = temp_v17 - 1;
      }
      else if ((int)temp_v5 < 0) {
        temp_v5 = 0;
      }
      if ((int)temp_v20 < temp_v14) {
        temp_v14 = temp_v20 - 1;
      }
      else if (temp_v14 < 0) {
        temp_v14 = 0;
      }
      temp_v17 = 3;
    }
    else {
      temp_v0 = 0;
      temp_v5 = DAT_004655c0[0x1a6] - 1;
      temp_v14 = DAT_004655c0[0x1a7] - 1;
      temp_v17 = temp_v0;
      temp_v18 = temp_v0;
    }
    if (DAT_004652a0 < DAT_004652a4) {
      *DAT_004652a0 = temp_v17;
      DAT_004652a0[1] = 0xf0065;
      DAT_004652a0 = DAT_004652a0 + 2;
    }
    if (DAT_004652a0 < DAT_004652a4) {
      *DAT_004652a0 = temp_v0 | (temp_v18 << 0x10);
      DAT_004652a0[1] = 0xf0066;
      DAT_004652a0 = DAT_004652a0 + 2;
    }
    if (DAT_004652a0 < DAT_004652a4) {
      *DAT_004652a0 = temp_v5 | (temp_v14 << 0x10);
      DAT_004652a0[1] = 0xf0067;
      DAT_004652a0 = DAT_004652a0 + 2;
    }
  }
  temp_v17 = *DAT_004652b4;
  if (temp_v17 == 0) {
    return;
  }
  if ((((unsigned int)param_2 & 4) != 0) &&
     ((temp_v18 = (unsigned int)(*(char *)(temp_v17 + 0x424) != '\0'), temp_v18 != DAT_004652b8 ||
      ((puVar1[1] & 4) != 0)))) {
    FUN_002aabb0(0x251,10);
    FUN_002aabb0(0x200,0x1e);
    if (DAT_004652a0 < DAT_004652a4) {
      if (temp_v18 == 0) {
        temp_v0 = 0;
      }
      else {
        temp_v0 = 2;
      }
      DAT_004652a0[1] = 0x10229;
      *DAT_004652a0 = temp_v0;
      DAT_004652a0 = DAT_004652a0 + 2;
    }
    FUN_002aabb0(0x200,0x1e);
    param_2 = DAT_004652a0;
    DAT_004652b8 = temp_v18;
    if (temp_v18 != 0) {
      if (DAT_004652a0 < DAT_004652a4) {
        DAT_004652a0[1] = 0x10244;
        *DAT_004652a0 = 1;
        DAT_004652a0 = DAT_004652a0 + 2;
      }
    }
    else if (DAT_004652a0 < DAT_004652a4) {
      DAT_004652a0[1] = 0x10244;
      *DAT_004652a0 = 0;
      DAT_004652a0 = DAT_004652a0 + 2;
    }
  }
  if ((((unsigned int)temp_v56 & 1) != 0) && ((*temp_v55 & 0x100000) != 0)) {
    if (*(char *)(temp_v17 + 0x424) != '\0') {
      if (DAT_004652a0 < DAT_004652a4) {
        DAT_004652a0[1] = 0xf029b;
        *DAT_004652a0 = 0;
        DAT_004652a0 = DAT_004652a0 + 2;
      }
      FUN_002aaa1c(0x29c,(*(unsigned int **)(temp_v17 + 0x414))[1],**(unsigned int **)(temp_v17 + 0x414));
      if (DAT_004652a0 < DAT_004652a4) {
        *DAT_004652a0 = 1;
        DAT_004652a0[1] = 0xf028f;
        DAT_004652a0 = DAT_004652a0 + 2;
      }
      if (DAT_004652a0 < DAT_004652a4) {
        *DAT_004652a0 = 0;
        DAT_004652a0[1] = 0xf02a5;
        DAT_004652a0 = DAT_004652a0 + 2;
      }
      FUN_002aaa1c(0x2a6,*(unsigned int *)(*(int *)(temp_v17 + 0x414) + 0xc),
                   *(unsigned int *)(*(int *)(temp_v17 + 0x414) + 8));
    }
    else if (*(unsigned int *)(*(int *)(temp_v17 + 0x414) + 4) >= 0x201) {
      if (DAT_004652a0 < DAT_004652a4) {
        DAT_004652a0[1] = 0xf029b;
        *DAT_004652a0 = 0x200;
        DAT_004652a0 = DAT_004652a0 + 2;
      }
      FUN_002aaa1c(0x29c,(*(int **)(temp_v17 + 0x414))[1] - 0x200,**(int **)(temp_v17 + 0x414) + 0x800);
      if (DAT_004652a0 < DAT_004652a4) {
        *DAT_004652a0 = 1;
        DAT_004652a0[1] = 0xf028f;
        DAT_004652a0 = DAT_004652a0 + 2;
      }
    }
    if (DAT_004652a0 < DAT_004652a4) {
      DAT_004652a0[1] = 0xf02cb;
      *DAT_004652a0 = 0;
      DAT_004652a0 = DAT_004652a0 + 2;
    }
    temp_v18 = (*(unsigned int **)(temp_v17 + 0x414))[1];
    if (temp_v18 >= 0x201) {
      temp_v18 = 0x200;
    }
    FUN_002aaa1c(0x2cc,temp_v18,**(unsigned int **)(temp_v17 + 0x414));
    if (DAT_004652a0 < DAT_004652a4) {
      *DAT_004652a0 = 1;
      DAT_004652a0[1] = 0xf02bf;
      DAT_004652a0 = DAT_004652a0 + 2;
    }
    if (DAT_004652a0 < DAT_004652a4) {
      *DAT_004652a0 = 0;
      DAT_004652a0[1] = 0xf02d5;
      DAT_004652a0 = DAT_004652a0 + 2;
    }
    FUN_002aaa1c(0x2d6,*(unsigned int *)(*(int *)(temp_v17 + 0x414) + 0xc),
                 *(unsigned int *)(*(int *)(temp_v17 + 0x414) + 8));
    param_2 = temp_v6;
  }
  puVar8 = DAT_004652b4;
  if (((unsigned int)temp_v56 & 4) != 0) {
    if ((*(char *)(temp_v17 + 0x424) != '\0') && ((*temp_v55 & 0x800000) != 0)) {
      temp_v18 = 1;
      do {
        temp_v0 = temp_v18 + 1;
        puVar8[temp_v18 + 0x403] = ~*(unsigned int *)(temp_v17 + temp_v18 * 4 + 0x4e4);
        temp_v18 = temp_v0;
        param_2 = puVar8;
      } while (temp_v0 < 9);
    }
    puVar8 = DAT_004652b4;
    if ((*temp_v55 & 0x1000000) != 0) {
      temp_v18 = 9;
      do {
        param_2 = puVar8 + temp_v18 + 0x400;
        temp_v0 = temp_v18 + 1;
        puVar8[temp_v18 + 0x403] = ~*(unsigned int *)(temp_v17 + temp_v18 * 4 + 0x4e4);
        temp_v18 = temp_v0;
      } while (temp_v0 < 0x11);
    }
  }
  if ((((unsigned int)temp_v56 & 8) != 0) && ((*temp_v55 & 0x600000) != 0)) {
    param_2 = (unsigned int *)(unsigned int)*(unsigned char *)(temp_v17 + 0x424);
    if ((unsigned int *)(unsigned int)*(unsigned char *)(temp_v17 + 0x424) != (unsigned int *)0x0 && (*temp_v55 & 0x400000) != 0) {
      temp_v14 = *(int *)(temp_v17 + 0x41c);
      temp_v18 = 0;
      puVar8 = *(unsigned int **)(*(int *)(temp_v17 + 0x414) + 0x10);
      param_2 = puVar8;
      if (puVar8[temp_v14 * 0x3a + 0xd] != 0) {
        do {
          FUN_002aa938(0x290,4,puVar8[temp_v14 * 0x3a + 0xc] + temp_v18 * 0x10);
          temp_v18 = temp_v18 + 1;
          param_2 = temp_v7;
        } while (temp_v18 < puVar8[temp_v14 * 0x3a + 0xd]);
      }
    }
    if ((*temp_v55 & 0x200000) != 0) {
      temp_v14 = *(int *)(temp_v17 + 0x418);
      temp_v18 = 0;
      puVar8 = *(unsigned int **)(*(int *)(temp_v17 + 0x414) + 0x10);
      param_2 = puVar8;
      if (puVar8[temp_v14 * 0x3a + 0xd] != 0) {
        do {
          FUN_002aa938(0x2c0,4,puVar8[temp_v14 * 0x3a + 0xc] + temp_v18 * 0x10);
          temp_v18 = temp_v18 + 1;
          param_2 = temp_v8;
        } while (temp_v18 < puVar8[temp_v14 * 0x3a + 0xd]);
      }
    }
  }
  if (((unsigned int)temp_v56 & 0x200) != 0) {
    param_2 = (unsigned int *)0x8042;
    if ((*temp_v55 & 0x8042) != 0) {
      temp_v0 = DAT_004652b4[1];
      temp_v39 = (unsigned int)(temp_v0 == temp_v17);
      DAT_004652b4[1] = temp_v17;
      *(unsigned char *)(puVar1 + 0x207) = 1;
      temp_v5 = 0;
      temp_v14 = 0;
      temp_v18 = 0;
      temp_v20 = 0xf;
      temp_v41[1] = 0;
      puVar8 = temp_v41;
      do {
        if (*(int *)(temp_v17 + temp_v20 * 0xc + 0x358) != -1) {
          if (*(char *)((int)puVar1 + temp_v20 * 0x18 + 0x46d) != '\0') {
            if (puVar1[temp_v20 * 6 + 0x11a] == 0) {
              *(unsigned char *)(puVar1 + 0x207) = 0;
            }
            else if (temp_v18 < puVar1[temp_v20 + 0x1a9]) {
              temp_v18 = puVar1[temp_v20 + 0x1a9];
            }
            puVar18 = temp_v41 + temp_v5 * 2;
            *puVar18 = temp_v20;
            if (temp_v5 != 0) {
              if ((int)puVar1[*puVar8 + 0x1a9] >= (int)puVar1[temp_v20 + 0x1a9]) {
                temp_v41[temp_v5 * 2 + 1] = (unsigned int)puVar8;
                puVar8 = puVar18;
              }
              else {
                puVar19 = (unsigned int *)puVar8[1];
                puVar14 = puVar8;
                while (puVar23 = puVar19, puVar23 != (unsigned int *)0x0) {
                  if ((int)puVar1[temp_v20 + 0x1a9] <= (int)puVar1[*puVar23 + 0x1a9]) {
                    puVar14[1] = (unsigned int)puVar18;
                    temp_v41[temp_v5 * 2 + 1] = (unsigned int)puVar23;
                    if (puVar23 != (unsigned int *)0x0) goto LAB_00133c68;
                    break;
                  }
                  puVar14 = puVar23;
                  puVar19 = (unsigned int *)puVar23[1];
                }
                puVar14[1] = (unsigned int)puVar18;
                temp_v41[temp_v5 * 2 + 1] = 0;
              }
            }
LAB_00133c68:
            temp_v5 = temp_v5 + 1;
          }
          else {
            temp_v43[temp_v14] = temp_v20;
            temp_v14 = temp_v14 + 1;
          }
        }
        temp_v20 = temp_v20 - 1;
      } while (-1 < (int)temp_v20);
      if (((char)puVar1[0x1db] != '\0') || ((int)(temp_v5 + temp_v14) >= 0xd)) {
        *(unsigned char *)(puVar1 + 0x207) = 0;
      }
      if (temp_v5 != 0) {
        temp_v20 = puVar1[*puVar8 + 0x1a9] & 0xfffffff0;
        puVar1[0x1b9] = temp_v20;
        if ((char)puVar1[0x207] != '\0') {
          if (*(char *)((int)puVar1 + 0x19) == '\0') {
            temp_v15 = puVar1[0x1a8];
            if (temp_v15 < temp_v20) {
              temp_v20 = temp_v15;
            }
            if (temp_v18 < temp_v15) {
              temp_v18 = temp_v15;
            }
          }
          if (temp_v18 - temp_v20 >= 0x10000000) {
            *(unsigned char *)(puVar1 + 0x207) = 0;
          }
        }
      }
      else {
        *(unsigned char *)(puVar1 + 0x207) = 0;
      }
      temp_v22 = *(unsigned int *)(temp_v17 + 0x8f4) == temp_v5;
      temp_v9 = 1;
      temp_v37[2] = 1;
      if (temp_v22) {
        temp_v9 = *(int *)(temp_v17 + 0x938);
      }
      if ((temp_v22 && temp_v9 == temp_v14) && ((puVar1[1] & 0x200) == 0)) {
        puVar14 = *(unsigned int **)(temp_v17 + 0x870);
        temp_v18 = 0;
        puVar18 = puVar8;
        if (0 < (int)temp_v5) {
          do {
            temp_v20 = *puVar18;
            if (((temp_v20 != *puVar14) ||
                (temp_v9 = temp_v17 + temp_v18 * 4,
                puVar1[temp_v20 + 0x1a9] - puVar1[*puVar8 + 0x1a9] !=
                *(int *)(temp_v9 + 0x874) - *(int *)(temp_v17 + 0x874))) ||
               (puVar1[temp_v20 * 6 + 0x119] != *(unsigned int *)(temp_v9 + 0x8b4))) {
              temp_v37[2] = 0;
              break;
            }
            temp_v15 = puVar1[temp_v20 * 6 + 0x118];
            if (temp_v15 == 0x1401) {
              temp_v15 = 1;
            }
            else if (temp_v15 == 0x1402) {
              temp_v15 = 2;
            }
            else if (temp_v15 == 0x1406) {
              temp_v15 = 3;
            }
            else {
              temp_v15 = 0;
            }
            if ((int)temp_v18 < 8) {
              temp_v16 = *(unsigned int *)(temp_v17 + 0x944) >> ((temp_v18 & 0x3f) << 2);
            }
            else {
              temp_v16 = *(unsigned int *)(temp_v17 + 0x948) >> ((temp_v18 * 4 - 0x20) & 0xff);
            }
            if ((((puVar1[temp_v20 * 6 + 0x117] * 4 - 4) & 0xff) | temp_v15) != (temp_v16 & 0xf)) {
              temp_v37[2] = 0;
              break;
            }
            puVar18 = (unsigned int *)puVar18[1];
            puVar14 = (unsigned int *)puVar14[1];
            temp_v18 = temp_v18 + 1;
          } while ((int)temp_v18 < (int)temp_v5);
        }
        temp_v9 = 0;
        if (temp_v9 < temp_v14) {
          do {
            if (temp_v43[temp_v9] != *(unsigned int *)(temp_v17 + temp_v9 * 4 + 0x8f8)) goto LAB_001340ac;
            temp_v9 = temp_v9 + 1;
          } while (temp_v9 < temp_v14);
        }
        temp_v4 = '\0';
        if (temp_v37[2] != 0) {
          temp_v4 = (char)puVar1[0x207];
        }
        if (temp_v37[2] != 0 && temp_v4 != '\0') {
          if (*(char *)((int)puVar1 + 0x19) != '\0') {
            temp_v18 = puVar1[0x1b9];
          }
          else {
            temp_v18 = puVar1[0x1b9];
            if ((int)puVar1[0x1a8] < (int)temp_v18) {
              temp_v18 = puVar1[0x1a8] & 0xfffffff0;
            }
          }
          temp_v20 = puVar1[0x1b9];
          temp_v22 = temp_v20 != temp_v18;
          if (!temp_v22) {
            temp_v20 = (unsigned int)*(unsigned char *)(temp_v17 + 0x425);
          }
          if ((temp_v22 || temp_v20 != 0) ||
             (temp_v20 = temp_v39, puVar1[*puVar8 + 0x1a9] - temp_v18 != *(int *)(temp_v17 + 0x94c))) {
            temp_v9 = 1;
            temp_v20 = puVar1[*puVar8 + 0x1a9];
            if (*(int *)(temp_v17 + 0x93c) >= 2) {
              do {
                temp_v10 = temp_v17 + temp_v9 * 0xc;
                temp_v9 = temp_v9 + 1;
                *(unsigned int *)(temp_v10 + 0x94c) =
                     (*(int *)(temp_v10 + 0x94c) - *(int *)(temp_v17 + 0x94c)) + (temp_v20 - temp_v18);
              } while (temp_v9 < *(int *)(temp_v17 + 0x93c));
            }
            *(unsigned int *)(temp_v17 + 0x94c) = temp_v20 - temp_v18;
            temp_v20 = 0;
            if (puVar1[0x1b9] == temp_v18) {
              *(unsigned char *)(temp_v17 + 0x425) = 0;
            }
          }
          puVar1[0x1b9] = temp_v18;
          *(unsigned int *)(temp_v17 + 0x940) = temp_v18 >> 3;
          param_2 = DAT_004652a4;
          if (temp_v20 != 0) {
            if (DAT_004652a0 < DAT_004652a4) {
              DAT_004652a0[1] = 0xf0200;
              *DAT_004652a0 = temp_v18 >> 3;
              DAT_004652a0 = DAT_004652a0 + 2;
            }
          }
          else if ((temp_v0 == temp_v17) != 0) {
            FUN_002aa938(0x200,*(int *)(temp_v17 + 0x93c) * 3 + 1,temp_v17 + 0x940);
            param_2 = temp_v11;
          }
          else {
            FUN_002aa938(0x200,0x27,temp_v17 + 0x940);
            if (DAT_004652a0 < DAT_004652a4) {
              *DAT_004652a0 = *(unsigned int *)(temp_v17 + 0x9dc);
              DAT_004652a0[1] = 0xf02bb;
              DAT_004652a0 = DAT_004652a0 + 2;
            }
            if (DAT_004652a0 < DAT_004652a4) {
              *DAT_004652a0 = *(unsigned int *)(temp_v17 + 0x9e0);
              DAT_004652a0[1] = 0xf02bc;
              DAT_004652a0 = DAT_004652a0 + 2;
            }
            if (*(char *)(temp_v17 + 0x424) != '\0') {
              if (DAT_004652a0 < DAT_004652a4) {
                *DAT_004652a0 = *(unsigned int *)(temp_v17 + 0x9e4);
                DAT_004652a0[1] = 0xf028b;
                DAT_004652a0 = DAT_004652a0 + 2;
              }
              if (DAT_004652a0 < DAT_004652a4) {
                temp_v18 = *(unsigned int *)(temp_v17 + 0x9e8);
                DAT_004652a0[1] = 0xf028c;
                *DAT_004652a0 = temp_v18;
                DAT_004652a0 = DAT_004652a0 + 2;
              }
            }
            puVar8 = *(unsigned int **)(temp_v17 + 0x870);
            puVar1[0x209] = temp_v5 + temp_v14;
            temp_v9 = 0;
            puVar1[0x208] = temp_v5;
            temp_v10 = temp_v9;
            if (0 < (int)temp_v5) {
              do {
                temp_v9 = temp_v10 + 1;
                puVar1[temp_v10 + 0x20a] = *puVar8;
                puVar8 = (unsigned int *)puVar8[1];
                temp_v10 = temp_v9;
              } while (temp_v9 < (int)temp_v5);
            }
            param_2 = (unsigned int *)0x0;
            if (0 < temp_v14) {
              do {
                puVar8 = temp_v43 + (int)param_2;
                param_2 = (unsigned int *)((int)param_2 + 1);
                puVar1[temp_v9 + 0x20a] = *puVar8;
                temp_v9 = temp_v9 + 1;
              } while ((int)param_2 < temp_v14);
            }
          }
          goto LAB_00134918;
        }
      }
LAB_001340ac:
      temp_v9 = 0;
      if (0 < (int)temp_v5) {
        puVar18 = puVar8;
        do {
          temp_v10 = temp_v17 + temp_v9 * 8;
          temp_v13 = temp_v17 + temp_v9 * 4;
          *(unsigned int *)(temp_v10 + 0x7f0) = *puVar18;
          *(unsigned int *)(temp_v13 + 0x874) = puVar1[*puVar18 + 0x1a9];
          *(unsigned int *)(temp_v13 + 0x8b4) = puVar1[*puVar18 * 6 + 0x119];
          if (temp_v9 == temp_v5 - 1) {
            *(unsigned int *)(temp_v10 + 0x7f4) = 0;
          }
          else {
            *(int *)(temp_v10 + 0x7f4) = temp_v10 + 0x7f8;
            puVar18 = (unsigned int *)puVar18[1];
          }
          temp_v9 = temp_v9 + 1;
        } while (temp_v9 < (int)temp_v5);
      }
      temp_v9 = 0;
      if (temp_v9 < temp_v14) {
        do {
          puVar18 = temp_v43 + temp_v9;
          temp_v10 = temp_v9 * 4;
          temp_v9 = temp_v9 + 1;
          *(unsigned int *)(temp_v17 + temp_v10 + 0x8f8) = *puVar18;
        } while (temp_v9 < temp_v14);
      }
      *(unsigned int *)(temp_v17 + 0x870) = temp_v17 + 0x7f0;
      *(unsigned int *)(temp_v17 + 0x8f4) = temp_v5;
      *(int *)(temp_v17 + 0x938) = temp_v14;
      if (puVar1[0x176] != 0) {
        if (*(char *)((int)puVar1 + 0x19) == '\0') goto LAB_001342cc;
        *(int *)(temp_v17 + 0x940) = (int)puVar1[0x1b9] >> 3;
        *(unsigned char *)(temp_v17 + 0x425) = 0;
      }
      else if (*(char *)((int)puVar1 + 0x19) != '\0') {
        *(int *)(temp_v17 + 0x940) = (int)puVar1[0x1b9] >> 3;
        *(unsigned char *)(temp_v17 + 0x425) = 0;
      }
      else {
        *(unsigned char *)(puVar1 + 0x207) = 0;
LAB_001342cc:
        temp_v18 = puVar1[0x1a8];
        temp_v0 = puVar1[0x1b9];
        if ((int)temp_v18 < (int)temp_v0) {
          puVar1[0x1b9] = temp_v18 & 0xfffffff0;
        }
        *(unsigned char *)(temp_v17 + 0x425) = (int)temp_v18 < (int)temp_v0;
        *(int *)(temp_v17 + 0x940) = (int)puVar1[0x1b9] >> 3;
      }
      if ((char)puVar1[0x207] != '\0') {
        temp_v44 = 0;
        temp_v48 = puVar1 + 0x116;
        temp_v42 = puVar1 + 0x1a8;
        temp_v47 = (int *)(temp_v17 + 0x93c);
        temp_v37[0] = 0;
        temp_v18 = 0;
        temp_v9 = 1;
        puVar18 = (unsigned int *)(temp_v17 + 0x94c);
        *(unsigned int *)(temp_v17 + 0x93c) = 0;
        do {
          temp_v10 = temp_v9 * 4;
          temp_v9 = temp_v9 + 1;
          *(unsigned int *)(temp_v17 + temp_v10 + 0x940) = 0;
        } while (temp_v9 < 0x27);
        temp_v0 = 0;
        temp_v38 = (unsigned int *)0x1;
        if (0 < (int)temp_v5) {
          temp_v50 = (unsigned int *)(temp_v17 + 0x948);
          temp_v51 = (unsigned int *)(temp_v17 + 0x944);
          do {
            temp_v20 = *puVar8;
            temp_v49 = (unsigned int *)puVar8[1];
            puVar23 = (unsigned int *)puVar1[temp_v20 * 6 + 0x118];
            temp_v40 = temp_v42[temp_v20 + 1] - puVar1[0x1b9];
            puVar14 = (unsigned int *)(unsigned int)(puVar23 == (unsigned int *)0x1400);
            puVar19 = (unsigned int *)0x0;
            if (puVar23 != (unsigned int *)0x1400) {
              puVar19 = (unsigned int *)(unsigned int)(puVar23 == (unsigned int *)0x1401);
              if (puVar23 == (unsigned int *)0x1401) {
                puVar14 = (unsigned int *)0x1;
              }
              else if (puVar23 == (unsigned int *)0x1402) {
                puVar14 = (unsigned int *)0x2;
                puVar19 = puVar14;
              }
              else if (puVar23 == (unsigned int *)0x1406) {
                puVar19 = (unsigned int *)0x3;
                puVar14 = (unsigned int *)0x4;
              }
            }
            temp_v15 = (unsigned int)puVar19 | (puVar1[temp_v20 * 6 + 0x117] * 4 - 4);
            if ((int)temp_v0 < 8) {
              temp_v15 = *(unsigned int *)(temp_v17 + 0x944) | (temp_v15 << ((temp_v0 & 0x3f) << 2));
              puVar19 = (unsigned int *)(temp_v17 + 0x944);
            }
            else {
              temp_v15 = *(unsigned int *)(temp_v17 + 0x948) | (temp_v15 << ((temp_v0 * 4 - 0x20) & 0xff));
              puVar19 = (unsigned int *)(temp_v17 + 0x948);
            }
            *puVar19 = temp_v15;
            if (puVar1[temp_v20 * 6 + 0x119] != 0) {
              temp_v15 = puVar1[temp_v20 * 6 + 0x117];
              if (puVar14 <= temp_v38) {
                puVar23 = temp_v38;
              }
              if (temp_v38 < puVar14) {
                puVar23 = puVar14;
              }
              temp_v37[0] = (((int)puVar14 + (temp_v37[0] - 1)) & ~((int)puVar14 - 1U)) +
                             temp_v15 * (int)puVar14;
              temp_v38 = puVar23;
              if (temp_v18 != 0) {
                if (temp_v18 < 8) {
                  puVar18[1] = puVar18[1] | (temp_v0 << ((temp_v18 & 0x3f) << 2));
                }
                else {
                  puVar18[2] = puVar18[2] | (temp_v0 << ((temp_v18 * 4 - 0x20) & 0xff));
                }
              }
              else {
                *puVar18 = temp_v40;
                temp_v44 = puVar1[temp_v20 * 6 + 0x119];
                temp_v46 = puVar1[temp_v20 * 6 + 0x119] + temp_v42[*puVar8 + 1];
                puVar18[1] = puVar18[1] | (temp_v0 << ((temp_v18 & 0x3f) << 2));
              }
              temp_v16 = temp_v18 + 1;
              if (temp_v0 + 1 != temp_v5) {
                temp_v1 = *temp_v49;
                temp_v19 = temp_v42[temp_v1 + 1] - puVar1[0x1b9];
                if (((temp_v19 > temp_v40) &&
                    (puVar1[temp_v20 * 6 + 0x119] == (puVar1 + 0x116)[temp_v1 * 6 + 3])) &&
                   ((temp_v46 > (int)temp_v42[temp_v1 + 1] && (temp_v16 != 0xc)))) {
                  temp_v45 = 0;
                }
                else {
                  temp_v45 = 1;
                  temp_v19 = *puVar18 + temp_v44;
                }
              }
              else {
                temp_v45 = 1;
                temp_v19 = *puVar18 + temp_v44;
              }
              temp_v15 = (temp_v19 - temp_v40) - temp_v15 * (int)puVar14;
              temp_v20 = temp_v15 >> 2;
              if (0xc - temp_v16 < (unsigned int)((temp_v20 & 3) != 0) + (temp_v15 >> 4)) goto LAB_00134658;
              if (temp_v20 != 0) {
                temp_v37[0] = ((temp_v37[0] + 3) & 0xfffffffc) + temp_v20 * 4;
                if ((temp_v20 & 3) != 0) {
                  if (temp_v16 < 8) {
                    puVar18[1] = puVar18[1] | (((temp_v20 & 3) + 0xb) << ((temp_v16 * 4) & 0xff));
                  }
                  else {
                    puVar18[2] = puVar18[2] | (((temp_v20 & 3) + 0xb) << ((temp_v16 * 4 - 0x20) & 0xff))
                    ;
                  }
                  temp_v16 = temp_v18 + 2;
                  temp_v20 = temp_v20 & 0xfffffffc;
                }
                if (temp_v20 >= 0x80000000) {
                  do {
                    if (temp_v16 < 8) {
                      puVar18[1] = puVar18[1] | (0xf << ((temp_v16 & 0x3f) << 2));
                    }
                    else {
                      puVar18[2] = puVar18[2] | (0xf << ((temp_v16 * 4 - 0x20) & 0xff));
                    }
                    temp_v20 = temp_v20 - 4;
                    temp_v16 = temp_v16 + 1;
                  } while (temp_v20 != 0);
                }
                else {
                  temp_v18 = puVar18[1];
                  temp_v9 = (int)((-3 - temp_v20) + ((unsigned int)((int)(-3 - temp_v20) >> 0x1f) >> 0x1e)) >> 2;
                  temp_v10 = -temp_v9;
                  if (temp_v9 != 0 && -1 < temp_v10) {
                    temp_v20 = puVar18[2];
                    temp_v13 = 0;
                    do {
                      temp_v1 = temp_v16 + temp_v13;
                      temp_v15 = temp_v1 * 4;
                      if (temp_v1 >= 8) {
                        temp_v15 = temp_v15 - 0x20;
                      }
                      temp_v13 = temp_v13 + 1;
                      temp_v15 = 0xf << (temp_v15 & 0xff);
                      if (7 >= temp_v1) {
                        temp_v18 = temp_v18 | temp_v15;
                      }
                      else {
                        temp_v20 = temp_v20 | temp_v15;
                      }
                      temp_v10 = temp_v10 - 1;
                    } while (temp_v10 != 0);
                    temp_v16 = temp_v16 - temp_v9;
                    puVar18[1] = temp_v18;
                    puVar18[2] = temp_v20;
                  }
                }
              }
              temp_v18 = temp_v16;
              if (temp_v45 != 0) {
                if ((((int)puVar23 + (temp_v37[0] - 1)) & ~((int)puVar23 - 1U)) != temp_v44)
                goto LAB_00134658;
                temp_v38 = (unsigned int *)0x1;
                temp_v37[0] = 0;
                puVar18[2] = (temp_v44 << 0x10) | (temp_v16 << 0x1c) | puVar18[2];
                temp_v18 = 0;
                puVar18 = puVar18 + 3;
                *temp_v47 = *(int *)(temp_v17 + 0x93c) + 1;
              }
            }
            else {
              temp_v20 = puVar1[temp_v20 * 6 + 0x117];
              *puVar18 = temp_v40;
              puVar18[1] = puVar18[1] | temp_v0;
              puVar18[2] = (temp_v20 * (int)puVar14 * 0x10000) | 0x10000000 | puVar18[2];
              puVar18 = puVar18 + 3;
              *temp_v47 = *(int *)(temp_v17 + 0x93c) + 1;
            }
            temp_v0 = temp_v0 + 1;
            puVar8 = temp_v49;
          } while ((int)temp_v0 < (int)temp_v5);
        }
        if ((char)puVar1[0x207] != '\0') {
          if (0 < temp_v14) {
            puVar18 = (unsigned int *)(temp_v17 + 0x800);
          }
          temp_v9 = 0;
          if (temp_v9 < temp_v14) {
            do {
              temp_v18 = temp_v9 + temp_v5;
              temp_v9 = temp_v9 + 1;
              puVar18[0x52] = *(unsigned int *)(temp_v17 + 0x948) | (0x10000 << (temp_v18 & 0xff));
            } while (temp_v9 < temp_v14);
          }
          if (temp_v5 != 0) {
            *(unsigned int *)(temp_v17 + 0x948) =
                 *(unsigned int *)(temp_v17 + 0x948) | ((temp_v5 + temp_v14) * 0x10000000 + 0xf0000000);
          }
          temp_v18 = (unsigned int)*(unsigned char *)((int)puVar1 + 0x19);
          temp_v22 = temp_v18 == 0;
          if (temp_v22) {
            temp_v18 = *(unsigned int *)(temp_v17 + 0x93c);
          }
          if (temp_v22 && temp_v18 == 0xc) {
LAB_00134658:
            *(unsigned char *)(puVar1 + 0x207) = 0;
          }
        }
      }
      puVar1[0x208] = temp_v5;
      puVar1[0x209] = temp_v5 + temp_v14;
      puVar8 = *(unsigned int **)(temp_v17 + 0x870);
      puVar18 = (unsigned int *)(temp_v17 + 0x9e0);
      *(unsigned int *)(temp_v17 + 0x9dc) = 0;
      *puVar18 = 0;
      *(unsigned int *)(temp_v17 + 0x9e4) = 0x76543210;
      *(unsigned int *)(temp_v17 + 0x9e8) = 0xfedcba98;
      temp_v18 = 0;
      if (0 < (int)temp_v5) {
        do {
          *(unsigned int *)(temp_v17 + 0x9dc) =
               *(unsigned int *)(temp_v17 + 0x9dc) |
               ((*(unsigned int *)(temp_v17 + *puVar8 * 0xc + 0x358) & 0xf) << ((temp_v18 & 0x3f) << 2));
          temp_v0 = temp_v18;
          while( 1 ) {
            temp_v18 = temp_v0 + 1;
            puVar1[temp_v0 + 0x20a] = *puVar8;
            puVar8 = (unsigned int *)puVar8[1];
            if ((int)temp_v5 <= (int)temp_v18) goto LAB_001347dc;
            if ((int)temp_v18 < 8) break;
            *puVar18 = *(unsigned int *)(temp_v17 + 0x9e0) |
                       ((*(unsigned int *)(temp_v17 + *puVar8 * 0xc + 0x358) & 0xf) <<
                       ((temp_v18 * 4 - 0x20) & 0xff));
            temp_v0 = temp_v18;
          }
        } while( 1 );
      }
LAB_001347dc:
      temp_v9 = 0;
      if (0 < temp_v14) {
        do {
          if ((int)temp_v18 < 8) {
            *(unsigned int *)(temp_v17 + 0x9dc) =
                 *(unsigned int *)(temp_v17 + 0x9dc) |
                 ((*(unsigned int *)(temp_v17 + temp_v43[temp_v9] * 0xc + 0x358) & 0xf) <<
                 ((temp_v18 & 0x3f) << 2));
          }
          else {
            *puVar18 = *(unsigned int *)(temp_v17 + 0x9e0) |
                       ((*(unsigned int *)(temp_v17 + temp_v43[temp_v9] * 0xc + 0x358) & 0xf) <<
                       ((temp_v18 * 4 - 0x20) & 0xff));
          }
          puVar8 = temp_v43 + temp_v9;
          temp_v9 = temp_v9 + 1;
          puVar1[temp_v18 + 0x20a] = *puVar8;
          temp_v18 = temp_v18 + 1;
        } while (temp_v9 < temp_v14);
      }
      FUN_002aa938(0x200,0x27,temp_v17 + 0x940);
      param_2 = (unsigned int *)&DAT_004652a4;
      if (DAT_004652a0 < DAT_004652a4) {
        temp_v18 = *(unsigned int *)(temp_v17 + 0x9dc);
        DAT_004652a0[1] = 0xf02bb;
        *DAT_004652a0 = temp_v18;
        DAT_004652a0 = DAT_004652a0 + 2;
      }
      if (DAT_004652a0 < DAT_004652a4) {
        *DAT_004652a0 = *(unsigned int *)(temp_v17 + 0x9e0);
        DAT_004652a0[1] = 0xf02bc;
        DAT_004652a0 = DAT_004652a0 + 2;
      }
      if (*(char *)(temp_v17 + 0x424) != '\0') {
        if (DAT_004652a0 < DAT_004652a4) {
          *DAT_004652a0 = *(unsigned int *)(temp_v17 + 0x9e4);
          DAT_004652a0[1] = 0xf028b;
          DAT_004652a0 = DAT_004652a0 + 2;
        }
        param_2 = DAT_004652a4;
        if (DAT_004652a0 < DAT_004652a4) {
          temp_v18 = *(unsigned int *)(temp_v17 + 0x9e8);
          DAT_004652a0[1] = 0xf028c;
          *DAT_004652a0 = temp_v18;
          DAT_004652a0 = DAT_004652a0 + 2;
        }
      }
    }
LAB_00134918:
    if ((((char)puVar1[0x207] != '\0') && (param_2 = (unsigned int *)0x80c2, (*temp_v55 & 0x80c2) != 0)) &&
       (temp_v18 = puVar1[0x208], temp_v18 < puVar1[0x209])) {
      param_2 = (unsigned int *)&DAT_004652a4;
      do {
        temp_v0 = puVar1[temp_v18 + 0x20a];
        if (DAT_004652a0 < DAT_004652a4) {
          *DAT_004652a0 = temp_v18;
          DAT_004652a0[1] = 0xf0232;
          DAT_004652a0 = DAT_004652a0 + 2;
        }
        if (DAT_004652a0 < DAT_004652a4) {
          temp_v5 = puVar1[temp_v0 * 3 + 0xe6];
          DAT_004652a0[1] = 0xf0233;
          *DAT_004652a0 = temp_v5;
          DAT_004652a0 = DAT_004652a0 + 2;
        }
        if (DAT_004652a0 < DAT_004652a4) {
          *DAT_004652a0 = puVar1[temp_v0 * 3 + 0xe7];
          DAT_004652a0[1] = 0xf0234;
          DAT_004652a0 = DAT_004652a0 + 2;
        }
        if (DAT_004652a0 < DAT_004652a4) {
          *DAT_004652a0 = puVar1[temp_v0 * 3 + 0xe8];
          DAT_004652a0[1] = 0xf0235;
          DAT_004652a0 = DAT_004652a0 + 2;
        }
        temp_v18 = temp_v18 + 1;
      } while (temp_v18 < puVar1[0x209]);
    }
  }
  if (puVar1[1] != 0) {
    if ((puVar1[1] & (unsigned int)temp_v56 & 0x10) != 0) {
      *(unsigned int *)(temp_v17 + 0x1bc) = 0xffffffff;
      *(unsigned int *)(temp_v17 + 0x1b8) = 0xffffffff;
      *(unsigned int *)(temp_v17 + 0x1b4) = 0xffffffff;
      puVar8 = DAT_004652b4;
      temp_v14 = 0;
      if (DAT_0046531c != 0xbd) {
        do {
          temp_v9 = (&DAT_0046531c)[temp_v14];
          if (*(char *)(temp_v9 + temp_v17 + 0x426) != '\0') {
            puVar8[temp_v9 + 0x403] = ~*(unsigned int *)(temp_v17 + temp_v9 * 4 + 0x4e4);
            temp_v9 = temp_v17 + ((&DAT_0046531c)[temp_v14] >> 5) * 4;
            *(unsigned int *)(temp_v9 + 0x7d8) =
                 *(unsigned int *)(temp_v9 + 0x7d8) | (1 << ((&DAT_0046531c)[temp_v14] & 0x1fU));
          }
          temp_v14 = temp_v14 + 1;
        } while ((&DAT_0046531c)[temp_v14] != 0xbd);
      }
      if (*(char *)(temp_v17 + 0x424) != '\0') {
        *(unsigned int *)(temp_v17 + 0x350) = 0xffffffff;
        *(unsigned int *)(temp_v17 + 0x34c) = 0xffffffff;
        *(unsigned int *)(temp_v17 + 0x348) = 0xffffffff;
        puVar8 = DAT_004652b4;
        temp_v14 = 0;
        if (DAT_00465334 != 0xbd) {
          do {
            temp_v9 = (&DAT_00465334)[temp_v14];
            if (*(char *)(temp_v9 + temp_v17 + 0x426) != '\0') {
              puVar8[temp_v9 + 0x403] = ~*(unsigned int *)(temp_v17 + temp_v9 * 4 + 0x4e4);
              temp_v9 = temp_v17 + ((&DAT_00465334)[temp_v14] >> 5) * 4;
              *(unsigned int *)(temp_v9 + 0x7d8) =
                   *(unsigned int *)(temp_v9 + 0x7d8) | (1 << ((&DAT_00465334)[temp_v14] & 0x1fU));
            }
            temp_v14 = temp_v14 + 1;
          } while ((&DAT_00465334)[temp_v14] != 0xbd);
        }
      }
    }
    puVar8 = DAT_004652b4;
    if ((((unsigned int)temp_v56 & 0x20 & puVar1[1]) != 0) && (temp_v14 = 0, DAT_0046534c != 0xbd)) {
      do {
        temp_v9 = (&DAT_0046534c)[temp_v14];
        if (*(char *)(temp_v9 + temp_v17 + 0x426) != '\0') {
          puVar8[temp_v9 + 0x403] = ~*(unsigned int *)(temp_v17 + temp_v9 * 4 + 0x4e4);
          temp_v9 = temp_v17 + ((&DAT_0046534c)[temp_v14] >> 5) * 4;
          *(unsigned int *)(temp_v9 + 0x7d8) =
               *(unsigned int *)(temp_v9 + 0x7d8) | (1 << ((&DAT_0046534c)[temp_v14] & 0x1fU));
        }
        temp_v14 = temp_v14 + 1;
      } while ((&DAT_0046534c)[temp_v14] != 0xbd);
    }
    puVar8 = DAT_004652b4;
    param_2 = (unsigned int *)puVar1[1];
    if (((unsigned int)temp_v56 & 2 & (unsigned int)param_2) != 0) {
      param_2 = (unsigned int *)&DAT_004652bc;
      temp_v14 = 0;
      if (DAT_004652bc != 0xbd) {
        do {
          temp_v9 = (&DAT_004652bc)[temp_v14];
          if (*(char *)(temp_v9 + temp_v17 + 0x426) != '\0') {
            puVar8[temp_v9 + 0x403] = ~*(unsigned int *)(temp_v17 + temp_v9 * 4 + 0x4e4);
            temp_v9 = temp_v17 + ((&DAT_004652bc)[temp_v14] >> 5) * 4;
            *(unsigned int *)(temp_v9 + 0x7d8) =
                 *(unsigned int *)(temp_v9 + 0x7d8) | (1 << ((&DAT_004652bc)[temp_v14] & 0x1fU));
          }
          temp_v14 = temp_v14 + 1;
        } while ((&DAT_004652bc)[temp_v14] != 0xbd);
      }
    }
  }
  if (((unsigned int)temp_v56 & 0x10) != 0) {
    temp_v14 = *(int *)(temp_v17 + 0x1b4);
    temp_v22 = temp_v14 == 0;
    if (temp_v22) {
      temp_v14 = *(int *)(temp_v17 + 0x1b8);
    }
    if (temp_v22 && temp_v14 == 0) {
      temp_v14 = *(int *)(temp_v17 + 0x1bc);
      temp_v22 = temp_v14 == 0;
      if (temp_v22) {
        temp_v14 = *(int *)(temp_v17 + 0x348);
      }
      if (temp_v22 && temp_v14 == 0) {
        temp_v14 = *(int *)(temp_v17 + 0x34c);
        temp_v22 = temp_v14 == 0;
        if (temp_v22) {
          temp_v14 = *(int *)(temp_v17 + 0x350);
        }
        if (temp_v22 && temp_v14 == 0) goto LAB_00134fd0;
      }
    }
    temp_v14 = *(int *)(temp_v17 + 0x1c0);
    if (temp_v14 != 0) {
      temp_v22 = *(unsigned int *)(temp_v17 + 0x348) == 0;
      if (temp_v22) {
        param_2 = *(unsigned int **)(temp_v17 + 0x34c);
      }
      temp_v23 = temp_v22 && param_2 == (unsigned int *)0x0;
      if (temp_v22 && param_2 == (unsigned int *)0x0) {
        param_2 = *(unsigned int **)(temp_v17 + 0x350);
        temp_v23 = param_2 == (unsigned int *)0x0;
      }
      if (!temp_v23) {
        temp_v9 = 0;
        temp_v10 = 0;
        temp_v0 = 0;
        temp_v18 = *(unsigned int *)(temp_v17 + 0x348) & 1;
        while (temp_v18 == 0) {
          if (*(unsigned int *)(temp_v17 + (temp_v0 >> 5) * 4 + 0x348) >> (temp_v0 & 0x1f) == 0) {
            temp_v0 = (temp_v0 & 0xffffffe0) + 0x20;
          }
          else {
            temp_v0 = temp_v0 + 1;
          }
          param_2 = *(unsigned int **)(temp_v17 + (temp_v0 >> 5) * 4 + 0x348);
          temp_v18 = (unsigned int)param_2 & (1 << (temp_v0 & 0x1f));
        }
        temp_v18 = 0;
        if (temp_v0 < *(unsigned int *)(temp_v17 + 0x344)) {
          do {
            temp_v5 = *(unsigned int *)(temp_v17 + temp_v0 * 4 + 0x1c4);
            if (temp_v9 != 0) {
              if (temp_v5 - temp_v18 == temp_v10) {
                temp_v10 = temp_v10 + 1;
                temp_v5 = temp_v18;
              }
              else {
                if (DAT_004652a0 < DAT_004652a4) {
                  DAT_004652a0[1] = 0xf0290;
                  *DAT_004652a0 = temp_v18 | 0x80000000;
                  DAT_004652a0 = DAT_004652a0 + 2;
                }
                FUN_002aaa1c(0x291,temp_v10 << 2);
                temp_v10 = 1;
                temp_v9 = temp_v14 + temp_v0 * 0x10;
              }
            }
            else {
              temp_v10 = 1;
              temp_v9 = temp_v14 + temp_v0 * 0x10;
            }
            temp_v0 = temp_v0 + 1;
            while( 1 ) {
              param_2 = *(unsigned int **)(temp_v17 + (temp_v0 >> 5) * 4 + 0x348);
              if ((((unsigned int)param_2 & (1 << (temp_v0 & 0x1f))) != 0) ||
                 (*(unsigned int *)(temp_v17 + 0x344) <= temp_v0)) break;
              if ((unsigned int)param_2 >> (temp_v0 & 0x1f) == 0) {
                temp_v0 = (temp_v0 & 0xffffffe0) + 0x20;
              }
              else {
                temp_v0 = temp_v0 + 1;
              }
            }
            temp_v18 = temp_v5;
          } while (temp_v0 < *(unsigned int *)(temp_v17 + 0x344));
          if (temp_v9 != 0) {
            if (DAT_004652a0 < DAT_004652a4) {
              DAT_004652a0[1] = 0xf0290;
              *DAT_004652a0 = temp_v5 | 0x80000000;
              DAT_004652a0 = DAT_004652a0 + 2;
            }
            FUN_002aaa1c(0x291,temp_v10 << 2);
            param_2 = temp_v12;
          }
        }
      }
    }
    temp_v14 = *(int *)(temp_v17 + 0x2c);
    if (temp_v14 != 0) {
      temp_v22 = *(unsigned int *)(temp_v17 + 0x1b4) == 0;
      if (temp_v22) {
        param_2 = *(unsigned int **)(temp_v17 + 0x1b8);
      }
      temp_v23 = temp_v22 && param_2 == (unsigned int *)0x0;
      if (temp_v22 && param_2 == (unsigned int *)0x0) {
        temp_v23 = *(int *)(temp_v17 + 0x1bc) == 0;
      }
      if (!temp_v23) {
        temp_v9 = 0;
        temp_v10 = 0;
        temp_v0 = 0;
        temp_v18 = *(unsigned int *)(temp_v17 + 0x1b4) & 1;
        while (temp_v18 == 0) {
          if (*(unsigned int *)(temp_v17 + (temp_v0 >> 5) * 4 + 0x1b4) >> (temp_v0 & 0x1f) == 0) {
            temp_v0 = (temp_v0 & 0xffffffe0) + 0x20;
          }
          else {
            temp_v0 = temp_v0 + 1;
          }
          temp_v18 = *(unsigned int *)(temp_v17 + (temp_v0 >> 5) * 4 + 0x1b4) & (1 << (temp_v0 & 0x1f));
        }
        temp_v18 = 0;
        if (temp_v0 < *(unsigned int *)(temp_v17 + 0x1b0)) {
          do {
            temp_v5 = *(unsigned int *)(temp_v17 + temp_v0 * 4 + 0x30);
            if (temp_v9 != 0) {
              if (temp_v5 - temp_v18 == temp_v10) {
                temp_v10 = temp_v10 + 1;
                temp_v5 = temp_v18;
              }
              else {
                if (DAT_004652a0 < DAT_004652a4) {
                  DAT_004652a0[1] = 0xf02c0;
                  *DAT_004652a0 = temp_v18 | 0x80000000;
                  DAT_004652a0 = DAT_004652a0 + 2;
                }
                FUN_002aaa1c(0x2c1,temp_v10 << 2);
                temp_v10 = 1;
                temp_v9 = temp_v14 + temp_v0 * 0x10;
              }
            }
            else {
              temp_v10 = 1;
              temp_v9 = temp_v14 + temp_v0 * 0x10;
            }
            temp_v0 = temp_v0 + 1;
            while( 1 ) {
              temp_v18 = *(unsigned int *)(temp_v17 + (temp_v0 >> 5) * 4 + 0x1b4);
              if (((temp_v18 & (1 << (temp_v0 & 0x1f))) != 0) || (*(unsigned int *)(temp_v17 + 0x1b0) <= temp_v0))
              break;
              if (temp_v18 >> (temp_v0 & 0x1f) == 0) {
                temp_v0 = (temp_v0 & 0xffffffe0) + 0x20;
              }
              else {
                temp_v0 = temp_v0 + 1;
              }
            }
            temp_v18 = temp_v5;
          } while (temp_v0 < *(unsigned int *)(temp_v17 + 0x1b0));
          if (temp_v9 != 0) {
            if (DAT_004652a0 < DAT_004652a4) {
              DAT_004652a0[1] = 0xf02c0;
              *DAT_004652a0 = temp_v5 | 0x80000000;
              DAT_004652a0 = DAT_004652a0 + 2;
            }
            FUN_002aaa1c(0x2c1,temp_v10 << 2);
          }
        }
      }
    }
    *(unsigned int *)(temp_v17 + 0x1b4) = 0;
    *(unsigned int *)(temp_v17 + 0x1b8) = 0;
    *(unsigned int *)(temp_v17 + 0x1bc) = 0;
    *(unsigned int *)(temp_v17 + 0x348) = 0;
    *(unsigned int *)(temp_v17 + 0x34c) = 0;
    *(unsigned int *)(temp_v17 + 0x350) = 0;
  }
LAB_00134fd0:
  temp_v29 = 0.0f;
  temp_v30 = 0;
  if ((((unsigned int)temp_v56 & 0x400) != 0) && ((*temp_v55 & 4) != 0)) {
    temp_v27 = *(float *)(temp_v17 + 0xe4c);
    temp_v22 = temp_v27 == 0.0f;
    if (temp_v22) {
      in_s0 = (float)puVar1[0x13];
      temp_v27 = (float)puVar1[0x14];
    }
    if (temp_v22) {
      temp_v27 = in_s0 - temp_v27;
      temp_v29 = in_s0;
    }
    else {
      temp_v27 = -temp_v27;
    }
    temp_v22 = (char)puVar1[0x15] == '\0';
    if (!temp_v22) {
      in_s2 = (float)puVar1[0x11];
      temp_v22 = in_s2 == 0.0f;
    }
    if (!temp_v22) {
      if (puVar1[0x1a3] == 0) {
        temp_v28 = 1.5259022e-05f;
      }
      else {
        temp_v28 = 5.960465e-08f;
      }
      temp_v29 = temp_v29 + in_s2 * temp_v28;
    }
    temp_v14 = 0;
    if (romwright_fabs_4(temp_v27) != 0.0f) {
      temp_v14 = ((unsigned int)romwright_fabs_4(temp_v27) >> 0x17) - 0x40;
    }
    if (temp_v14 >= 0) {
      temp_v18 = (((unsigned int)temp_v27 & 0x7fffff) >> 7) | (temp_v14 << 0x10) |
               (((unsigned int)temp_v27 >> 0x1f) << 0x17);
    }
    else {
      temp_v18 = ((unsigned int)temp_v27 >> 0x1f) << 0x17;
    }
    if (temp_v29 == 0.0f) {
      temp_v0 = 0;
    }
    else {
      temp_v14 = 0;
      if (romwright_fabs_4(temp_v29) != 0.0f) {
        temp_v14 = ((unsigned int)romwright_fabs_4(temp_v29) >> 0x17) - 0x40;
      }
      if (temp_v14 >= 0) {
        temp_v0 = (((unsigned int)temp_v29 & 0x7fffff) >> 7) | (temp_v14 << 0x10) |
                (((unsigned int)temp_v29 >> 0x1f) << 0x17);
      }
      else {
        temp_v0 = ((unsigned int)temp_v29 >> 0x1f) << 0x17;
      }
    }
    *(unsigned char *)(temp_v17 + 0x43d) = *(unsigned char *)(temp_v17 + 0x43d) | 0xf;
    if ((char)puVar1[3] != '\0') {
      *(unsigned int *)(temp_v17 + 0x540) = temp_v18;
      *(unsigned int *)(temp_v17 + 0x7d8) = *(unsigned int *)(temp_v17 + 0x7d8) | 0x800000;
      *puVar1 = *puVar1 | 0x80000;
      DAT_004652b4[0x41a] = ~*(unsigned int *)(temp_v17 + 0x540);
    }
    else if (*(unsigned int *)(temp_v17 + 0x540) != temp_v18) {
      *(unsigned int *)(temp_v17 + 0x540) = temp_v18;
      *(unsigned int *)(temp_v17 + 0x7d8) = *(unsigned int *)(temp_v17 + 0x7d8) | 0x800000;
      *puVar1 = *puVar1 | 0x80000;
    }
    *(unsigned char *)(temp_v17 + 0x43e) = *(unsigned char *)(temp_v17 + 0x43e) | 0xf;
    if ((char)puVar1[3] != '\0') {
      *(unsigned int *)(temp_v17 + 0x544) = temp_v0;
      *(unsigned int *)(temp_v17 + 0x7d8) = *(unsigned int *)(temp_v17 + 0x7d8) | 0x1000000;
      *puVar1 = *puVar1 | 0x80000;
      DAT_004652b4[0x41b] = ~*(unsigned int *)(temp_v17 + 0x544);
    }
    else if (*(unsigned int *)(temp_v17 + 0x544) != temp_v0) {
      *(unsigned int *)(temp_v17 + 0x544) = temp_v0;
      *(unsigned int *)(temp_v17 + 0x7d8) = *(unsigned int *)(temp_v17 + 0x7d8) | 0x1000000;
      *puVar1 = *puVar1 | 0x80000;
    }
  }
  if (((unsigned int)temp_v56 & 0x20) != 0) {
    if ((~*(unsigned int *)(temp_v17 + 0x624) & 7) == 0) {
      if (*(char *)(temp_v17 + 0xe74) != '\0') {
        DAT_004652b4[0x456] = *(unsigned int *)(temp_v17 + 0x630);
        temp_v18 = *(unsigned int *)(temp_v17 + 0x7e0) & 0xfff7ffff;
      }
      else {
        DAT_004652b4[0x456] = ~*(unsigned int *)(temp_v17 + 0x630);
        temp_v18 = *(unsigned int *)(temp_v17 + 0x7e0) | 0x80000;
      }
      *(unsigned int *)(temp_v17 + 0x7e0) = temp_v18;
    }
    if ((*(unsigned int *)(temp_v17 + 0x590) & 1) != 0) {
      temp_v14 = 0;
      do {
        if (*(char *)(temp_v17 + temp_v14 * 0x70 + 0xa20) != '\0') break;
        temp_v14 = temp_v14 + 1;
      } while (temp_v14 < 8);
    }
  }
  puVar8 = DAT_004652b4;
  if (((unsigned int)temp_v56 & 0x10) != 0) {
    temp_v14 = 0;
    if (DAT_00465334 != 0xbd) {
      temp_v36 = DAT_004652b4;
      do {
        temp_v18 = (&DAT_00465334)[temp_v14];
        if ((*(unsigned int *)(temp_v17 + ((int)temp_v18 >> 5) * 4 + 0x7d8) & (1 << (temp_v18 & 0x1f))) != 0) {
          temp_v0 = (unsigned int)*(unsigned char *)(temp_v18 + temp_v17 + 0x426);
          puVar18 = (unsigned int *)(temp_v17 + temp_v18 * 4 + 0x4e4);
          if ((temp_v0 != 0) && (temp_v5 = *puVar18, temp_v5 != puVar8[temp_v18 + 0x403])) {
            if (DAT_004652a0 < DAT_004652a4) {
              puVar14 = DAT_004652a0 + 1;
              *DAT_004652a0 = temp_v5;
              DAT_004652a0 = DAT_004652a0 + 2;
              *puVar14 = *(unsigned int *)((&DAT_00465334)[temp_v14] * 4 + 0x4e4f54) | (temp_v0 << 0x10);
            }
            puVar8[temp_v18 + 0x403] = *puVar18;
          }
          temp_v9 = temp_v17 + ((&DAT_00465334)[temp_v14] >> 5) * 4;
          *(unsigned int *)(temp_v9 + 0x7d8) =
               *(unsigned int *)(temp_v9 + 0x7d8) & ~(1 << ((&DAT_00465334)[temp_v14] & 0x1fU));
        }
        temp_v14 = temp_v14 + 1;
      } while ((&DAT_00465334)[temp_v14] != 0xbd);
    }
    puVar8 = DAT_004652b4;
    temp_v14 = 0;
    if (DAT_0046531c != 0xbd) {
      temp_v36 = DAT_004652b4;
      do {
        temp_v18 = (&DAT_0046531c)[temp_v14];
        if ((*(unsigned int *)(temp_v17 + ((int)temp_v18 >> 5) * 4 + 0x7d8) & (1 << (temp_v18 & 0x1f))) != 0) {
          temp_v0 = (unsigned int)*(unsigned char *)(temp_v18 + temp_v17 + 0x426);
          puVar18 = (unsigned int *)(temp_v17 + temp_v18 * 4 + 0x4e4);
          if ((temp_v0 != 0) && (temp_v5 = *puVar18, temp_v5 != puVar8[temp_v18 + 0x403])) {
            if (DAT_004652a0 < DAT_004652a4) {
              puVar14 = DAT_004652a0 + 1;
              *DAT_004652a0 = temp_v5;
              DAT_004652a0 = DAT_004652a0 + 2;
              *puVar14 = *(unsigned int *)((&DAT_0046531c)[temp_v14] * 4 + 0x4e4f54) | (temp_v0 << 0x10);
            }
            puVar8[temp_v18 + 0x403] = *puVar18;
          }
          temp_v9 = temp_v17 + ((&DAT_0046531c)[temp_v14] >> 5) * 4;
          *(unsigned int *)(temp_v9 + 0x7d8) =
               *(unsigned int *)(temp_v9 + 0x7d8) & ~(1 << ((&DAT_0046531c)[temp_v14] & 0x1fU));
        }
        temp_v14 = temp_v14 + 1;
      } while ((&DAT_0046531c)[temp_v14] != 0xbd);
    }
  }
  puVar8 = DAT_004652b4;
  if ((((unsigned int)temp_v56 & 2) != 0) && (temp_v14 = 0, DAT_004652bc != 0xbd)) {
    temp_v36 = DAT_004652b4;
    do {
      temp_v18 = (&DAT_004652bc)[temp_v14];
      if ((*(unsigned int *)(temp_v17 + ((int)temp_v18 >> 5) * 4 + 0x7d8) & (1 << (temp_v18 & 0x1f))) != 0) {
        temp_v0 = (unsigned int)*(unsigned char *)(temp_v18 + temp_v17 + 0x426);
        puVar18 = (unsigned int *)(temp_v17 + temp_v18 * 4 + 0x4e4);
        if ((temp_v0 != 0) && (temp_v5 = *puVar18, temp_v5 != puVar8[temp_v18 + 0x403])) {
          if (DAT_004652a0 < DAT_004652a4) {
            puVar14 = DAT_004652a0 + 1;
            *DAT_004652a0 = temp_v5;
            DAT_004652a0 = DAT_004652a0 + 2;
            *puVar14 = *(unsigned int *)((&DAT_004652bc)[temp_v14] * 4 + 0x4e4f54) | (temp_v0 << 0x10);
          }
          puVar8[temp_v18 + 0x403] = *puVar18;
        }
        temp_v9 = temp_v17 + ((&DAT_004652bc)[temp_v14] >> 5) * 4;
        *(unsigned int *)(temp_v9 + 0x7d8) =
             *(unsigned int *)(temp_v9 + 0x7d8) & ~(1 << ((&DAT_004652bc)[temp_v14] & 0x1fU));
      }
      temp_v14 = temp_v14 + 1;
    } while ((&DAT_004652bc)[temp_v14] != 0xbd);
  }
  puVar8 = DAT_004652b4;
  if ((((unsigned int)temp_v56 & 0x20) != 0) && (temp_v14 = 0, DAT_0046534c != 0xbd)) {
    temp_v36 = DAT_004652b4;
    do {
      temp_v18 = (&DAT_0046534c)[temp_v14];
      if ((*(unsigned int *)(temp_v17 + ((int)temp_v18 >> 5) * 4 + 0x7d8) & (1 << (temp_v18 & 0x1f))) != 0) {
        temp_v0 = (unsigned int)*(unsigned char *)(temp_v18 + temp_v17 + 0x426);
        puVar18 = (unsigned int *)(temp_v17 + temp_v18 * 4 + 0x4e4);
        if ((temp_v0 != 0) && (temp_v5 = *puVar18, temp_v5 != puVar8[temp_v18 + 0x403])) {
          if (DAT_004652a0 < DAT_004652a4) {
            puVar14 = DAT_004652a0 + 1;
            *DAT_004652a0 = temp_v5;
            DAT_004652a0 = DAT_004652a0 + 2;
            *puVar14 = *(unsigned int *)((&DAT_0046534c)[temp_v14] * 4 + 0x4e4f54) | (temp_v0 << 0x10);
          }
          puVar8[temp_v18 + 0x403] = *puVar18;
        }
        temp_v9 = temp_v17 + ((&DAT_0046534c)[temp_v14] >> 5) * 4;
        *(unsigned int *)(temp_v9 + 0x7d8) =
             *(unsigned int *)(temp_v9 + 0x7d8) & ~(1 << ((&DAT_0046534c)[temp_v14] & 0x1fU));
      }
      temp_v14 = temp_v14 + 1;
    } while ((&DAT_0046534c)[temp_v14] != 0xbd);
  }
  if (((unsigned int)temp_v56 & 0x40) != 0) {
    temp_v33 = 0x4580000045000000;
    if (((*(unsigned int *)(temp_v17 + 0x590) & 1) != 0) && ((*temp_v55 & 0x4008) != 0)) {
      temp_v32 = 0x44ffe000;
      temp_v18 = 0;
      do {
        if ((((*(unsigned int *)(temp_v17 + 0xa0c) >> (temp_v18 & 0xff)) & 1) != 0) &&
           (((*(unsigned int *)(temp_v17 + 0x7c0) >> (*(unsigned int *)(temp_v18 * 4 + 0x40b4e0) & 0xff)) & 1) == 0)) {
          temp_v14 = *(int *)(temp_v17 + temp_v18 * 4 + 0x9f4);
          if ((temp_v14 == -1) ||
             ((temp_v0 = puVar1[temp_v14 + 0x1d], temp_v0 == 0 || (temp_v14 = FUN_002aa908(), temp_v14 == 0)))
             ) break;
          if (puVar1[temp_v18 + 0x43] == temp_v0) {
            if (puVar1[temp_v18 + 100] != 0) {
              if (DAT_004652a0 < DAT_004652a4) {
                *DAT_004652a0 = puVar1[temp_v18 + 0x85] | (*(int *)(temp_v18 * 4 + 0x40b4f8) << 8);
                DAT_004652a0[1] = 0xf01c5;
                DAT_004652a0 = DAT_004652a0 + 2;
              }
              FUN_002aaa1c(0x1c8,puVar1[temp_v18 + 100],
                           *(int *)(temp_v14 + 0x804) + puVar1[temp_v18 + 0x85] * 4);
              puVar1[temp_v18 + 100] = 0;
            }
          }
          else {
            if (puVar1[temp_v18 + 100] != 0) {
              puVar1[temp_v18 + 100] = 0;
            }
            puVar1[temp_v18 + 0x43] = temp_v0;
            temp_v38 = (unsigned int *)(temp_v14 + 0x81c);
            if ((*(unsigned int *)(temp_v14 + 0x81c) & 1) != 0) {
              if (*(int *)(temp_v14 + 0x804) == 0) {
                if (DAT_0044e330 == (romwright_code *)0x0) {
                  temp_v25 = 0;
                }
                else {
                  temp_v25 = (*DAT_0044e330)(0x10000,0x100,0,0x400);
                }
                *(unsigned int *)(temp_v14 + 0x804) = temp_v25;
              }
              temp_v9 = 0;
              do {
                temp_v10 = temp_v14 + temp_v9 * 4;
                temp_v29 = *(float *)(temp_v10 + 4);
                temp_v27 = (float)((unsigned long long)temp_v30 >> 0x20);
                if ((temp_v29 <= temp_v27) || ((unsigned int)romwright_fabs_4(temp_v29) >> 0x17 == 0xff)) {
                  temp_v0 = 0;
                }
                else {
                  temp_v29 = temp_v29 * (float)((unsigned long long)temp_v33 >> 0x20);
                  temp_v0 = 0xfff;
                  if ((int)temp_v29 < 0x45800000) {
                    temp_v0 = VectorFloatToUnsigned(temp_v29,3);
                  }
                }
                *(unsigned int *)(*(int *)(temp_v14 + 0x804) + temp_v9 * 4) = temp_v0;
                temp_v29 = *(float *)(temp_v10 + 0x404);
                if (temp_v29 == temp_v27 || (unsigned int)romwright_fabs_4(temp_v29) >> 0x17 == 0xff) {
                  temp_v5 = 0;
                }
                else {
                  temp_v29 = temp_v29 * (float)temp_v33;
                  if (temp_v29 < temp_v27) {
                    temp_v29 = -temp_v29;
                    temp_v5 = 0x800;
                  }
                  else {
                    temp_v5 = 0;
                  }
                  if ((int)temp_v29 >= 0x45000000) {
                    temp_v29 = (float)temp_v32;
                  }
                  temp_v20 = VectorFloatToUnsigned(temp_v29,3);
                  temp_v5 = temp_v5 | temp_v20;
                }
                *(unsigned int *)(*(int *)(temp_v14 + 0x804) + temp_v9 * 4) = temp_v0 | (temp_v5 << 0xc);
                temp_v9 = temp_v9 + 1;
              } while (temp_v9 < 0x100);
              *temp_v38 = *(unsigned int *)(temp_v14 + 0x81c) & 0xfffffffe;
            }
            if (DAT_004652a0 < DAT_004652a4) {
              temp_v9 = *(int *)(temp_v18 * 4 + 0x40b4f8);
              DAT_004652a0[1] = 0xf01c5;
              *DAT_004652a0 = temp_v9 << 8;
              DAT_004652a0 = DAT_004652a0 + 2;
            }
            FUN_002aaa1c(0x1c8,0x100,*(unsigned int *)(temp_v14 + 0x804));
            temp_v53 = 1;
          }
        }
        temp_v18 = temp_v18 + 1;
      } while ((int)temp_v18 < 6);
      temp_v14 = 0;
      do {
        temp_v9 = temp_v17 + temp_v14 * 0x70;
        if (*(char *)(temp_v9 + 0xa20) != '\0') {
          if ((*(int *)(temp_v17 + 0xa0c) << 0x19 < 0) &&
             (((*(unsigned int *)(temp_v17 + 0x7c0) >> ((temp_v14 + 8U) & 0xff)) & 1) == 0)) {
            temp_v18 = puVar1[*(int *)(temp_v9 + 0xa80) + 0x1d];
            temp_v10 = FUN_002aa908();
            if (puVar1[temp_v14 + 0x49] == temp_v18) {
              if (puVar1[temp_v14 + 0x6a] != 0) {
                if (DAT_004652a0 < DAT_004652a4) {
                  *DAT_004652a0 = puVar1[temp_v14 + 0x8b] | (temp_v14 * 0x100 + 0x800U);
                  DAT_004652a0[1] = 0xf01c5;
                  DAT_004652a0 = DAT_004652a0 + 2;
                }
                FUN_002aaa1c(0x1c8,puVar1[temp_v14 + 0x6a],
                             *(int *)(temp_v10 + 0x804) + puVar1[temp_v14 + 0x8b] * 4);
                puVar1[temp_v14 + 0x6a] = 0;
              }
            }
            else {
              if (puVar1[temp_v14 + 0x6a] != 0) {
                puVar1[temp_v14 + 0x6a] = 0;
              }
              puVar1[temp_v14 + 0x49] = temp_v18;
              if ((*(unsigned int *)(temp_v10 + 0x81c) & 1) != 0) {
                if (*(int *)(temp_v10 + 0x804) == 0) {
                  if (DAT_0044e330 == (romwright_code *)0x0) {
                    temp_v25 = 0;
                  }
                  else {
                    temp_v25 = (*DAT_0044e330)(0x10000,0x100,0,0x400);
                  }
                  *(unsigned int *)(temp_v10 + 0x804) = temp_v25;
                }
                temp_v13 = 0;
                do {
                  temp_v21 = temp_v10 + temp_v13 * 4;
                  temp_v29 = *(float *)(temp_v21 + 4);
                  temp_v27 = (float)((unsigned long long)temp_v30 >> 0x20);
                  if ((temp_v29 <= temp_v27) || ((unsigned int)romwright_fabs_4(temp_v29) >> 0x17 == 0xff)) {
                    temp_v18 = 0;
                  }
                  else {
                    temp_v29 = temp_v29 * (float)((unsigned long long)temp_v33 >> 0x20);
                    temp_v18 = 0xfff;
                    if ((int)temp_v29 < 0x45800000) {
                      temp_v18 = VectorFloatToUnsigned(temp_v29,3);
                    }
                  }
                  *(unsigned int *)(*(int *)(temp_v10 + 0x804) + temp_v13 * 4) = temp_v18;
                  temp_v29 = *(float *)(temp_v21 + 0x404);
                  if (temp_v29 == temp_v27 || (unsigned int)romwright_fabs_4(temp_v29) >> 0x17 == 0xff) {
                    temp_v0 = 0;
                  }
                  else {
                    temp_v29 = temp_v29 * (float)temp_v33;
                    if (temp_v29 < temp_v27) {
                      temp_v29 = -temp_v29;
                      temp_v0 = 0x800;
                    }
                    else {
                      temp_v0 = 0;
                    }
                    if ((int)temp_v29 >= 0x45000000) {
                      temp_v29 = (float)temp_v32;
                    }
                    temp_v30 = CONCAT44(temp_v27,temp_v29);
                    temp_v5 = VectorFloatToUnsigned(temp_v29,3);
                    temp_v0 = temp_v0 | temp_v5;
                  }
                  *(unsigned int *)(*(int *)(temp_v10 + 0x804) + temp_v13 * 4) = temp_v18 | (temp_v0 << 0xc);
                  temp_v13 = temp_v13 + 1;
                } while (temp_v13 < 0x100);
                *(unsigned int *)(temp_v10 + 0x81c) = *(unsigned int *)(temp_v10 + 0x81c) & 0xfffffffe;
              }
              if (DAT_004652a0 < DAT_004652a4) {
                DAT_004652a0[1] = 0xf01c5;
                *DAT_004652a0 = temp_v14 * 0x100 + 0x800;
                DAT_004652a0 = DAT_004652a0 + 2;
              }
              FUN_002aaa1c(0x1c8,0x100,*(unsigned int *)(temp_v10 + 0x804));
              temp_v53 = 1;
            }
          }
          if (((*(unsigned int *)(temp_v17 + 0x7c0) >> ((temp_v14 + 0x18U) & 0xff)) & 1) == 0) {
            temp_v18 = puVar1[*(int *)(temp_v9 + 0xa8c) + 0x1d];
            temp_v9 = FUN_002aa908();
            if (puVar1[temp_v14 + 0x51] == temp_v18) {
              if (puVar1[temp_v14 + 0x72] != 0) {
                if (DAT_004652a0 < DAT_004652a4) {
                  temp_v18 = puVar1[temp_v14 + 0x93];
                  DAT_004652a0[1] = 0xf01c5;
                  *DAT_004652a0 = temp_v18 | (temp_v14 * 0x100 + 0x1000U);
                  DAT_004652a0 = DAT_004652a0 + 2;
                }
                FUN_002aaa1c(0x1c8,puVar1[temp_v14 + 0x72],
                             *(int *)(temp_v9 + 0x804) + puVar1[temp_v14 + 0x93] * 4);
                puVar1[temp_v14 + 0x72] = 0;
              }
            }
            else {
              if (puVar1[temp_v14 + 0x72] != 0) {
                puVar1[temp_v14 + 0x72] = 0;
              }
              puVar1[temp_v14 + 0x51] = temp_v18;
              if ((*(unsigned int *)(temp_v9 + 0x81c) & 1) != 0) {
                if (*(int *)(temp_v9 + 0x804) == 0) {
                  if (DAT_0044e330 == (romwright_code *)0x0) {
                    temp_v25 = 0;
                  }
                  else {
                    temp_v25 = (*DAT_0044e330)(0x10000,0x100,0,0x400);
                  }
                  *(unsigned int *)(temp_v9 + 0x804) = temp_v25;
                }
                temp_v10 = 0;
                do {
                  temp_v13 = temp_v9 + temp_v10 * 4;
                  temp_v29 = *(float *)(temp_v13 + 4);
                  temp_v27 = (float)((unsigned long long)temp_v30 >> 0x20);
                  if ((temp_v29 <= temp_v27) || ((unsigned int)romwright_fabs_4(temp_v29) >> 0x17 == 0xff)) {
                    temp_v18 = 0;
                  }
                  else {
                    temp_v29 = temp_v29 * (float)((unsigned long long)temp_v33 >> 0x20);
                    temp_v18 = 0xfff;
                    if ((int)temp_v29 < 0x45800000) {
                      temp_v18 = VectorFloatToUnsigned(temp_v29,3);
                    }
                  }
                  *(unsigned int *)(*(int *)(temp_v9 + 0x804) + temp_v10 * 4) = temp_v18;
                  temp_v29 = *(float *)(temp_v13 + 0x404);
                  if (temp_v29 == temp_v27 || (unsigned int)romwright_fabs_4(temp_v29) >> 0x17 == 0xff) {
                    temp_v0 = 0;
                  }
                  else {
                    temp_v29 = temp_v29 * (float)temp_v33;
                    if (temp_v29 < temp_v27) {
                      temp_v29 = -temp_v29;
                      temp_v0 = 0x800;
                    }
                    else {
                      temp_v0 = 0;
                    }
                    if ((int)temp_v29 >= 0x45000000) {
                      temp_v29 = (float)temp_v32;
                    }
                    temp_v5 = VectorFloatToUnsigned(temp_v29,3);
                    temp_v0 = temp_v0 | temp_v5;
                  }
                  *(unsigned int *)(*(int *)(temp_v9 + 0x804) + temp_v10 * 4) = temp_v18 | (temp_v0 << 0xc);
                  temp_v10 = temp_v10 + 1;
                } while (temp_v10 < 0x100);
                *(unsigned int *)(temp_v9 + 0x81c) = *(unsigned int *)(temp_v9 + 0x81c) & 0xfffffffe;
              }
              if (DAT_004652a0 < DAT_004652a4) {
                DAT_004652a0[1] = 0xf01c5;
                *DAT_004652a0 = temp_v14 * 0x100 + 0x1000;
                DAT_004652a0 = DAT_004652a0 + 2;
              }
              FUN_002aaa1c(0x1c8,0x100,*(unsigned int *)(temp_v9 + 0x804));
              temp_v53 = 1;
            }
          }
        }
        temp_v14 = temp_v14 + 1;
      } while (temp_v14 < 8);
    }
    temp_v29 = (float)((unsigned long long)temp_v30 >> 0x20);
    temp_v32 = 0x437f0000;
    if ((*(int *)(temp_v17 + 0xe0c) != 0) && ((*temp_v55 & 0x4020) != 0)) {
      temp_v14 = 0;
      temp_v54[0] = 2;
      temp_v54[1] = 3;
      temp_v35 = 0x457ff000;
      temp_v32 = 0x3f800000437f0000;
      do {
        temp_v18 = puVar1[*(int *)(temp_v17 + temp_v14 * 4 + 0xdf0) + 0x1d];
        temp_v9 = FUN_002aa908();
        if (puVar1[temp_v14 + 0x59] == temp_v18) {
          if (puVar1[temp_v14 + 0x7a] != 0) {
            if (DAT_004652a0 < DAT_004652a4) {
              temp_v10 = temp_v54[temp_v14];
              temp_v18 = puVar1[temp_v14 + 0x9b];
              DAT_004652a0[1] = 0xf00af;
              *DAT_004652a0 = temp_v18 | (temp_v10 << 8);
              DAT_004652a0 = DAT_004652a0 + 2;
            }
            FUN_002aaa1c(0xb0,puVar1[temp_v14 + 0x7a],
                         *(int *)(temp_v9 + 0x810) + puVar1[temp_v14 + 0x9b] * 4);
            puVar1[temp_v14 + 0x7a] = 0;
          }
        }
        else {
          if (puVar1[temp_v14 + 0x7a] != 0) {
            puVar1[temp_v14 + 0x7a] = 0;
          }
          puVar1[temp_v14 + 0x59] = temp_v18;
          if ((*(unsigned int *)(temp_v9 + 0x81c) & 8) != 0) {
            if (*(int *)(temp_v9 + 0x810) == 0) {
              if (DAT_0044e330 == (romwright_code *)0x0) {
                temp_v25 = 0;
              }
              else {
                temp_v25 = (*DAT_0044e330)(0x10000,0x100,0,0x200);
              }
              *(unsigned int *)(temp_v9 + 0x810) = temp_v25;
            }
            temp_v10 = 0;
            do {
              temp_v13 = temp_v9 + temp_v10 * 4;
              temp_v29 = *(float *)(temp_v13 + 4);
              temp_v27 = (float)((unsigned long long)temp_v30 >> 0x20);
              if ((temp_v29 <= temp_v27) || ((unsigned int)romwright_fabs_4(temp_v29) >> 0x17 == 0xff)) {
                temp_v18 = 0;
              }
              else {
                temp_v29 = temp_v29 * (float)((unsigned long long)temp_v33 >> 0x20);
                temp_v18 = 0xfff;
                if ((int)temp_v29 < 0x45800000) {
                  temp_v18 = VectorFloatToUnsigned(temp_v29,3);
                }
              }
              *(unsigned int *)(*(int *)(temp_v9 + 0x810) + temp_v10 * 4) = temp_v18;
              temp_v29 = *(float *)(temp_v13 + 0x204);
              if (temp_v29 == temp_v27 || (unsigned int)romwright_fabs_4(temp_v29) >> 0x17 == 0xff) {
                temp_v13 = 0;
              }
              else {
                temp_v26 = (float)temp_v33;
                temp_v28 = (temp_v29 + (float)((unsigned long long)temp_v32 >> 0x20)) * temp_v26;
                temp_v29 = temp_v28;
                if (temp_v28 < temp_v27) {
                  temp_v29 = temp_v27;
                }
                temp_v30 = CONCAT44(temp_v27,temp_v29);
                if (temp_v27 <= temp_v28) {
                  temp_v22 = SBORROW4((int)temp_v29,0x45800000);
                  temp_v13 = (int)temp_v29 - 0x45800000;
                  if ((int)temp_v29 >= 0x45800000) {
                    temp_v30 = CONCAT44(temp_v27,(int)temp_v35);
                  }
                  else {
                    temp_v22 = SBORROW4((int)temp_v29,0x45000000);
                    temp_v13 = (int)temp_v29 - 0x45000000;
                  }
                  if (temp_v13 < 0 == temp_v22) {
                    temp_v13 = VectorFloatToUnsigned((float)temp_v30 - temp_v26,3);
                  }
                  else {
                    temp_v13 = VectorFloatToUnsigned((float)temp_v30 + temp_v26,3);
                  }
                }
                else {
                  temp_v13 = VectorFloatToUnsigned((float)temp_v30 + temp_v26,3);
                }
              }
              *(unsigned int *)(*(int *)(temp_v9 + 0x810) + temp_v10 * 4) = temp_v18 | (temp_v13 << 0xc);
              temp_v10 = temp_v10 + 1;
            } while (temp_v10 < 0x80);
            *(unsigned int *)(temp_v9 + 0x81c) = *(unsigned int *)(temp_v9 + 0x81c) & 0xfffffff7;
          }
          if (DAT_004652a0 < DAT_004652a4) {
            temp_v10 = temp_v54[temp_v14];
            DAT_004652a0[1] = 0xf00af;
            *DAT_004652a0 = temp_v10 << 8;
            DAT_004652a0 = DAT_004652a0 + 2;
          }
          FUN_002aaa1c(0xb0,0x80,*(unsigned int *)(temp_v9 + 0x810));
          temp_v53 = 1;
        }
        temp_v29 = (float)temp_v35;
        temp_v14 = temp_v14 + 1;
      } while ((temp_v14 < 2) && ((temp_v14 != 1 || ((*(unsigned int *)(temp_v17 + 0x594) & 0x4000) != 0))));
      if ((*(unsigned int *)(temp_v17 + 0x594) & 0x8000) != 0) {
        temp_v18 = puVar1[*(int *)(temp_v17 + 0xdf8) + 0x1d];
        temp_v14 = FUN_002aa908();
        if (puVar1[0x5b] == temp_v18) {
          if (puVar1[0x7c] != 0) {
            if (DAT_004652a0 < DAT_004652a4) {
              temp_v18 = puVar1[0x9d];
              DAT_004652a0[1] = 0xf00af;
              *DAT_004652a0 = temp_v18;
              DAT_004652a0 = DAT_004652a0 + 2;
            }
            FUN_002aaa1c(0xb0,puVar1[0x7c],*(int *)(temp_v14 + 0x814) + puVar1[0x9d] * 4);
            puVar1[0x7c] = 0;
          }
        }
        else {
          if (puVar1[0x7c] != 0) {
            puVar1[0x7c] = 0;
          }
          puVar1[0x5b] = temp_v18;
          if ((*(unsigned int *)(temp_v14 + 0x81c) & 0x10) != 0) {
            if (*(int *)(temp_v14 + 0x814) == 0) {
              if (DAT_0044e330 == (romwright_code *)0x0) {
                temp_v25 = 0;
              }
              else {
                temp_v25 = (*DAT_0044e330)(0x10000,0x100,0,0x200);
              }
              *(unsigned int *)(temp_v14 + 0x814) = temp_v25;
            }
            temp_v9 = 0;
            do {
              temp_v10 = temp_v14 + temp_v9 * 4;
              temp_v28 = *(float *)(temp_v10 + 4);
              temp_v27 = (float)((unsigned long long)temp_v30 >> 0x20);
              if ((temp_v28 <= temp_v27) || ((unsigned int)romwright_fabs_4(temp_v28) >> 0x17 == 0xff)) {
                temp_v18 = 0;
              }
              else {
                temp_v28 = temp_v28 * (float)((unsigned long long)temp_v33 >> 0x20);
                temp_v18 = 0xfff;
                if ((int)temp_v28 < 0x45800000) {
                  temp_v18 = VectorFloatToUnsigned(temp_v28,3);
                }
              }
              *(unsigned int *)(*(int *)(temp_v14 + 0x814) + temp_v9 * 4) = temp_v18;
              temp_v28 = *(float *)(temp_v10 + 0x204);
              if (temp_v28 == temp_v27 || (unsigned int)romwright_fabs_4(temp_v28) >> 0x17 == 0xff) {
                temp_v10 = 0;
              }
              else {
                temp_v26 = (float)temp_v33;
                temp_v28 = (temp_v28 + (float)((unsigned long long)temp_v32 >> 0x20)) * temp_v26;
                if (temp_v27 <= temp_v28) {
                  temp_v22 = SBORROW4((int)temp_v28,0x45800000);
                  temp_v10 = (int)temp_v28 - 0x45800000;
                  temp_v27 = temp_v29;
                  if ((int)temp_v28 < 0x45800000) {
                    temp_v22 = SBORROW4((int)temp_v28,0x45000000);
                    temp_v10 = (int)temp_v28 - 0x45000000;
                    temp_v27 = temp_v28;
                  }
                  if (temp_v10 < 0 == temp_v22) {
                    temp_v10 = VectorFloatToUnsigned(temp_v27 - temp_v26,3);
                  }
                  else {
                    temp_v10 = VectorFloatToUnsigned(temp_v27 + temp_v26,3);
                  }
                }
                else {
                  temp_v10 = VectorFloatToUnsigned(temp_v27 + temp_v26,3);
                }
              }
              *(unsigned int *)(*(int *)(temp_v14 + 0x814) + temp_v9 * 4) = temp_v18 | (temp_v10 << 0xc);
              temp_v9 = temp_v9 + 1;
            } while (temp_v9 < 0x80);
            *(unsigned int *)(temp_v14 + 0x81c) = *(unsigned int *)(temp_v14 + 0x81c) & 0xffffffef;
          }
          if (DAT_004652a0 < DAT_004652a4) {
            DAT_004652a0[1] = 0xf00af;
            *DAT_004652a0 = 0;
            DAT_004652a0 = DAT_004652a0 + 2;
          }
          FUN_002aaa1c(0xb0,0x80,*(unsigned int *)(temp_v14 + 0x814));
          temp_v53 = 1;
        }
      }
      temp_v29 = (float)((unsigned long long)temp_v30 >> 0x20);
      temp_v14 = 0;
      do {
        if (puVar1[*(int *)(temp_v17 + temp_v14 * 4 + 0xdfc) + 0x1d] != puVar1[temp_v14 + 0x5c]) break;
        temp_v14 = temp_v14 + 1;
      } while (temp_v14 < 4);
      if (temp_v14 != 4) {
        temp_v14 = 0;
        temp_v35 = 0x3f00000043000000;
        do {
          temp_v9 = FUN_002aa908(*(unsigned int *)(temp_v17 + temp_v14 * 4 + 0xdfc));
          if (puVar1[temp_v14 + 0x7d] != 0) {
            puVar1[temp_v14 + 0x7d] = 0;
          }
          if ((*(unsigned int *)(temp_v9 + 0x81c) & 0x20) != 0) {
            if (*(int *)(temp_v9 + 0x818) == 0) {
              if (DAT_0044e330 == (romwright_code *)0x0) {
                temp_v25 = 0;
              }
              else {
                temp_v25 = (*DAT_0044e330)(0x10000,0x100,0,0x200);
              }
              *(unsigned int *)(temp_v9 + 0x818) = temp_v25;
            }
            temp_v10 = 0;
            do {
              temp_v29 = *(float *)(temp_v9 + temp_v10 * 4 + 4);
              temp_v27 = (float)((unsigned long long)temp_v32 >> 0x20);
              if ((int)temp_v29 >= 0x3f800001) {
                temp_v29 = temp_v27;
              }
              temp_v25 = VectorFloatToUnsigned
                                 ((float)((unsigned long long)temp_v35 >> 0x20) + temp_v29 * (float)temp_v32,3);
              *(char *)(*(int *)(temp_v9 + 0x818) + temp_v10) = (char)temp_v25;
              temp_v10 = temp_v10 + 1;
            } while (temp_v10 < 0x100);
            if (temp_v10 < 0x1ff) {
              temp_v29 = (float)((unsigned long long)temp_v30 >> 0x20);
              temp_v30 = CONCAT44(temp_v29,temp_v29);
              do {
                temp_v28 = *(float *)(temp_v9 + temp_v10 * 4 + 4);
                if (temp_v28 == temp_v29 || (unsigned int)romwright_fabs_4(temp_v28) >> 0x17 == 0xff) {
                  *(unsigned char *)(*(int *)(temp_v9 + 0x818) + temp_v10) = 0;
                }
                else {
                  temp_v34 = (float)temp_v35;
                  temp_v26 = (temp_v28 + temp_v27) * temp_v34;
                  temp_v28 = temp_v29;
                  if (temp_v29 <= temp_v26) {
                    temp_v22 = SBORROW4((int)temp_v26,0x43800000);
                    temp_v13 = (int)temp_v26 - 0x43800000;
                    temp_v28 = (float)temp_v32;
                    if ((int)temp_v26 < 0x43800000) {
                      temp_v22 = SBORROW4((int)temp_v26,0x43000000);
                      temp_v13 = (int)temp_v26 - 0x43000000;
                      temp_v28 = temp_v26;
                    }
                    if (temp_v13 < 0 == temp_v22) {
                      temp_v25 = VectorFloatToUnsigned(temp_v28 - temp_v34,3);
                      *(char *)(*(int *)(temp_v9 + 0x818) + temp_v10) = (char)temp_v25;
                    }
                    else {
                      temp_v25 = VectorFloatToUnsigned(temp_v28 + temp_v34,3);
                      *(char *)(*(int *)(temp_v9 + 0x818) + temp_v10) = (char)temp_v25;
                    }
                  }
                  else {
                    temp_v25 = VectorFloatToUnsigned(temp_v28 + temp_v34,3);
                    *(char *)(*(int *)(temp_v9 + 0x818) + temp_v10) = (char)temp_v25;
                  }
                }
                temp_v10 = temp_v10 + 1;
              } while (temp_v10 < 0x1ff);
            }
            *(unsigned char *)(*(int *)(temp_v9 + 0x818) + temp_v10) = 0;
            *(unsigned int *)(temp_v9 + 0x81c) = *(unsigned int *)(temp_v9 + 0x81c) & 0xffffffdf;
          }
          temp_v29 = (float)((unsigned long long)temp_v30 >> 0x20);
          temp_v10 = 0;
          do {
            (&uStack_878)[temp_v10] =
                 ((&uStack_878)[temp_v10] & ~(0xff << ((temp_v14 << 3) & 0xffU))) |
                 ((unsigned int)*(unsigned char *)(*(int *)(temp_v9 + 0x818) + temp_v10) << ((temp_v14 << 3) & 0xffU));
            temp_v10 = temp_v10 + 1;
          } while (temp_v10 < 0x200);
          temp_v14 = temp_v14 + 1;
        } while (temp_v14 < 4);
        if (temp_v14 == 4) {
          if (DAT_004652a0 < DAT_004652a4) {
            DAT_004652a0[1] = 0xf00af;
            *DAT_004652a0 = 0x400;
            DAT_004652a0 = DAT_004652a0 + 2;
          }
          FUN_002aaa1c(0xb0,0x100,&uStack_878);
          if (DAT_004652a0 < DAT_004652a4) {
            *DAT_004652a0 = 0x500;
            DAT_004652a0[1] = 0xf00af;
            DAT_004652a0 = DAT_004652a0 + 2;
          }
          FUN_002aaa1c(0xb0,0x100,temp_v52);
          temp_v53 = 1;
          temp_v14 = 0;
          do {
            temp_v9 = temp_v14 + 1;
            puVar1[temp_v14 + 0x5c] = puVar1[*(int *)(temp_v17 + temp_v14 * 4 + 0xdfc) + 0x1d];
            temp_v14 = temp_v9;
          } while (temp_v9 < 4);
        }
      }
      else {
        temp_v18 = puVar1[0x7d];
        temp_v22 = temp_v18 == 0;
        if (temp_v22) {
          temp_v18 = puVar1[0x7e];
        }
        if (temp_v22 && temp_v18 == 0) {
          temp_v18 = puVar1[0x7f];
          temp_v22 = temp_v18 == 0;
          if (temp_v22) {
            temp_v18 = puVar1[0x80];
          }
          if (temp_v22 && temp_v18 == 0) goto LAB_0013671c;
        }
        temp_v0 = 0;
        temp_v18 = 0x200;
        temp_v14 = 0;
        do {
          temp_v5 = puVar1[temp_v14 + 0x7d];
          if (temp_v5 != 0) {
            temp_v20 = puVar1[temp_v14 + 0x9e];
            puVar1[temp_v14 + 0x7d] = 0;
            if (temp_v20 < temp_v18) {
              temp_v18 = temp_v20;
            }
            temp_v5 = (temp_v5 + temp_v20) - 1;
            if (temp_v0 < temp_v5) {
              temp_v0 = temp_v5;
            }
          }
          temp_v14 = temp_v14 + 1;
        } while (temp_v14 < 4);
        temp_v14 = 0;
        do {
          temp_v9 = FUN_002aa908(*(unsigned int *)(temp_v17 + temp_v14 * 4 + 0xdfc));
          temp_v29 = (float)((unsigned long long)temp_v30 >> 0x20);
          if (temp_v18 <= temp_v0) {
            temp_v5 = temp_v18;
            do {
              (&uStack_878)[temp_v5] =
                   ((&uStack_878)[temp_v5] & ~(0xff << ((temp_v14 << 3) & 0xffU))) |
                   ((unsigned int)*(unsigned char *)(*(int *)(temp_v9 + 0x818) + temp_v5) << ((temp_v14 << 3) & 0xffU));
              temp_v5 = temp_v5 + 1;
            } while (temp_v5 <= temp_v0);
          }
          temp_v14 = temp_v14 + 1;
        } while (temp_v14 < 4);
        if (temp_v18 < 0x100) {
          if (temp_v0 >= 0x100) {
            if (DAT_004652a0 < DAT_004652a4) {
              DAT_004652a0[1] = 0xf00af;
              *DAT_004652a0 = temp_v18 | 0x400;
              DAT_004652a0 = DAT_004652a0 + 2;
            }
            FUN_002aaa1c(0xb0,0x100 - temp_v18,&uStack_878 + temp_v18);
            if (DAT_004652a0 < DAT_004652a4) {
              DAT_004652a0[1] = 0xf00af;
              *DAT_004652a0 = 0x500;
              DAT_004652a0 = DAT_004652a0 + 2;
            }
            FUN_002aaa1c(0xb0,temp_v0 - 0xff,temp_v52);
          }
          else {
            if (DAT_004652a0 < DAT_004652a4) {
              DAT_004652a0[1] = 0xf00af;
              *DAT_004652a0 = temp_v18 | 0x400;
              DAT_004652a0 = DAT_004652a0 + 2;
            }
            FUN_002aaa1c(0xb0,(temp_v0 - temp_v18) + 1,&uStack_878 + temp_v18);
          }
        }
        else {
          if (DAT_004652a0 < DAT_004652a4) {
            DAT_004652a0[1] = 0xf00af;
            *DAT_004652a0 = (temp_v18 - 0x100) | 0x500;
            DAT_004652a0 = DAT_004652a0 + 2;
          }
          FUN_002aaa1c(0xb0,(temp_v0 - temp_v18) + 1,&uStack_878 + temp_v18);
        }
      }
    }
LAB_0013671c:
    temp_v25 = (unsigned int)temp_v32;
    if (((*(unsigned int *)(temp_v17 + 0x624) & 7) != 0) && ((*temp_v55 & 0x4010) != 0)) {
      temp_v18 = puVar1[*(int *)(temp_v17 + 0xe64) + 0x1d];
      temp_v14 = FUN_002aa908();
      if (puVar1[0x60] == temp_v18) {
        if (puVar1[0x81] != 0) {
          if (DAT_004652a0 < DAT_004652a4) {
            *DAT_004652a0 = puVar1[0xa2];
            DAT_004652a0[1] = 0xf00e6;
            DAT_004652a0 = DAT_004652a0 + 2;
          }
          FUN_002aaa1c(0xe8,puVar1[0x81],*(int *)(temp_v14 + 0x808) + puVar1[0xa2] * 4);
          puVar1[0x81] = 0;
        }
      }
      else {
        if (puVar1[0x81] != 0) {
          puVar1[0x81] = 0;
        }
        puVar1[0x60] = temp_v18;
        if ((*(unsigned int *)(temp_v14 + 0x81c) & 2) != 0) {
          if (*(int *)(temp_v14 + 0x808) == 0) {
            if (DAT_0044e330 == (romwright_code *)0x0) {
              temp_v2 = 0;
            }
            else {
              temp_v2 = (*DAT_0044e330)(0x10000,0x100,0,0x200);
            }
            *(unsigned int *)(temp_v14 + 0x808) = temp_v2;
          }
          temp_v9 = 0;
          do {
            temp_v10 = temp_v14 + temp_v9 * 4;
            temp_v27 = *(float *)(temp_v10 + 0x204);
            if (temp_v27 == temp_v29 || (unsigned int)romwright_fabs_4(temp_v27) >> 0x17 == 0xff) {
              *(unsigned int *)(*(int *)(temp_v14 + 0x808) + temp_v9 * 4) = 0;
            }
            else {
              temp_v28 = (temp_v27 + 2.0f) * (float)temp_v33;
              temp_v26 = (float)((unsigned long long)temp_v33 >> 0x20);
              temp_v27 = temp_v29;
              if (temp_v29 <= temp_v28) {
                temp_v22 = SBORROW4((int)temp_v28,0x46000000);
                temp_v13 = (int)temp_v28 - 0x46000000;
                temp_v27 = 8191.0f;
                if ((int)temp_v28 < 0x46000000) {
                  temp_v22 = SBORROW4((int)temp_v28,0x45800000);
                  temp_v13 = (int)temp_v28 - 0x45800000;
                  temp_v27 = temp_v28;
                }
                if (temp_v13 < 0 == temp_v22) {
                  temp_v2 = VectorFloatToUnsigned(temp_v27 - temp_v26,3);
                  *(unsigned int *)(*(int *)(temp_v14 + 0x808) + temp_v9 * 4) = temp_v2;
                }
                else {
                  temp_v2 = VectorFloatToUnsigned(temp_v27 + temp_v26,3);
                  *(unsigned int *)(*(int *)(temp_v14 + 0x808) + temp_v9 * 4) = temp_v2;
                }
              }
              else {
                temp_v2 = VectorFloatToUnsigned(temp_v27 + temp_v26,3);
                *(unsigned int *)(*(int *)(temp_v14 + 0x808) + temp_v9 * 4) = temp_v2;
              }
            }
            temp_v27 = *(float *)(temp_v10 + 4);
            if ((temp_v27 <= temp_v29) || ((unsigned int)romwright_fabs_4(temp_v27) >> 0x17 == 0xff)) {
              temp_v10 = 0;
            }
            else {
              temp_v27 = temp_v27 * (float)temp_v33;
              temp_v10 = 0x7ff;
              if ((int)temp_v27 < 0x45000000) {
                temp_v10 = VectorFloatToUnsigned(temp_v27,3);
              }
            }
            *(unsigned int *)(*(int *)(temp_v14 + 0x808) + temp_v9 * 4) =
                 *(unsigned int *)(*(int *)(temp_v14 + 0x808) + temp_v9 * 4) | (temp_v10 << 0xd);
            temp_v9 = temp_v9 + 1;
          } while (temp_v9 < 0x80);
          *(unsigned int *)(temp_v14 + 0x81c) = *(unsigned int *)(temp_v14 + 0x81c) & 0xfffffffd;
        }
        if (DAT_004652a0 < DAT_004652a4) {
          *DAT_004652a0 = 0;
          DAT_004652a0[1] = 0xf00e6;
          DAT_004652a0 = DAT_004652a0 + 2;
        }
        FUN_002aaa1c(0xe8,0x80,*(unsigned int *)(temp_v14 + 0x808));
        temp_v53 = 1;
      }
    }
    if (((~*(unsigned int *)(temp_v17 + 0x624) & 7) == 0) && ((*temp_v55 & 0x2004000) != 0)) {
      temp_v14 = 0;
      do {
        if (puVar1[*(int *)(temp_v17 + temp_v14 * 4 + 0xe78) + 0x1d] != puVar1[temp_v14 + 0x61]) break;
        temp_v14 = temp_v14 + 1;
      } while (temp_v14 < 3);
      if (temp_v14 != 3) {
        temp_v14 = 0;
        temp_v31 = (unsigned long long)(unsigned int)temp_v29;
        temp_v37[0] = 0;
        temp_v37[1] = 0;
        temp_v37[2] = 0;
        temp_v38 = (unsigned int *)0x0;
        temp_v39 = 0;
        temp_v40 = 0;
        temp_v30 = romwright_piece_4_4(0x42fe0000,temp_v25);
        temp_v41[0] = 0;
        temp_v41[1] = 0;
        temp_v41[2] = 0;
        temp_v41[3] = 0;
        temp_v41[4] = 0;
        temp_v41[5] = 0;
        temp_v41[6] = 0;
        temp_v41[7] = 0;
        temp_v41[8] = 0;
        temp_v41[9] = 0;
        do {
          temp_v9 = FUN_002aa908(*(unsigned int *)(temp_v17 + temp_v14 * 4 + 0xe78));
          if ((*(unsigned int *)(temp_v9 + 0x81c) & 4) != 0) {
            if (*(int *)(temp_v9 + 0x80c) == 0) {
              if (DAT_0044e330 == (romwright_code *)0x0) {
                temp_v25 = 0;
              }
              else {
                temp_v25 = (*DAT_0044e330)(0x10000,0x100,0,0x40);
              }
              *(unsigned int *)(temp_v9 + 0x80c) = temp_v25;
            }
            temp_v10 = 0;
            do {
              temp_v13 = temp_v9 + temp_v10 * 4;
              temp_v29 = *(float *)(temp_v13 + 4) * (float)temp_v30;
              if ((temp_v29 <= (float)temp_v31) || ((unsigned int)romwright_fabs_4(temp_v29) >> 0x17 == 0xff)) {
                temp_v25 = 0;
              }
              else if ((int)temp_v29 < 0x43800000) {
                temp_v25 = VectorFloatToUnsigned(temp_v29,3);
              }
              else {
                temp_v25 = 0xff;
              }
              *(unsigned int *)(*(int *)(temp_v9 + 0x80c) + temp_v10 * 4) = temp_v25;
              temp_v21 = temp_v10 * 4 + 0x20;
              temp_v18 = VectorFloatToUnsigned
                                 (romwright_fabs_4(*(float *)(temp_v13 + 0x24) * (float)((unsigned long long)temp_v30 >> 0x20)
                                     ),3);
              *(unsigned int *)(*(int *)(temp_v9 + 0x80c) + temp_v21) = temp_v18 & 0x7f;
              if (*(float *)(temp_v13 + 0x24) < (float)temp_v31) {
                *(unsigned int *)(*(int *)(temp_v9 + 0x80c) + temp_v21) = (temp_v18 & 0x7f) | 0x80;
              }
              temp_v10 = temp_v10 + 1;
            } while (temp_v10 < 8);
            *(unsigned int *)(temp_v9 + 0x81c) = *(unsigned int *)(temp_v9 + 0x81c) & 0xfffffffb;
          }
          temp_v10 = 0;
          do {
            temp_v37[temp_v10] =
                 temp_v37[temp_v10] |
                 (*(int *)(*(int *)(temp_v9 + 0x80c) + temp_v10 * 4 + 0x20) << ((temp_v14 << 3) & 0xffU));
            temp_v13 = temp_v10 + 1;
            temp_v41[temp_v10 + 2] =
                 temp_v41[temp_v10 + 2] |
                 (*(int *)(*(int *)(temp_v9 + 0x80c) + temp_v10 * 4) << ((temp_v14 << 3) & 0xffU));
            temp_v10 = temp_v13;
          } while (temp_v13 < 8);
          temp_v14 = temp_v14 + 1;
        } while (temp_v14 < 3);
        if (temp_v14 == 3) {
          if (temp_v53 == 0) {
            FUN_002aabb0(0xc0,0x2d);
          }
          if (DAT_004652a0 < DAT_004652a4) {
            *DAT_004652a0 = 0;
            DAT_004652a0[1] = 0xf0123;
            DAT_004652a0 = DAT_004652a0 + 2;
          }
          FUN_002aaa1c(0x124,0x10,temp_v37);
          if (DAT_004652a0 < DAT_004652a4) {
            *DAT_004652a0 = 0;
            DAT_004652a0[1] = 0x100;
            DAT_004652a0 = DAT_004652a0 + 2;
          }
          temp_v14 = 0;
          do {
            temp_v9 = temp_v14 + 1;
            puVar1[temp_v14 + 0x61] = puVar1[*(int *)(temp_v17 + temp_v14 * 4 + 0xe78) + 0x1d];
            temp_v14 = temp_v9;
          } while (temp_v9 < 3);
        }
      }
    }
  }
  if (((unsigned int)temp_v56 & 0x800) == 0) {
    return;
  }
  if (((*temp_v55 & 0x100) == 0) && (*(unsigned int *)(temp_v17 + 0xe38) == puVar1[0x191])) {
    return;
  }
  puVar1[0x191] = *(unsigned int *)(temp_v17 + 0xe38);
  temp_v17 = ((unsigned int)*(unsigned char *)((int)puVar1 + 0x656) << 2) | ((unsigned int)*(unsigned char *)((int)puVar1 + 0x657) << 3)
           | (unsigned int)(unsigned char)puVar1[0x195] | ((unsigned int)*(unsigned char *)((int)puVar1 + 0x655) << 1);
  if (DAT_004652a0 < DAT_004652a4) {
    *DAT_004652a0 = 1;
    DAT_004652a0[1] = 0xf0111;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    *DAT_004652a0 = 1;
    DAT_004652a0[1] = 0xf0110;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  temp_v18 = puVar1[0x191];
  if (temp_v18 != 0x6030) {
    if (temp_v18 != 0x6048) {
      if (temp_v18 != 0x6051) {
        return;
      }
      if (DAT_004652a0 < DAT_004652a4) {
        *DAT_004652a0 = 0xf;
        DAT_004652a0[1] = 0xf0113;
        DAT_004652a0 = DAT_004652a0 + 2;
      }
      if (DAT_004652a0 < DAT_004652a4) {
        DAT_004652a0[1] = 0xf0112;
        *DAT_004652a0 = 0xf;
        DAT_004652a0 = DAT_004652a0 + 2;
      }
      if (DAT_004652a0 < DAT_004652a4) {
        DAT_004652a0[1] = 0xf0114;
        *DAT_004652a0 = 3;
        DAT_004652a0 = DAT_004652a0 + 2;
      }
      if (DAT_004652a4 <= DAT_004652a0) {
        return;
      }
    }
    else {
      if (DAT_004652a0 < DAT_004652a4) {
        *DAT_004652a0 = 0xf;
        DAT_004652a0[1] = 0xf0113;
        DAT_004652a0 = DAT_004652a0 + 2;
      }
      if (DAT_004652a0 < DAT_004652a4) {
        DAT_004652a0[1] = 0xf0112;
        *DAT_004652a0 = 0xf;
        DAT_004652a0 = DAT_004652a0 + 2;
      }
      if (DAT_004652a0 < DAT_004652a4) {
        DAT_004652a0[1] = 0xf0114;
        *DAT_004652a0 = 0;
        DAT_004652a0 = DAT_004652a0 + 2;
      }
      if (DAT_004652a4 <= DAT_004652a0) {
        return;
      }
    }
    *DAT_004652a0 = 0;
    DAT_004652a0[1] = 0xf0115;
  }
  else {
    if (temp_v17 == 0) {
      temp_v22 = 0;
    }
    else {
      if ((puVar1[0x1a2] != 1) && ((char)puVar1[0x193] == '\0')) {
        temp_v22 = temp_v17 == 0xf;
        if (temp_v22) {
          temp_v17 = (unsigned int)*(unsigned char *)((int)puVar1 + 0x64d);
        }
        if (!temp_v22 || temp_v17 != 0) {
          temp_v17 = 1;
        }
      }
      else {
        temp_v17 = 1;
      }
      temp_v22 = 1;
    }
    temp_v23 = *(char *)((int)puVar1 + 0x64b) != '\0';
    if (temp_v23) {
      temp_v3 = '\x04';
      temp_v4 = (char)puVar1[0x196];
    }
    else {
      temp_v4 = '\0';
      temp_v3 = temp_v4;
    }
    temp_v24 = *(char *)((int)puVar1 + 0x64a) != '\0';
    if (temp_v24) {
      temp_v0 = 0x10;
      temp_v18 = puVar1[0x197];
    }
    else {
      temp_v18 = 0;
      temp_v0 = temp_v18;
    }
    if (temp_v24 && temp_v18 != 0) {
      temp_v18 = 0x20;
    }
    else {
      temp_v18 = 0;
    }
    if (DAT_004652a0 < DAT_004652a4) {
      if ((temp_v17 & 1) == 0) {
        temp_v5 = 0;
      }
      else {
        temp_v5 = 0xf;
      }
      DAT_004652a0[1] = 0xf0112;
      *DAT_004652a0 = temp_v5;
      DAT_004652a0 = DAT_004652a0 + 2;
    }
    if (DAT_004652a0 < DAT_004652a4) {
      if ((temp_v17 & 2) != 0 || temp_v22) {
        temp_v5 = 0xf;
      }
      else {
        temp_v5 = 0;
      }
      *DAT_004652a0 = temp_v5;
      DAT_004652a0[1] = 0xf0113;
      DAT_004652a0 = DAT_004652a0 + 2;
    }
    if (DAT_004652a0 < DAT_004652a4) {
      if (((temp_v17 & 4) == 0 && temp_v3 == '\0') ||
          (((temp_v17 & 10) == 0 && !temp_v22) && (!temp_v23 || temp_v4 == '\0'))) {
        temp_v5 = 0;
      }
      else {
        temp_v5 = 2;
      }
      DAT_004652a0[1] = 0xf0114;
      *DAT_004652a0 =
           temp_v5 | (((temp_v17 & 0x10) != 0 || temp_v0 != 0) &&
                   (((temp_v17 & 0x22) != 0 || temp_v22) || temp_v18 != 0));
      DAT_004652a0 = DAT_004652a0 + 2;
    }
    if (DAT_004652a4 <= DAT_004652a0) {
      return;
    }
    temp_v0 = 0;
    if ((temp_v17 & 8) != 0 || (temp_v23 && temp_v4 != '\0')) {
      temp_v0 = 2;
    }
    *DAT_004652a0 = temp_v0 | (((temp_v17 & 0x20) | temp_v18) >> 5);
    DAT_004652a0[1] = 0xf0115;
  }
  DAT_004652a0 = DAT_004652a0 + 2;
  return;
}
