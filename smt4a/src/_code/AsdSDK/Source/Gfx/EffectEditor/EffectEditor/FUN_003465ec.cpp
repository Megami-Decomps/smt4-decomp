/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003465ec` (_code @ 0x3465ec, 0x1064 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(int, double);
int padButtonRepeat(...);
int padButtonIsPressed(...);
int memAlloc(...);
int FUN_00200bcc(...);
int FUN_00202178(...);
int effEditorNodeChainApply(...);
int FUN_00243ce8(...);
int FUN_002b3fd8(int, int, int, int);
int FUN_002cf28c(...);
int FUN_00300124(void);
int VectorSignedToFloat(int, int);

/* stack frame of param_3: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_3_stack;

extern unsigned char LAB_00347650; /* 0x347650 */
extern unsigned char LAB_00400001; /* 0x400001 */
extern unsigned char LAB_00400003; /* 0x400003 */
extern unsigned char g_effectEditor; /* 0x59dbe0 */
extern signed char DAT_0059dbe9; /* 0x59dbe9 */
extern int DAT_0059dc2c; /* 0x59dc2c */
extern unsigned char *DAT_0059dc30; /* 0x59dc30 */
extern unsigned int DAT_0059dc34; /* 0x59dc34 */
extern unsigned char *DAT_0059dc38; /* 0x59dc38 */
extern float DAT_0059dc3c; /* 0x59dc3c */
extern float DAT_0059dc64; /* 0x59dc64 */
extern int iRam0059dc68; /* 0x59dc68 */
extern int DAT_0059dc6c; /* 0x59dc6c */
extern int DAT_0059dc70; /* 0x59dc70 */
extern unsigned int uRam0059ead0; /* 0x59ead0 */
extern unsigned char DAT_0059edf8; /* 0x59edf8 */
extern int DAT_0059ee04; /* 0x59ee04 */
extern unsigned int uRam0059ee08; /* 0x59ee08 */
extern int DAT_0059ee0c; /* 0x59ee0c */
extern unsigned int DAT_00635310; /* 0x635310 */
extern unsigned int DAT_00635314; /* 0x635314 */
extern float DAT_00635318; /* 0x635318 */
extern float DAT_0063531c; /* 0x63531c */
extern float DAT_00635320; /* 0x635320 */
extern unsigned int DAT_00635324; /* 0x635324 */
extern float DAT_00635328; /* 0x635328 */
extern unsigned int DAT_0063532c; /* 0x63532c */
extern unsigned int DAT_00635330; /* 0x635330 */
extern float DAT_00635334; /* 0x635334 */
extern float DAT_00635338; /* 0x635338 */
extern float DAT_0063533c; /* 0x63533c */
extern float DAT_00635340; /* 0x635340 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
extern int FUN_00163fd4(unsigned int);
/* Supplied declaration required: padButtonRepeat. */
/* Supplied declaration required: padButtonIsPressed. */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: FUN_00200bcc. */
/* Supplied declaration required: FUN_00202178. */
/* Supplied declaration required: effEditorNodeChainApply. */
/* Supplied declaration required: FUN_00243ce8. */
/* Supplied declaration required: FUN_002b3fd8. */
/* Supplied declaration required: FUN_002cf28c. */
/* Supplied declaration required: FUN_00300124. */


/* WARNING: Type propagation algorithm not settling */

unsigned char * FUN_003465ec(unsigned int *param_1,float *param_2,int param_3)

{
/* irregular: 22 unstructured edge(s); 15 goto(s); irregular input(s): in_fpscr, in_s16; 15 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char *puVar6;
  int temp_v4;
  float *pfVar8;
  unsigned char *puVar9;
  unsigned char *puVar10;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char *puVar13;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned int in_fpscr;
  unsigned int temp_v9;
  float temp_v10;
  int temp_v11;
  float temp_v12;
  float temp_v13;
  float in_s16;
  unsigned long long temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  float temp_v17 [5];
  float temp_v18 [5];
  unsigned char *temp_v19;
  unsigned int *puStack_30;
  float *temp_v20;
  int temp_v21;
  
  temp_v21 = param_3;
  temp_v20 = param_2;
  puStack_30 = param_1;
  temp_v16 = 0x3f800000;
  if (param_3 < 1) {
    in_s16 = 0.0f;
  }
  temp_v19 = &LAB_00400001;
  if (0 < param_3) {
    temp_v10 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    in_s16 = 1.0f / temp_v10;
  }
  DAT_00635314 = param_1[1];
  temp_v18[0] = 0.0f;
  DAT_0063531c = (float)param_1[3];
  DAT_00635324 = param_1[5];
  puVar13 = (unsigned char *)0x1;
  if ((char)*param_1 != '\x01') {
    if ((char)*param_1 != '\x02') {
      *(char *)param_1 = '\0';
    }
    else {
      temp_v17[1] = DAT_0063531c;
      puVar13 = (unsigned char *)0x3;
      temp_v18[1] = (float)param_1[4];
      temp_v17[2] = (float)DAT_00635324;
      temp_v18[2] = (float)param_1[6];
      if ((int)param_1[4] >= 0x3f800001) {
        temp_v18[1] = 1.0f;
        param_1[4] = 0x3f800000;
      }
      if ((int)param_1[6] >= 0x3f800001) {
        temp_v18[2] = 1.0f;
        param_1[6] = 0x3f800000;
      }
    }
  }
  else {
    temp_v17[1] = DAT_0063531c;
    puVar13 = (unsigned char *)0x2;
    temp_v18[1] = (float)param_1[4];
    if ((int)param_1[4] >= 0x3f800001) {
      temp_v18[1] = 1.0f;
      param_1[4] = 0x3f800000;
    }
  }
  DAT_00635318 = (float)param_1[2];
  temp_v17[(int)(puVar13 + -1) + 1] = DAT_00635318;
  temp_v17[(int)(puVar13 + 1) + 4] = 1.0f;
  if (puVar13 < DAT_0059dc30) {
    DAT_0059dc30 = puVar13;
  }
  puVar2 = DAT_0059dc30;
  DAT_0059dc3c = (float)((unsigned int)temp_v17[(int)(DAT_0059dc30 + -1) + 1] | 0xff000000);
  puVar10 = DAT_0059dc30 + 1;
  DAT_0059dc64 = temp_v17[(int)puVar10 + 4];
  DAT_00635310 = *param_1;
  DAT_00635320 = (float)param_1[4];
  DAT_00635328 = (float)param_1[6];
  DAT_0063532c = param_1[7];
  DAT_00635330 = param_1[8];
  DAT_00635334 = *param_2;
  DAT_00635338 = param_2[1];
  DAT_0063533c = param_2[2];
  DAT_00635340 = param_2[3];
  if ((DAT_0059dbe9 == '\0') && (FUN_00200bcc(&DAT_0059edf8), DAT_0059dc2c == 1)) {
    FUN_00200bcc(0x59eac0);
  }
  puVar9 = DAT_0059dc30;
  if (DAT_0059dc2c == 0) {
    temp_v14 = CONCAT44(0x41200000,in_s16);
    temp_v10 = 100.0f;
    if (DAT_0059dc38 != (unsigned char *)0x0) {
      if (DAT_0059dc38 != (unsigned char *)0x1) {
        if (DAT_0059dc38 == (unsigned char *)0x2) {
          temp_v4 = padButtonRepeat(5);
          if (temp_v4 == 0) {
            FUN_00202178(5);
            temp_v4 = padButtonRepeat();
            if (temp_v4 != 0) {
              puVar9 = DAT_0059dc30;
              if ((uRam0059ee08 & 0x20) != 0) {
                uRam0059ee08 = uRam0059ee08 | 0x10;
                DAT_0059dc38 = DAT_0059dc38 + -1;
              }
            }
            else {
              temp_v4 = padButtonRepeat(6);
              if (temp_v4 == 0) {
                FUN_00202178(6);
                temp_v4 = padButtonRepeat();
                puVar9 = DAT_0059dc30;
                if (temp_v4 == 0) goto LAB_00346d5c;
              }
              puVar9 = DAT_0059dc30;
              if ((uRam0059ee08 & 0x20) != 0) {
                DAT_0059dc38 = (unsigned char *)0x0;
                DAT_0059dc34 = 1;
                uRam0059ee08 = uRam0059ee08 | 0x10;
                DAT_0059dc30 = (unsigned char *)0x0;
LAB_00346d70:
                if (puVar13 < DAT_0059dc30) {
                  DAT_0059dc30 = puVar13;
                }
                goto LAB_00346d7c;
              }
            }
          }
          else {
            puVar9 = DAT_0059dc30;
            if ((uRam0059ee08 & 0x20) != 0) {
              uRam0059ee08 = uRam0059ee08 | 0x10;
              DAT_0059dc38 = DAT_0059dc38 + -1;
            }
          }
        }
      }
      else {
        temp_v4 = padButtonRepeat(3);
        if (temp_v4 == 0) {
          FUN_00202178(3);
          temp_v4 = padButtonRepeat();
          if (temp_v4 == 0) {
            temp_v4 = padButtonRepeat(4);
            if (temp_v4 == 0) {
              FUN_00202178(4);
              temp_v4 = padButtonRepeat();
              if (temp_v4 == 0) {
                temp_v4 = padButtonRepeat(5);
                if (temp_v4 == 0) {
                  FUN_00202178(5);
                  temp_v4 = padButtonRepeat();
                  if (temp_v4 == 0) {
                    temp_v4 = padButtonRepeat(6);
                    if (temp_v4 == 0) {
                      FUN_00202178(6);
                      temp_v4 = padButtonRepeat();
                      puVar9 = DAT_0059dc30;
                      if (temp_v4 == 0) goto LAB_00346d5c;
                    }
                    puVar9 = DAT_0059dc30;
                    if (DAT_0059dc34 != 1) {
                      DAT_0059dc38 = DAT_0059dc38 + 1;
                      DAT_0059ee04 = 1;
                      uRam0059ee08 = uRam0059ee08 & 0xffffffef;
                      goto LAB_00346d5c;
                    }
                    DAT_0059dc34 = 2;
                    goto LAB_00346d5c;
                  }
                }
                if (DAT_0059dc34 == 2) {
                  DAT_0059dc34 = 1;
                  puVar9 = DAT_0059dc30;
                  goto LAB_00346d5c;
                }
                puVar6 = DAT_0059dc38 + -1;
                goto LAB_003469d8;
              }
            }
            temp_v4 = FUN_00163fd4(7);
            if ((temp_v4 != 0) || (temp_v4 = FUN_00163fd4(0x18), temp_v4 != 0)) {
              temp_v7 = DAT_0059dc34 != 1;
              temp_v12 = DAT_0063533c;
              if (temp_v7) {
                temp_v12 = DAT_00635340;
              }
              temp_v12 = temp_v12 - (float)temp_v14 * (float)((unsigned long long)temp_v14 >> 0x20);
              temp_v10 = temp_v12;
              if (temp_v7) {
                temp_v10 = DAT_0063533c;
                DAT_00635340 = temp_v12;
              }
            }
            else {
              temp_v4 = FUN_00163fd4(8);
              temp_v13 = (float)temp_v14;
              if ((temp_v4 != 0) || (temp_v4 = FUN_00163fd4(0x1c), temp_v4 != 0)) {
                temp_v7 = DAT_0059dc34 != 1;
                temp_v12 = DAT_0063533c;
                if (temp_v7) {
                  temp_v12 = DAT_00635340;
                }
                temp_v12 = temp_v12 - temp_v13 * temp_v10;
                temp_v10 = temp_v12;
                if (temp_v7) {
                  temp_v10 = DAT_0063533c;
                  DAT_00635340 = temp_v12;
                }
              }
              else {
                temp_v7 = DAT_0059dc34 == 1;
                temp_v12 = DAT_00635340;
                if (temp_v7) {
                  temp_v12 = DAT_0063533c;
                }
                temp_v12 = temp_v12 - temp_v13;
joined_r0x00346b14:
                temp_v10 = temp_v12;
                if (!temp_v7) {
                  temp_v10 = DAT_0063533c;
                  DAT_00635340 = temp_v12;
                }
              }
            }
            goto LAB_00346af8;
          }
        }
        temp_v4 = FUN_00163fd4(7);
        if ((temp_v4 != 0) || (temp_v4 = FUN_00163fd4(0x18), temp_v4 != 0)) {
          temp_v7 = DAT_0059dc34 != 1;
          temp_v12 = DAT_0063533c;
          if (temp_v7) {
            temp_v12 = DAT_00635340;
          }
          temp_v12 = temp_v12 + (float)temp_v14 * (float)((unsigned long long)temp_v14 >> 0x20);
        }
        else {
          temp_v4 = FUN_00163fd4(8);
          temp_v13 = (float)temp_v14;
          if ((temp_v4 == 0) && (temp_v4 = FUN_00163fd4(0x1c), temp_v4 == 0)) {
            temp_v7 = DAT_0059dc34 == 1;
            temp_v12 = DAT_00635340;
            if (temp_v7) {
              temp_v12 = DAT_0063533c;
            }
            temp_v12 = temp_v12 + temp_v13;
            goto joined_r0x00346b14;
          }
          temp_v7 = DAT_0059dc34 != 1;
          temp_v12 = DAT_0063533c;
          if (temp_v7) {
            temp_v12 = DAT_00635340;
          }
          temp_v12 = temp_v12 + temp_v13 * temp_v10;
        }
        temp_v10 = temp_v12;
        if (temp_v7) {
          temp_v10 = DAT_0063533c;
          DAT_00635340 = temp_v12;
        }
LAB_00346af8:
        DAT_0063533c = temp_v10;
        temp_v19 = &LAB_00400003;
        puVar9 = DAT_0059dc30;
      }
    }
    else {
      if ((puVar2 != (unsigned char *)0x0) && (puVar2 != puVar13)) {
        temp_v4 = padButtonRepeat(3);
        if (temp_v4 == 0) {
          FUN_00202178(3);
          temp_v4 = padButtonRepeat();
          if (temp_v4 != 0) goto LAB_003467fc;
          temp_v4 = padButtonRepeat(4);
          if (temp_v4 == 0) {
            FUN_00202178(4);
            temp_v4 = padButtonRepeat();
            if (temp_v4 == 0) goto LAB_003468dc;
          }
          temp_v4 = FUN_00163fd4(7);
          if ((temp_v4 != 0) || (temp_v4 = FUN_00163fd4(0x18), temp_v4 != 0)) {
            DAT_0059dc64 = DAT_0059dc64 - (float)temp_v14 * (float)((unsigned long long)temp_v14 >> 0x20);
          }
          else {
            temp_v4 = FUN_00163fd4(8);
            temp_v12 = (float)temp_v14;
            if ((temp_v4 == 0) && (temp_v4 = FUN_00163fd4(0x1c), temp_v4 == 0)) {
              DAT_0059dc64 = DAT_0059dc64 - temp_v12;
            }
            else {
              DAT_0059dc64 = DAT_0059dc64 - temp_v12 * temp_v10;
            }
          }
        }
        else {
LAB_003467fc:
          temp_v4 = FUN_00163fd4(7);
          if ((temp_v4 != 0) || (temp_v4 = FUN_00163fd4(0x18), temp_v4 != 0)) {
            DAT_0059dc64 = DAT_0059dc64 + (float)temp_v14 * (float)((unsigned long long)temp_v14 >> 0x20);
          }
          else {
            temp_v4 = FUN_00163fd4(8);
            temp_v12 = (float)temp_v14;
            if ((temp_v4 == 0) && (temp_v4 = FUN_00163fd4(0x1c), temp_v4 == 0)) {
              DAT_0059dc64 = DAT_0059dc64 + temp_v12;
            }
            else {
              DAT_0059dc64 = DAT_0059dc64 + temp_v12 * temp_v10;
            }
          }
        }
        temp_v19 = &LAB_00400003;
      }
LAB_003468dc:
      temp_v4 = padButtonRepeat(5);
      if (temp_v4 == 0) {
        FUN_00202178(5);
        temp_v4 = padButtonRepeat();
        if (temp_v4 != 0) {
          puVar9 = DAT_0059dc30;
          if (0 < (int)DAT_0059dc30) {
            puVar9 = DAT_0059dc30 + -1;
          }
        }
        else {
          temp_v4 = padButtonRepeat(6);
          if (temp_v4 == 0) {
            FUN_00202178(6);
            temp_v4 = padButtonRepeat();
            if (temp_v4 == 0) {
              temp_v4 = padButtonIsPressed(0);
              if (temp_v4 == 0) {
                FUN_00202178(0);
                temp_v4 = padButtonIsPressed();
                puVar9 = DAT_0059dc30;
                if (temp_v4 != 0) {
                  DAT_0059dc2c = 1;
                  puVar9 = DAT_0059dc30;
                }
              }
              else {
                DAT_0059dc2c = 1;
                puVar9 = DAT_0059dc30;
              }
              goto LAB_00346d5c;
            }
          }
          puVar6 = DAT_0059dc30;
          if (puVar13 <= DAT_0059dc30) {
            puVar6 = DAT_0059dc38;
          }
          puVar6 = puVar6 + 1;
          puVar9 = puVar6;
          if (puVar13 <= DAT_0059dc30) {
LAB_003469d8:
            puVar9 = DAT_0059dc30;
            DAT_0059dc38 = puVar6;
          }
        }
      }
      else {
        puVar9 = DAT_0059dc30;
        if (0 < (int)DAT_0059dc30) {
          puVar9 = DAT_0059dc30 + -1;
        }
      }
    }
  }
LAB_00346d5c:
  DAT_0059dc30 = puVar9;
  if (-1 < (int)DAT_0059dc30) goto LAB_00346d70;
  DAT_0059dc30 = (unsigned char *)0x0;
LAB_00346d7c:
  temp_v10 = DAT_00635338;
  temp_v13 = (float)((unsigned long long)temp_v16 >> 0x20);
  temp_v5 = in_fpscr & 0xfffffff;
  temp_v15 = (float)temp_v16;
  temp_v12 = temp_v13;
  if ((temp_v13 <= DAT_0059dc64) && (temp_v12 = DAT_0059dc64, (int)DAT_0059dc64 >= 0x3f800001)) {
    temp_v12 = temp_v15;
  }
  DAT_0059dc64 = temp_v12;
  temp_v12 = temp_v13;
  if ((temp_v13 <= DAT_0063533c) && (temp_v12 = temp_v15, (int)DAT_0063533c < 0x3f800001)) {
    temp_v12 = DAT_0063533c;
  }
  DAT_0063533c = temp_v12;
  if ((temp_v13 <= DAT_00635340) && (temp_v13 = temp_v15, (int)DAT_00635340 < 0x3f800001)) {
    temp_v13 = DAT_00635340;
  }
  DAT_00635340 = temp_v13;
  temp_v9 = temp_v5 | ((unsigned int)(DAT_0063533c < DAT_00635340) << 0x1f) |
           ((unsigned int)(DAT_0063533c == DAT_00635340) << 0x1e);
  temp_v0 = (unsigned char)(temp_v9 >> 0x18);
  temp_v12 = DAT_00635340;
  if (((!(unsigned char)((temp_v0 >> 6) & 1) && (unsigned char)(temp_v0 >> 7) == ((DAT_0063533c != DAT_0063533c) || (DAT_00635340 != DAT_00635340)))
      && (temp_v12 = DAT_0063533c,
         (float *)*(unsigned int **)(DAT_0059ee0c + DAT_0059ee04 * 0x18 + 8) != &DAT_0063533c)) &&
     ((DAT_0059dc38 != (unsigned char *)0x1 || (DAT_0059dc34 != 1)))) {
    DAT_0063533c = DAT_00635340;
    temp_v12 = DAT_00635340;
  }
  DAT_00635340 = temp_v12;
  temp_v13 = DAT_00635340;
  temp_v12 = DAT_0063533c;
  puVar9 = (unsigned char *)(DAT_00635310 & 0xff);
  if (puVar9 != puVar13 + -1) {
    if (puVar9 == (unsigned char *)0x1) {
      DAT_00635320 = 0.5f;
    }
    else if (puVar9 == (unsigned char *)0x2) {
      DAT_00635328 = (DAT_00635320 + temp_v15) * 0.5f;
    }
  }
  *temp_v20 = DAT_00635334;
  temp_v20[1] = temp_v10;
  temp_v20[2] = temp_v12;
  temp_v20[3] = temp_v13;
  temp_v3 = DAT_0063532c;
  temp_v15 = DAT_00635328;
  temp_v2 = DAT_00635324;
  temp_v13 = DAT_00635320;
  temp_v12 = DAT_0063531c;
  temp_v10 = DAT_00635318;
  temp_v1 = DAT_00635314;
  *param_1 = DAT_00635310;
  param_1[1] = temp_v1;
  param_1[2] = (unsigned int)temp_v10;
  param_1[3] = (unsigned int)temp_v12;
  param_1[4] = (unsigned int)temp_v13;
  param_1[5] = temp_v2;
  param_1[6] = (unsigned int)temp_v15;
  param_1[7] = temp_v3;
  param_1[8] = DAT_00635330;
  if (puVar2 == (unsigned char *)0x0) {
    param_1[1] = (unsigned int)DAT_0059dc3c;
  }
  else if (puVar2 == puVar13) {
    param_1[2] = (unsigned int)DAT_0059dc3c;
  }
  else {
    pfVar8 = (float *)(param_1 + (int)puVar2 * 2);
    pfVar8[1] = DAT_0059dc3c;
    temp_v10 = DAT_0059dc64;
    pfVar8[2] = DAT_0059dc64;
    if ((unsigned char *)0x2 < puVar13) {
      if (puVar2 >= (unsigned char *)0x2) {
        temp_v12 = *pfVar8;
        temp_v9 = temp_v5 | ((unsigned int)(temp_v12 < temp_v10) << 0x1f) | ((unsigned int)(temp_v12 == temp_v10) << 0x1e);
        temp_v0 = (unsigned char)(temp_v9 >> 0x18);
        temp_v7 = (unsigned char)(temp_v0 >> 7);
        temp_v8 = (unsigned char)((temp_v0 >> 6) & 1);
        if (!temp_v8 && temp_v7 == ((temp_v12 != temp_v12) || (temp_v10 != temp_v10))) {
          *pfVar8 = temp_v10;
        }
        if (!temp_v8 && temp_v7 == ((temp_v12 != temp_v12) || (temp_v10 != temp_v10))) {
          temp_v17[(int)puVar2 + 4] = temp_v10;
        }
      }
      else {
        temp_v12 = pfVar8[4];
        temp_v9 = temp_v5 | ((unsigned int)(temp_v10 < temp_v12) << 0x1f) | ((unsigned int)(temp_v10 == temp_v12) << 0x1e);
        temp_v0 = (unsigned char)(temp_v9 >> 0x18);
        temp_v7 = (unsigned char)(temp_v0 >> 7);
        temp_v8 = (unsigned char)((temp_v0 >> 6) & 1);
        if (!temp_v8 && temp_v7 == ((temp_v10 != temp_v10) || (temp_v12 != temp_v12))) {
          pfVar8[4] = temp_v10;
        }
        if (!temp_v8 && temp_v7 == ((temp_v10 != temp_v10) || (temp_v12 != temp_v12))) {
          temp_v17[(int)puVar2 + 6] = temp_v10;
        }
      }
    }
  }
  temp_v10 = (float)VectorSignedToFloat(temp_v21,(unsigned char)(temp_v9 >> 0x16) & 3);
  temp_v13 = (float)VectorSignedToFloat(temp_v21,(unsigned char)(temp_v9 >> 0x16) & 3);
  temp_v12 = (float)VectorSignedToFloat(temp_v21,(unsigned char)(temp_v9 >> 0x16) & 3);
  temp_v17[(int)(puVar2 + -1) + 1] = DAT_0059dc3c;
  temp_v17[(int)puVar10 + 4] = DAT_0059dc64;
  iRam0059dc68 = (int)(DAT_0059dc64 * temp_v10);
  DAT_0059dc6c = (int)(DAT_0063533c * temp_v13);
  DAT_0059dc70 = (int)(DAT_00635340 * temp_v12);
  FUN_002b3fd8(0xa0,8,200,0xb0);
  effEditorNodeChainApply(&DAT_0059edf8);
  if (DAT_0059dc2c == 1) {
    effEditorNodeChainApply(0x59eac0);
  }
  FUN_002cf28c(0xa8,0x10,0xb8,0x10,0x80808080,0xff000000);
  temp_v14 = 0x4338000000000000;
  puVar10 = (unsigned char *)0x0;
  if (puVar13 != (unsigned char *)0x0) {
    do {
      temp_v13 = temp_v17[(int)puVar10 + 6];
      temp_v10 = temp_v17[(int)(puVar10 + -1) + 1];
      temp_v12 = temp_v17[(int)puVar10 + 1];
      temp_v15 = (float)((unsigned long long)temp_v14 >> 0x20);
      temp_v11 = (int)(temp_v17[(int)(puVar10 + 1) + 4] * temp_v15);
      temp_v6 = temp_v11 + 0xa8;
      temp_v4 = 0x10000;
      memAlloc(0x10000,0x100,0,0x68,0x10,1);
      *(int *)(temp_v4 + 8) = temp_v6;
      *(unsigned int *)(temp_v4 + 0xc) = 0x10;
      *(unsigned int *)(temp_v4 + 4) = 4;
      *(int *)(temp_v4 + 0x10) = ((int)(temp_v13 * temp_v15) + 0xa8) - temp_v6;
      *(unsigned int *)(temp_v4 + 0x14) = 0x10;
      *(unsigned int *)(temp_v4 + 0x18) = (unsigned int)temp_v10 | 0xff000000;
      *(unsigned int *)(temp_v4 + 0x1c) = (unsigned int)temp_v12 | 0xff000000;
      FUN_00300124();
      puVar2 = &g_effectEditor;
      if (puVar10 == DAT_0059dc30) {
        puVar2 = DAT_0059dc38;
      }
      if (!(puVar10 == DAT_0059dc30 && puVar2 == (unsigned char *)0x0)) {
        temp_v4 = 0x10000;
        memAlloc(0x10000,0x100,0,0x68,0x10,1);
        *(unsigned int *)(temp_v4 + 4) = 6;
        *(int *)(temp_v4 + 8) = temp_v6;
        *(unsigned int *)(temp_v4 + 0xc) = 0xc;
        *(int *)(temp_v4 + 0x10) = temp_v6;
        *(unsigned int *)(temp_v4 + 0x14) = 0x24;
        *(unsigned int *)(temp_v4 + 0x18) = 0xffffffff;
      }
      else {
        temp_v11 = temp_v11 + 0xa7;
        temp_v4 = 0x10000;
        memAlloc(0x10000,0x100,0,0x68,0x10,1);
        *(unsigned int *)(temp_v4 + 0x18) = 0xff00ff00;
        *(int *)(temp_v4 + 8) = temp_v11;
        *(unsigned int *)(temp_v4 + 4) = 6;
        *(unsigned int *)(temp_v4 + 0xc) = 0xc;
        *(int *)(temp_v4 + 0x10) = temp_v11;
        *(unsigned int *)(temp_v4 + 0x14) = 0x24;
        FUN_00300124();
        temp_v4 = 0x10000;
        memAlloc(0x10000,0x100,0,0x68,0x10,1);
        *(unsigned int *)(temp_v4 + 0x18) = 0xff00ff00;
        *(int *)(temp_v4 + 8) = temp_v6;
        *(unsigned int *)(temp_v4 + 4) = 6;
        *(unsigned int *)(temp_v4 + 0xc) = 0xc;
        *(int *)(temp_v4 + 0x10) = temp_v6;
        *(unsigned int *)(temp_v4 + 0x14) = 0x24;
      }
      FUN_00300124();
      puVar10 = puVar10 + 1;
    } while (puVar10 < puVar13);
  }
  if ((puVar13 != DAT_0059dc30) || (DAT_0059dc38 != (unsigned char *)0x0)) {
    temp_v4 = 0x10000;
    memAlloc(0x10000,0x100,0,0x68,0x10,1);
    *(unsigned int *)(temp_v4 + 4) = 6;
    *(unsigned int *)(temp_v4 + 8) = 0x160;
    *(unsigned int *)(temp_v4 + 0xc) = 0xc;
    *(unsigned int *)(temp_v4 + 0x10) = 0x160;
    *(unsigned int *)(temp_v4 + 0x14) = 0x24;
    *(unsigned int *)(temp_v4 + 0x18) = 0xffffffff;
  }
  else {
    temp_v4 = 0x10000;
    memAlloc(0x10000,0x100,0,0x68,0x10,1);
    *(unsigned int *)(temp_v4 + 8) = 0x161;
    *(unsigned int *)(temp_v4 + 4) = 6;
    *(unsigned int *)(temp_v4 + 0xc) = 0xc;
    *(unsigned int *)(temp_v4 + 0x10) = 0x161;
    *(unsigned int *)(temp_v4 + 0x14) = 0x24;
    *(unsigned int *)(temp_v4 + 0x18) = 0xff00ff00;
    FUN_00300124();
    temp_v4 = 0x10000;
    memAlloc(0x10000,0x100,0,0x68,0x10,1);
    *(unsigned int *)(temp_v4 + 4) = 6;
    *(unsigned int *)(temp_v4 + 8) = 0x160;
    *(unsigned int *)(temp_v4 + 0xc) = 0xc;
    *(unsigned int *)(temp_v4 + 0x10) = 0x160;
    *(unsigned int *)(temp_v4 + 0x14) = 0x24;
    *(unsigned int *)(temp_v4 + 0x18) = 0xff00ff00;
  }
  FUN_00300124();
  temp_v18[0] = (float)((unsigned long long)temp_v16 >> 0x20);
  temp_v17[1] = *temp_v20;
  temp_v18[1] = temp_v20[2];
  temp_v18[2] = temp_v20[3];
  temp_v17[3] = 0.0f;
  temp_v18[3] = (float)temp_v16;
  temp_v17[2] = temp_v17[1];
  FUN_002cf28c(0xa8,0x2c,0xb8,0x10,0x80808080,0xff000000);
  temp_v5 = 0;
  do {
    temp_v13 = temp_v17[temp_v5 + 6];
    temp_v12 = temp_v17[temp_v5];
    temp_v15 = (float)((unsigned long long)temp_v14 >> 0x20);
    temp_v11 = (int)(temp_v17[temp_v5 + 5] * temp_v15);
    temp_v10 = temp_v17[temp_v5 + 1];
    temp_v6 = temp_v11 + 0xa8;
    temp_v4 = 0x10000;
    memAlloc(0x10000,0x100,0,0x68,0x10,1);
    *(unsigned int *)(temp_v4 + 4) = 4;
    *(int *)(temp_v4 + 8) = temp_v6;
    *(unsigned int *)(temp_v4 + 0xc) = 0x2c;
    *(int *)(temp_v4 + 0x10) = ((int)(temp_v13 * temp_v15) + 0xa8) - temp_v6;
    *(unsigned int *)(temp_v4 + 0x14) = 0x10;
    *(unsigned int *)(temp_v4 + 0x18) =
         (unsigned int)temp_v12 | ((int)temp_v12 << 0x10) | ((int)temp_v12 << 8) | 0xff000000U;
    *(unsigned int *)(temp_v4 + 0x1c) =
         (unsigned int)temp_v10 | ((int)temp_v10 << 0x10) | ((int)temp_v10 << 8) | 0xff000000U;
    FUN_00300124();
    puVar13 = &g_effectEditor;
    if (temp_v5 == DAT_0059dc34) {
      puVar13 = DAT_0059dc38;
    }
    if (!(temp_v5 == DAT_0059dc34 && puVar13 == (unsigned char *)0x1)) {
      temp_v4 = 0x10000;
      memAlloc(0x10000,0x100,0,0x68,0x10,1);
      *(unsigned int *)(temp_v4 + 4) = 6;
      *(int *)(temp_v4 + 8) = temp_v6;
      *(unsigned int *)(temp_v4 + 0xc) = 0x28;
      *(int *)(temp_v4 + 0x10) = temp_v6;
      *(unsigned int *)(temp_v4 + 0x14) = 0x40;
      *(unsigned int *)(temp_v4 + 0x18) = 0xffffffff;
    }
    else {
      temp_v11 = temp_v11 + 0xa7;
      temp_v4 = 0x10000;
      memAlloc(0x10000,0x100,0,0x68,0x10,1);
      *(int *)(temp_v4 + 8) = temp_v11;
      *(unsigned int *)(temp_v4 + 0x18) = 0xff00ff00;
      *(unsigned int *)(temp_v4 + 0x14) = 0x40;
      *(unsigned int *)(temp_v4 + 4) = 6;
      *(int *)(temp_v4 + 0x10) = temp_v11;
      *(unsigned int *)(temp_v4 + 0xc) = 0x28;
      FUN_00300124();
      temp_v4 = 0x10000;
      memAlloc(0x10000,0x100,0,0x68,0x10,1);
      *(int *)(temp_v4 + 8) = temp_v6;
      *(unsigned int *)(temp_v4 + 0x18) = 0xff00ff00;
      *(unsigned int *)(temp_v4 + 0x14) = 0x40;
      *(int *)(temp_v4 + 0x10) = temp_v6;
      *(unsigned int *)(temp_v4 + 4) = 6;
      *(unsigned int *)(temp_v4 + 0xc) = 0x28;
    }
    FUN_00300124();
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 3);
  temp_v4 = 0x10000;
  memAlloc(0x10000,0x100,0,0x68,0x10,1);
  *(unsigned int *)(temp_v4 + 4) = 6;
  *(unsigned int *)(temp_v4 + 8) = 0x160;
  *(unsigned int *)(temp_v4 + 0xc) = 0x28;
  *(unsigned int *)(temp_v4 + 0x10) = 0x160;
  *(unsigned int *)(temp_v4 + 0x14) = 0x40;
  *(unsigned int *)(temp_v4 + 0x18) = 0xffffffff;
  FUN_00300124();
  FUN_00243ce8(0xa4,0x44,8,&LAB_00347650,temp_v21);
  temp_v4 = padButtonIsPressed(1);
  if (temp_v4 == 0) {
    FUN_00202178(1);
    temp_v4 = padButtonIsPressed();
    if (temp_v4 == 0) {
      temp_v5 = uRam0059ead0;
      if (DAT_0059dc2c == 0) {
LAB_003475ec:
        temp_v5 = uRam0059ee08;
      }
      if ((temp_v5 & 8) != 0) {
        temp_v19 = (unsigned char *)((unsigned int)temp_v19 | 2);
      }
      return temp_v19;
    }
  }
  if (DAT_0059dc2c != 0) {
    DAT_0059dc2c = 0;
    goto LAB_003475ec;
  }
  temp_v19 = (unsigned char *)((unsigned int)temp_v19 & 0xfffffffe);
  goto LAB_003475ec;
}

} /* extern "C" */
