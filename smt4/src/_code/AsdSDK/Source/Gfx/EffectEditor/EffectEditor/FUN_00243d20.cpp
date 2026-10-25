/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00243d20` (_code @ 0x243d20, 0x1068 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(int, double);
int asdDebugLog(...);
int effEditorNodeChainApply(...);
int padAlternateButtonIndex(...);
int FUN_0024dd90(...);
int effMenuListAppend(void);
int FUN_002826d4(...);
int FUN_00282780(int, int, int, int);
int padIsButtonRepeat(...);
int padIsButtonPressed(...);
int memAlloc(...);
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

extern unsigned char LAB_00244d88; /* 0x244d88 */
extern unsigned char DAT_00400001; /* 0x400001 */
extern unsigned char DAT_00400003; /* 0x400003 */
extern unsigned char g_effectEditor; /* 0x44ea80 */
extern signed char DAT_0044ea89; /* 0x44ea89 */
extern int DAT_0044eacc; /* 0x44eacc */
extern unsigned char *DAT_0044ead0; /* 0x44ead0 */
extern unsigned int DAT_0044ead4; /* 0x44ead4 */
extern unsigned char *DAT_0044ead8; /* 0x44ead8 */
extern float DAT_0044eadc; /* 0x44eadc */
extern float DAT_0044eb04; /* 0x44eb04 */
extern int iRam0044eb08; /* 0x44eb08 */
extern int DAT_0044eb0c; /* 0x44eb0c */
extern int DAT_0044eb10; /* 0x44eb10 */
extern unsigned int uRam0044f980; /* 0x44f980 */
extern unsigned char DAT_0044fca8; /* 0x44fca8 */
extern int DAT_0044fcb4; /* 0x44fcb4 */
extern unsigned int uRam0044fcb8; /* 0x44fcb8 */
extern int DAT_0044fcbc; /* 0x44fcbc */
extern unsigned int DAT_004d9290; /* 0x4d9290 */
extern unsigned int DAT_004d9294; /* 0x4d9294 */
extern float DAT_004d9298; /* 0x4d9298 */
extern float DAT_004d929c; /* 0x4d929c */
extern float DAT_004d92a0; /* 0x4d92a0 */
extern unsigned int DAT_004d92a4; /* 0x4d92a4 */
extern float DAT_004d92a8; /* 0x4d92a8 */
extern unsigned int DAT_004d92ac; /* 0x4d92ac */
extern unsigned int DAT_004d92b0; /* 0x4d92b0 */
extern float DAT_004d92b4; /* 0x4d92b4 */
extern float DAT_004d92b8; /* 0x4d92b8 */
extern float DAT_004d92bc; /* 0x4d92bc */
extern float DAT_004d92c0; /* 0x4d92c0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: asdDebugLog. */
/* Supplied declaration required: effEditorNodeChainApply. */
/* Supplied declaration required: padAlternateButtonIndex. */
/* Supplied declaration required: FUN_0024dd90. */
/* Supplied declaration required: effMenuListAppend. */
/* Supplied declaration required: FUN_002826d4. */
/* Supplied declaration required: FUN_00282780. */
/* Supplied declaration required: padIsButtonRepeat. */
/* Supplied declaration required: padIsButtonPressed. */
extern int FUN_002c15fc(unsigned int);
/* Supplied declaration required: memAlloc. */


/* WARNING: Type propagation algorithm not settling */

unsigned char * FUN_00243d20(unsigned int *param_1,float *param_2,int param_3)

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
  temp_v19 = &DAT_00400001;
  if (0 < param_3) {
    temp_v10 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    in_s16 = 1.0f / temp_v10;
  }
  DAT_004d9294 = param_1[1];
  temp_v18[0] = 0.0f;
  DAT_004d929c = (float)param_1[3];
  DAT_004d92a4 = param_1[5];
  puVar13 = (unsigned char *)0x1;
  if ((char)*param_1 != '\x01') {
    if ((char)*param_1 != '\x02') {
      *(char *)param_1 = '\0';
    }
    else {
      temp_v17[1] = DAT_004d929c;
      puVar13 = (unsigned char *)0x3;
      temp_v18[1] = (float)param_1[4];
      temp_v17[2] = (float)DAT_004d92a4;
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
    temp_v17[1] = DAT_004d929c;
    puVar13 = (unsigned char *)0x2;
    temp_v18[1] = (float)param_1[4];
    if ((int)param_1[4] >= 0x3f800001) {
      temp_v18[1] = 1.0f;
      param_1[4] = 0x3f800000;
    }
  }
  DAT_004d9298 = (float)param_1[2];
  temp_v17[(int)(puVar13 + -1) + 1] = DAT_004d9298;
  temp_v17[(int)(puVar13 + 1) + 4] = 1.0f;
  if (puVar13 < DAT_0044ead0) {
    DAT_0044ead0 = puVar13;
  }
  puVar2 = DAT_0044ead0;
  DAT_0044eadc = (float)((unsigned int)temp_v17[(int)(DAT_0044ead0 + -1) + 1] | 0xff000000);
  puVar10 = DAT_0044ead0 + 1;
  DAT_0044eb04 = temp_v17[(int)puVar10 + 4];
  DAT_004d9290 = *param_1;
  DAT_004d92a0 = (float)param_1[4];
  DAT_004d92a8 = (float)param_1[6];
  DAT_004d92ac = param_1[7];
  DAT_004d92b0 = param_1[8];
  DAT_004d92b4 = *param_2;
  DAT_004d92b8 = param_2[1];
  DAT_004d92bc = param_2[2];
  DAT_004d92c0 = param_2[3];
  if ((DAT_0044ea89 == '\0') && (FUN_0024dd90(&DAT_0044fca8), DAT_0044eacc == 1)) {
    FUN_0024dd90(0x44f970);
  }
  puVar9 = DAT_0044ead0;
  if (DAT_0044eacc == 0) {
    temp_v14 = CONCAT44(0x41200000,in_s16);
    temp_v10 = 100.0f;
    if (DAT_0044ead8 != (unsigned char *)0x0) {
      if (DAT_0044ead8 != (unsigned char *)0x1) {
        if (DAT_0044ead8 == (unsigned char *)0x2) {
          temp_v4 = padIsButtonRepeat(5);
          if (temp_v4 == 0) {
            padAlternateButtonIndex(5);
            temp_v4 = padIsButtonRepeat();
            if (temp_v4 != 0) {
              puVar9 = DAT_0044ead0;
              if ((uRam0044fcb8 & 0x20) != 0) {
                uRam0044fcb8 = uRam0044fcb8 | 0x10;
                DAT_0044ead8 = DAT_0044ead8 + -1;
              }
            }
            else {
              temp_v4 = padIsButtonRepeat(6);
              if (temp_v4 == 0) {
                padAlternateButtonIndex(6);
                temp_v4 = padIsButtonRepeat();
                puVar9 = DAT_0044ead0;
                if (temp_v4 == 0) goto LAB_00244490;
              }
              puVar9 = DAT_0044ead0;
              if ((uRam0044fcb8 & 0x20) != 0) {
                DAT_0044ead8 = (unsigned char *)0x0;
                DAT_0044ead4 = 1;
                uRam0044fcb8 = uRam0044fcb8 | 0x10;
                DAT_0044ead0 = (unsigned char *)0x0;
LAB_002444a4:
                if (puVar13 < DAT_0044ead0) {
                  DAT_0044ead0 = puVar13;
                }
                goto LAB_002444b0;
              }
            }
          }
          else {
            puVar9 = DAT_0044ead0;
            if ((uRam0044fcb8 & 0x20) != 0) {
              uRam0044fcb8 = uRam0044fcb8 | 0x10;
              DAT_0044ead8 = DAT_0044ead8 + -1;
            }
          }
        }
      }
      else {
        temp_v4 = padIsButtonRepeat(3);
        if (temp_v4 == 0) {
          padAlternateButtonIndex(3);
          temp_v4 = padIsButtonRepeat();
          if (temp_v4 == 0) {
            temp_v4 = padIsButtonRepeat(4);
            if (temp_v4 == 0) {
              padAlternateButtonIndex(4);
              temp_v4 = padIsButtonRepeat();
              if (temp_v4 == 0) {
                temp_v4 = padIsButtonRepeat(5);
                if (temp_v4 == 0) {
                  padAlternateButtonIndex(5);
                  temp_v4 = padIsButtonRepeat();
                  if (temp_v4 == 0) {
                    temp_v4 = padIsButtonRepeat(6);
                    if (temp_v4 == 0) {
                      padAlternateButtonIndex(6);
                      temp_v4 = padIsButtonRepeat();
                      puVar9 = DAT_0044ead0;
                      if (temp_v4 == 0) goto LAB_00244490;
                    }
                    puVar9 = DAT_0044ead0;
                    if (DAT_0044ead4 != 1) {
                      DAT_0044ead8 = DAT_0044ead8 + 1;
                      DAT_0044fcb4 = 1;
                      uRam0044fcb8 = uRam0044fcb8 & 0xffffffef;
                      goto LAB_00244490;
                    }
                    DAT_0044ead4 = 2;
                    goto LAB_00244490;
                  }
                }
                if (DAT_0044ead4 == 2) {
                  DAT_0044ead4 = 1;
                  puVar9 = DAT_0044ead0;
                  goto LAB_00244490;
                }
                puVar6 = DAT_0044ead8 + -1;
                goto LAB_0024410c;
              }
            }
            temp_v4 = FUN_002c15fc(7);
            if ((temp_v4 != 0) || (temp_v4 = FUN_002c15fc(0x18), temp_v4 != 0)) {
              temp_v7 = DAT_0044ead4 != 1;
              temp_v12 = DAT_004d92bc;
              if (temp_v7) {
                temp_v12 = DAT_004d92c0;
              }
              temp_v12 = temp_v12 - (float)temp_v14 * (float)((unsigned long long)temp_v14 >> 0x20);
              temp_v10 = temp_v12;
              if (temp_v7) {
                temp_v10 = DAT_004d92bc;
                DAT_004d92c0 = temp_v12;
              }
            }
            else {
              temp_v4 = FUN_002c15fc(8);
              temp_v13 = (float)temp_v14;
              if ((temp_v4 != 0) || (temp_v4 = FUN_002c15fc(0x1c), temp_v4 != 0)) {
                temp_v7 = DAT_0044ead4 != 1;
                temp_v12 = DAT_004d92bc;
                if (temp_v7) {
                  temp_v12 = DAT_004d92c0;
                }
                temp_v12 = temp_v12 - temp_v13 * temp_v10;
                temp_v10 = temp_v12;
                if (temp_v7) {
                  temp_v10 = DAT_004d92bc;
                  DAT_004d92c0 = temp_v12;
                }
              }
              else {
                temp_v7 = DAT_0044ead4 == 1;
                temp_v12 = DAT_004d92c0;
                if (temp_v7) {
                  temp_v12 = DAT_004d92bc;
                }
                temp_v12 = temp_v12 - temp_v13;
joined_r0x00244248:
                temp_v10 = temp_v12;
                if (!temp_v7) {
                  temp_v10 = DAT_004d92bc;
                  DAT_004d92c0 = temp_v12;
                }
              }
            }
            goto LAB_0024422c;
          }
        }
        temp_v4 = FUN_002c15fc(7);
        if ((temp_v4 != 0) || (temp_v4 = FUN_002c15fc(0x18), temp_v4 != 0)) {
          temp_v7 = DAT_0044ead4 != 1;
          temp_v12 = DAT_004d92bc;
          if (temp_v7) {
            temp_v12 = DAT_004d92c0;
          }
          temp_v12 = temp_v12 + (float)temp_v14 * (float)((unsigned long long)temp_v14 >> 0x20);
        }
        else {
          temp_v4 = FUN_002c15fc(8);
          temp_v13 = (float)temp_v14;
          if ((temp_v4 == 0) && (temp_v4 = FUN_002c15fc(0x1c), temp_v4 == 0)) {
            temp_v7 = DAT_0044ead4 == 1;
            temp_v12 = DAT_004d92c0;
            if (temp_v7) {
              temp_v12 = DAT_004d92bc;
            }
            temp_v12 = temp_v12 + temp_v13;
            goto joined_r0x00244248;
          }
          temp_v7 = DAT_0044ead4 != 1;
          temp_v12 = DAT_004d92bc;
          if (temp_v7) {
            temp_v12 = DAT_004d92c0;
          }
          temp_v12 = temp_v12 + temp_v13 * temp_v10;
        }
        temp_v10 = temp_v12;
        if (temp_v7) {
          temp_v10 = DAT_004d92bc;
          DAT_004d92c0 = temp_v12;
        }
LAB_0024422c:
        DAT_004d92bc = temp_v10;
        temp_v19 = &DAT_00400003;
        puVar9 = DAT_0044ead0;
      }
    }
    else {
      if ((puVar2 != (unsigned char *)0x0) && (puVar2 != puVar13)) {
        temp_v4 = padIsButtonRepeat(3);
        if (temp_v4 == 0) {
          padAlternateButtonIndex(3);
          temp_v4 = padIsButtonRepeat();
          if (temp_v4 != 0) goto LAB_00243f30;
          temp_v4 = padIsButtonRepeat(4);
          if (temp_v4 == 0) {
            padAlternateButtonIndex(4);
            temp_v4 = padIsButtonRepeat();
            if (temp_v4 == 0) goto LAB_00244010;
          }
          temp_v4 = FUN_002c15fc(7);
          if ((temp_v4 != 0) || (temp_v4 = FUN_002c15fc(0x18), temp_v4 != 0)) {
            DAT_0044eb04 = DAT_0044eb04 - (float)temp_v14 * (float)((unsigned long long)temp_v14 >> 0x20);
          }
          else {
            temp_v4 = FUN_002c15fc(8);
            temp_v12 = (float)temp_v14;
            if ((temp_v4 == 0) && (temp_v4 = FUN_002c15fc(0x1c), temp_v4 == 0)) {
              DAT_0044eb04 = DAT_0044eb04 - temp_v12;
            }
            else {
              DAT_0044eb04 = DAT_0044eb04 - temp_v12 * temp_v10;
            }
          }
        }
        else {
LAB_00243f30:
          temp_v4 = FUN_002c15fc(7);
          if ((temp_v4 != 0) || (temp_v4 = FUN_002c15fc(0x18), temp_v4 != 0)) {
            DAT_0044eb04 = DAT_0044eb04 + (float)temp_v14 * (float)((unsigned long long)temp_v14 >> 0x20);
          }
          else {
            temp_v4 = FUN_002c15fc(8);
            temp_v12 = (float)temp_v14;
            if ((temp_v4 == 0) && (temp_v4 = FUN_002c15fc(0x1c), temp_v4 == 0)) {
              DAT_0044eb04 = DAT_0044eb04 + temp_v12;
            }
            else {
              DAT_0044eb04 = DAT_0044eb04 + temp_v12 * temp_v10;
            }
          }
        }
        temp_v19 = &DAT_00400003;
      }
LAB_00244010:
      temp_v4 = padIsButtonRepeat(5);
      if (temp_v4 == 0) {
        padAlternateButtonIndex(5);
        temp_v4 = padIsButtonRepeat();
        if (temp_v4 != 0) {
          puVar9 = DAT_0044ead0;
          if (0 < (int)DAT_0044ead0) {
            puVar9 = DAT_0044ead0 + -1;
          }
        }
        else {
          temp_v4 = padIsButtonRepeat(6);
          if (temp_v4 == 0) {
            padAlternateButtonIndex(6);
            temp_v4 = padIsButtonRepeat();
            if (temp_v4 == 0) {
              temp_v4 = padIsButtonPressed(0);
              if (temp_v4 == 0) {
                padAlternateButtonIndex(0);
                temp_v4 = padIsButtonPressed();
                puVar9 = DAT_0044ead0;
                if (temp_v4 != 0) {
                  DAT_0044eacc = 1;
                  puVar9 = DAT_0044ead0;
                }
              }
              else {
                DAT_0044eacc = 1;
                puVar9 = DAT_0044ead0;
              }
              goto LAB_00244490;
            }
          }
          puVar6 = DAT_0044ead0;
          if (puVar13 <= DAT_0044ead0) {
            puVar6 = DAT_0044ead8;
          }
          puVar6 = puVar6 + 1;
          puVar9 = puVar6;
          if (puVar13 <= DAT_0044ead0) {
LAB_0024410c:
            puVar9 = DAT_0044ead0;
            DAT_0044ead8 = puVar6;
          }
        }
      }
      else {
        puVar9 = DAT_0044ead0;
        if (0 < (int)DAT_0044ead0) {
          puVar9 = DAT_0044ead0 + -1;
        }
      }
    }
  }
LAB_00244490:
  DAT_0044ead0 = puVar9;
  if (-1 < (int)DAT_0044ead0) goto LAB_002444a4;
  DAT_0044ead0 = (unsigned char *)0x0;
LAB_002444b0:
  temp_v10 = DAT_004d92b8;
  temp_v13 = (float)((unsigned long long)temp_v16 >> 0x20);
  temp_v5 = in_fpscr & 0xfffffff;
  temp_v15 = (float)temp_v16;
  temp_v12 = temp_v13;
  if ((temp_v13 <= DAT_0044eb04) && (temp_v12 = DAT_0044eb04, (int)DAT_0044eb04 >= 0x3f800001)) {
    temp_v12 = temp_v15;
  }
  DAT_0044eb04 = temp_v12;
  temp_v12 = temp_v13;
  if ((temp_v13 <= DAT_004d92bc) && (temp_v12 = temp_v15, (int)DAT_004d92bc < 0x3f800001)) {
    temp_v12 = DAT_004d92bc;
  }
  DAT_004d92bc = temp_v12;
  if ((temp_v13 <= DAT_004d92c0) && (temp_v13 = temp_v15, (int)DAT_004d92c0 < 0x3f800001)) {
    temp_v13 = DAT_004d92c0;
  }
  DAT_004d92c0 = temp_v13;
  temp_v9 = temp_v5 | ((unsigned int)(DAT_004d92bc < DAT_004d92c0) << 0x1f) |
           ((unsigned int)(DAT_004d92bc == DAT_004d92c0) << 0x1e);
  temp_v0 = (unsigned char)(temp_v9 >> 0x18);
  temp_v12 = DAT_004d92c0;
  if (((!(unsigned char)((temp_v0 >> 6) & 1) && (unsigned char)(temp_v0 >> 7) == ((DAT_004d92bc != DAT_004d92bc) || (DAT_004d92c0 != DAT_004d92c0)))
      && (temp_v12 = DAT_004d92bc,
         (float *)*(unsigned int **)(DAT_0044fcbc + DAT_0044fcb4 * 0x18 + 8) != &DAT_004d92bc)) &&
     ((DAT_0044ead8 != (unsigned char *)0x1 || (DAT_0044ead4 != 1)))) {
    DAT_004d92bc = DAT_004d92c0;
    temp_v12 = DAT_004d92c0;
  }
  DAT_004d92c0 = temp_v12;
  temp_v13 = DAT_004d92c0;
  temp_v12 = DAT_004d92bc;
  puVar9 = (unsigned char *)(DAT_004d9290 & 0xff);
  if (puVar9 != puVar13 + -1) {
    if (puVar9 == (unsigned char *)0x1) {
      DAT_004d92a0 = 0.5f;
    }
    else if (puVar9 == (unsigned char *)0x2) {
      DAT_004d92a8 = (DAT_004d92a0 + temp_v15) * 0.5f;
    }
  }
  *temp_v20 = DAT_004d92b4;
  temp_v20[1] = temp_v10;
  temp_v20[2] = temp_v12;
  temp_v20[3] = temp_v13;
  temp_v3 = DAT_004d92ac;
  temp_v15 = DAT_004d92a8;
  temp_v2 = DAT_004d92a4;
  temp_v13 = DAT_004d92a0;
  temp_v12 = DAT_004d929c;
  temp_v10 = DAT_004d9298;
  temp_v1 = DAT_004d9294;
  *param_1 = DAT_004d9290;
  param_1[1] = temp_v1;
  param_1[2] = (unsigned int)temp_v10;
  param_1[3] = (unsigned int)temp_v12;
  param_1[4] = (unsigned int)temp_v13;
  param_1[5] = temp_v2;
  param_1[6] = (unsigned int)temp_v15;
  param_1[7] = temp_v3;
  param_1[8] = DAT_004d92b0;
  if (puVar2 == (unsigned char *)0x0) {
    param_1[1] = (unsigned int)DAT_0044eadc;
  }
  else if (puVar2 == puVar13) {
    param_1[2] = (unsigned int)DAT_0044eadc;
  }
  else {
    pfVar8 = (float *)(param_1 + (int)puVar2 * 2);
    pfVar8[1] = DAT_0044eadc;
    temp_v10 = DAT_0044eb04;
    pfVar8[2] = DAT_0044eb04;
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
  temp_v17[(int)(puVar2 + -1) + 1] = DAT_0044eadc;
  temp_v17[(int)puVar10 + 4] = DAT_0044eb04;
  iRam0044eb08 = (int)(DAT_0044eb04 * temp_v10);
  DAT_0044eb0c = (int)(DAT_004d92bc * temp_v13);
  DAT_0044eb10 = (int)(DAT_004d92c0 * temp_v12);
  FUN_00282780(0xa0,8,200,0xb0);
  effEditorNodeChainApply(&DAT_0044fca8);
  if (DAT_0044eacc == 1) {
    effEditorNodeChainApply(0x44f970);
  }
  FUN_002826d4(0xa8,0x10,0xb8,0x10,0x80808080,0xff000000);
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
      effMenuListAppend();
      puVar2 = &g_effectEditor;
      if (puVar10 == DAT_0044ead0) {
        puVar2 = DAT_0044ead8;
      }
      if (!(puVar10 == DAT_0044ead0 && puVar2 == (unsigned char *)0x0)) {
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
        effMenuListAppend();
        temp_v4 = 0x10000;
        memAlloc(0x10000,0x100,0,0x68,0x10,1);
        *(unsigned int *)(temp_v4 + 0x18) = 0xff00ff00;
        *(int *)(temp_v4 + 8) = temp_v6;
        *(unsigned int *)(temp_v4 + 4) = 6;
        *(unsigned int *)(temp_v4 + 0xc) = 0xc;
        *(int *)(temp_v4 + 0x10) = temp_v6;
        *(unsigned int *)(temp_v4 + 0x14) = 0x24;
      }
      effMenuListAppend();
      puVar10 = puVar10 + 1;
    } while (puVar10 < puVar13);
  }
  if ((puVar13 != DAT_0044ead0) || (DAT_0044ead8 != (unsigned char *)0x0)) {
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
    effMenuListAppend();
    temp_v4 = 0x10000;
    memAlloc(0x10000,0x100,0,0x68,0x10,1);
    *(unsigned int *)(temp_v4 + 4) = 6;
    *(unsigned int *)(temp_v4 + 8) = 0x160;
    *(unsigned int *)(temp_v4 + 0xc) = 0xc;
    *(unsigned int *)(temp_v4 + 0x10) = 0x160;
    *(unsigned int *)(temp_v4 + 0x14) = 0x24;
    *(unsigned int *)(temp_v4 + 0x18) = 0xff00ff00;
  }
  effMenuListAppend();
  temp_v18[0] = (float)((unsigned long long)temp_v16 >> 0x20);
  temp_v17[1] = *temp_v20;
  temp_v18[1] = temp_v20[2];
  temp_v18[2] = temp_v20[3];
  temp_v17[3] = 0.0f;
  temp_v18[3] = (float)temp_v16;
  temp_v17[2] = temp_v17[1];
  FUN_002826d4(0xa8,0x2c,0xb8,0x10,0x80808080,0xff000000);
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
    effMenuListAppend();
    puVar13 = &g_effectEditor;
    if (temp_v5 == DAT_0044ead4) {
      puVar13 = DAT_0044ead8;
    }
    if (!(temp_v5 == DAT_0044ead4 && puVar13 == (unsigned char *)0x1)) {
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
      effMenuListAppend();
      temp_v4 = 0x10000;
      memAlloc(0x10000,0x100,0,0x68,0x10,1);
      *(int *)(temp_v4 + 8) = temp_v6;
      *(unsigned int *)(temp_v4 + 0x18) = 0xff00ff00;
      *(unsigned int *)(temp_v4 + 0x14) = 0x40;
      *(int *)(temp_v4 + 0x10) = temp_v6;
      *(unsigned int *)(temp_v4 + 4) = 6;
      *(unsigned int *)(temp_v4 + 0xc) = 0x28;
    }
    effMenuListAppend();
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
  effMenuListAppend();
  asdDebugLog(0xa4,0x44,8,&LAB_00244d88,temp_v21);
  temp_v4 = padIsButtonPressed(1);
  if (temp_v4 == 0) {
    padAlternateButtonIndex(1);
    temp_v4 = padIsButtonPressed();
    if (temp_v4 == 0) {
      temp_v5 = uRam0044f980;
      if (DAT_0044eacc == 0) {
LAB_00244d24:
        temp_v5 = uRam0044fcb8;
      }
      if ((temp_v5 & 8) != 0) {
        temp_v19 = (unsigned char *)((unsigned int)temp_v19 | 2);
      }
      return temp_v19;
    }
  }
  if (DAT_0044eacc != 0) {
    DAT_0044eacc = 0;
    goto LAB_00244d24;
  }
  temp_v19 = (unsigned char *)((unsigned int)temp_v19 & 0xfffffffe);
  goto LAB_00244d24;
}

} /* extern "C" */
