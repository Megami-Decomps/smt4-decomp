/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039f238` (_code @ 0x39f238, 0x5f8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp1B8; /* 0x1b8: local_1b8 */
} param_1_stack;

extern unsigned char DAT_00404bd0; /* 0x404bd0 */
extern unsigned char DAT_00404c18; /* 0x404c18 */
extern unsigned char DAT_00404c60; /* 0x404c60 */
extern unsigned char DAT_00404ca8; /* 0x404ca8 */
extern int DAT_0044cdd8; /* 0x44cdd8 */
extern unsigned int DAT_0044ea00; /* 0x44ea00 */
extern int DAT_0049f91c; /* 0x49f91c */
extern int DAT_0049f920; /* 0x49f920 */
extern unsigned int DAT_0049f924; /* 0x49f924 */
extern signed char DAT_0049f941; /* 0x49f941 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: FUN_00231d4c. */
/* Supplied declaration required: FUN_00231f80. */
extern int FUN_002327c4(int);
/* Supplied declaration required: FUN_002327d8. */
extern unsigned int FUN_002327ec(void);
extern int FUN_002473d8(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_00247414. */
extern int FUN_002891e0(int);
extern int FUN_002931cc(unsigned int);
extern int FUN_002b89d4(void);
/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_002bef14. */
extern int FUN_002c0ba8(unsigned int);
/* Supplied declaration required: FUN_002c1abc. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: FUN_002c3ba8. */
extern int FUN_003423b8(int, unsigned int);
/* Supplied declaration required: FUN_003998e4. */
/* Supplied declaration required: FUN_00399f28. */
/* Supplied declaration required: FUN_0039bc48. */
/* Supplied declaration required: FUN_0039bf20. */
extern int FUN_0039fe8c(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_0039fedc. */


void FUN_0039f238(int param_1)

{
/* irregular: 11 unstructured edge(s); 2 goto(s); irregular input(s): in_fpscr; 17 native warning(s); review required */
  unsigned int temp_v0;
  short temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  unsigned char *puVar7;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int *puVar11;
  int temp_v8;
  int temp_v9;
  short *psVar14;
  unsigned int temp_v10;
  int temp_v11;
  unsigned char temp_v12;
  unsigned char temp_v13;
  unsigned int in_fpscr;
  float temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  unsigned long long temp_v21;
  float temp_v22 [18];
  unsigned char temp_v23 [72];
  unsigned char temp_v24 [72];
  unsigned char temp_v25 [72];
  unsigned char temp_v26 [72];
  unsigned char temp_v27 [4];
  unsigned char *temp_v28;
  
  if (DAT_0049f941 != '\0') {
    return;
  }
  temp_v4 = FUN_002b89d4();
  if ((((temp_v4 == 0) && ((*(unsigned int *)(param_1 + 0x10) & 0x20) == 0)) &&
      (*(char *)(param_1 + 0xc) != '\0')) && (DAT_0049f924 != 0xffffffff)) {
    FUN_002bcf58(temp_v23,&DAT_00404bd0,0x48);
    FUN_002bcf58(temp_v24,&DAT_00404c18,0x48);
    FUN_002bcf58(temp_v25,&DAT_00404c60,0x48);
    FUN_002bcf58(temp_v26,&DAT_00404ca8,0x48);
    puVar6 = (unsigned int *)FUN_002327ec();
    temp_v16 = romwright_piece_4_4(puVar6[2],*puVar6);
    temp_v4 = FUN_002327c4(param_1 + 0x162);
    FUN_002327d8(param_1 + 0x162);
    temp_v0 = DAT_0049f924;
    if ((int)*(short *)(param_1 + 0x121c0) != DAT_0049f924) {
      puVar7 = temp_v27;
      *(short *)(param_1 + 0x121c0) = (short)DAT_0049f924;
      FUN_00247414();
      temp_v5 = FUN_002473d8(temp_v27,0);
      temp_v6 = 0;
      if ((int)puVar7 > temp_v6) {
        do {
          psVar14 = (short *)(temp_v5 + temp_v6 * 0x14);
          if (*psVar14 == -1) break;
          if (*(unsigned char *)(psVar14 + 2) == temp_v0) {
            temp_v5 = temp_v5 + temp_v6 * 0x14;
            if (temp_v5 == 0) break;
            *(short *)(param_1 + 0x121be) = (short)*(char *)(temp_v5 + 5);
            break;
          }
          temp_v6 = temp_v6 + 1;
        } while ((int)puVar7 > temp_v6);
      }
      temp_v0 = DAT_0049f924;
      puVar7 = temp_v27;
      FUN_0039fedc();
      temp_v6 = FUN_0039fe8c(temp_v27,0);
      temp_v5 = 0;
      if (temp_v5 < (int)puVar7) {
        do {
          temp_v10 = *(unsigned int *)(temp_v6 + temp_v5 * 0x10);
          if (temp_v10 == 0xffffffff) break;
          if (temp_v10 == temp_v0) {
            if (temp_v6 + temp_v5 * 0x10 == 0) break;
            *(unsigned char *)(param_1 + 0x121bc) = 1;
            goto LAB_0039f3e8;
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < (int)puVar7);
      }
      *(unsigned char *)(param_1 + 0x121bc) = 0;
    }
LAB_0039f3e8:
    temp_v1 = *(short *)(param_1 + 0x121be);
    if (temp_v1 != 0) {
      if (temp_v1 != 1) {
        if (temp_v1 != 2) {
          if (temp_v1 != 3) {
            FUN_002bcf58(temp_v22,temp_v23,0x48);
          }
          else {
            FUN_002bcf58(temp_v22,temp_v26,0x48);
          }
        }
        else {
          FUN_002bcf58(temp_v22,temp_v25,0x48);
        }
      }
      else {
        FUN_002bcf58(temp_v22,temp_v24,0x48);
      }
    }
    else {
      FUN_002bcf58(temp_v22,temp_v23,0x48);
    }
    temp_v20 = 1000.0f;
    temp_v21 = 0x44834000;
    temp_v19 = 500.0f;
    temp_v28 = (unsigned char *)(param_1 + 0x5a8e);
    temp_v6 = 0;
    temp_v4 = param_1 + temp_v4 * 8;
    do {
      temp_v0 = DAT_0049f924;
      temp_v18 = (float)temp_v16;
      temp_v14 = temp_v20;
      if (DAT_0049f924 != 0x73) {
        if (DAT_0049f924 == 0x77) {
          temp_v14 = (float)temp_v21;
          temp_v18 = -(temp_v18 - temp_v14);
        }
      }
      else {
        temp_v18 = -(temp_v18 - temp_v14);
      }
      temp_v17 = (float)((unsigned long long)temp_v16 >> 0x20);
      temp_v15 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0xd88),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v14 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0xd8c),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v5 = (int)((temp_v18 + temp_v22[temp_v6 * 2]) - temp_v15 * temp_v19) / 1000;
      temp_v3 = (int)((temp_v17 + temp_v22[temp_v6 * 2 + 1]) - temp_v14 * temp_v19) / 1000;
      if (*(char *)(param_1 + 0x121bc) != '\0') {
        puVar7 = temp_v27;
        FUN_0039fedc();
        temp_v7 = FUN_0039fe8c(temp_v27,0);
        temp_v8 = 0;
        if (temp_v8 < (int)puVar7) {
          do {
            puVar11 = (unsigned int *)(temp_v7 + temp_v8 * 0x10);
            if (*puVar11 == 0xffffffff) break;
            if (*puVar11 == temp_v0) {
              temp_v11 = (int)(char)puVar11[1];
              temp_v13 = SBORROW4(temp_v11,temp_v5);
              temp_v9 = temp_v11 - temp_v5;
              temp_v12 = temp_v11 == temp_v5;
              if (temp_v11 <= temp_v5) {
                temp_v11 = (int)*(char *)((int)puVar11 + 5);
                temp_v13 = SBORROW4(temp_v11,temp_v3);
                temp_v9 = temp_v11 - temp_v3;
                temp_v12 = temp_v11 == temp_v3;
              }
              if (temp_v12 || temp_v9 < 0 != temp_v13) {
                temp_v11 = (int)*(char *)((int)puVar11 + 6);
                temp_v12 = SBORROW4(temp_v11,temp_v5);
                temp_v9 = temp_v11 - temp_v5;
                if (temp_v5 <= temp_v11) {
                  temp_v12 = SBORROW4((int)*(char *)((int)puVar11 + 7),temp_v3);
                  temp_v9 = *(char *)((int)puVar11 + 7) - temp_v3;
                }
                if (temp_v9 < 0 == temp_v12) {
                  temp_v14 = (float)VectorSignedToFloat((int)(short)puVar11[2],
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v0 = in_fpscr & 0xfffffff;
                  in_fpscr = temp_v0 | ((unsigned int)(temp_v14 == temp_v18) << 0x1e) |
                             ((unsigned int)(temp_v18 <= temp_v14) << 0x1d);
                  temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                  if (!((unsigned char)((temp_v2 >> 5) & 1) && !(unsigned char)(temp_v2 >> 6))) {
                    temp_v14 = (float)VectorSignedToFloat((int)*(short *)((int)puVar11 + 10),
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    in_fpscr = temp_v0 | ((unsigned int)(temp_v14 == temp_v17) << 0x1e) |
                               ((unsigned int)(temp_v17 <= temp_v14) << 0x1d);
                    temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                    if (!((unsigned char)((temp_v2 >> 5) & 1) && !(unsigned char)(temp_v2 >> 6))) {
                      temp_v14 = (float)VectorSignedToFloat((int)(short)puVar11[3],
                                                          (unsigned char)(in_fpscr >> 0x16) & 3);
                      temp_v10 = temp_v0 | ((unsigned int)(temp_v14 < temp_v18) << 0x1f);
                      in_fpscr = temp_v10 | ((unsigned int)(NAN(temp_v14) || NAN(temp_v18)) << 0x1c);
                      if ((unsigned char)(temp_v10 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                        temp_v14 = (float)VectorSignedToFloat((int)*(short *)((int)puVar11 + 0xe),
                                                            (unsigned char)(in_fpscr >> 0x16) & 3);
                        temp_v0 = temp_v0 | ((unsigned int)(temp_v14 < temp_v17) << 0x1f);
                        in_fpscr = temp_v0 | ((unsigned int)(NAN(temp_v14) || NAN(temp_v17)) << 0x1c);
                        if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) break;
                      }
                    }
                  }
                  goto LAB_0039f66c;
                }
              }
            }
            temp_v8 = temp_v8 + 1;
          } while (temp_v8 < (int)puVar7);
        }
      }
      if (-1 < temp_v5 && -1 < temp_v3) {
        temp_v7 = DAT_0049f924 * 8;
        temp_v9 = (int)*(short *)(temp_v7 + 0x4c322c);
        temp_v12 = SBORROW4(temp_v5,temp_v9);
        temp_v8 = temp_v5 - temp_v9;
        if (temp_v5 < temp_v9) {
          temp_v12 = SBORROW4(temp_v3,(int)*(short *)(temp_v7 + 0x4c322e));
          temp_v8 = temp_v3 - *(short *)(temp_v7 + 0x4c322e);
        }
        if ((temp_v8 < 0 != temp_v12) &&
           (temp_v5 = FUN_003423b8((int)(short)(*(short *)(temp_v7 + 0x4c322a) * (short)temp_v3 +
                                             *(short *)(temp_v7 + 0x4c3228) + (short)temp_v5),1),
           temp_v5 != 0)) {
          *temp_v28 = 1;
        }
      }
LAB_0039f66c:
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 9);
  }
  temp_v4 = FUN_002c0ba8(0x400);
  if (temp_v4 != 0) {
    temp_v6 = FUN_002931cc(0x76);
    temp_v4 = 0;
    if (temp_v6 != 0) {
      temp_v4 = *(int *)(param_1 + 4);
    }
    if ((temp_v6 != 0 && temp_v4 != 0) &&
       (FUN_00231d4c(param_1 + 0x164,temp_v22), (unsigned int)temp_v22[0] < 0xc39f8001)) {
      FUN_002c3ba8(DAT_0044ea00);
      FUN_002bef14();
      if ((DAT_0049f91c != 0x13) ||
         ((DAT_0049f920 != 6 && (!(DAT_0049f920 == 7 || DAT_0049f920 == 8))))) {
        if (*(char *)(param_1 + 0xc) != '\0') {
          FUN_003998e4();
        }
        else {
          FUN_00399f28(param_1);
        }
      }
      else if ((*(unsigned int *)(param_1 + 0x10) & 2) == 0) {
        DAT_0044cdd8 = 0xf1;
        FUN_00231f80(param_1);
        DAT_0044cdd8 = DAT_0044cdd8 + 1;
      }
      FUN_002c1b64(DAT_0044ea00);
      FUN_002c1abc(DAT_0044ea00);
      if ((*(char *)(param_1 + 0x9ec) != '\0') && (*(char *)(param_1 + 0x9ee) == '\0')) {
        FUN_0039bf20(param_1);
      }
      if ((((*(char *)(param_1 + 0xa85) != '\0') && (*(char *)(param_1 + 0xa84) == '\0')) ||
          ((DAT_0049f91c == 0x13 && ((DAT_0049f920 == 6 || DAT_0049f920 == 7) || DAT_0049f920 == 8))
          )) || (temp_v4 = FUN_002891e0(DAT_0049f91c), temp_v4 == 3)) {
        FUN_0039bc48(param_1);
        return;
      }
    }
  }
  return;
}
