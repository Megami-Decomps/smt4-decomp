/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024330c` (_code @ 0x24330c, 0x9f8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024dd00(...);
int FUN_0024dd48(int);
int FUN_0024dd80(...);
int FUN_0024dd90(int);
int effMenuListAppend(void);
int FUN_002826d4(...);
int FUN_00282780(int, int, int, int);
int FUN_002b8cec(...);
int FUN_002bfde4(...);
int memAlloc(...);
int VectorUnsignedToFloat(int, int);

/* stack frame of param_4: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_4_stack;

extern unsigned char LAB_00243d04; /* 0x243d04 */
extern unsigned char DAT_00400001; /* 0x400001 */
extern unsigned char DAT_00400003; /* 0x400003 */
extern signed char DAT_0044ea89; /* 0x44ea89 */
extern int DAT_0044eae0; /* 0x44eae0 */
extern unsigned int DAT_0044eae4; /* 0x44eae4 */
extern int DAT_0044eae8; /* 0x44eae8 */
extern float DAT_0044eaec; /* 0x44eaec */
extern float DAT_0044eaf0; /* 0x44eaf0 */
extern int iRam0044eaf4; /* 0x44eaf4 */
extern unsigned int DAT_004d92c4; /* 0x4d92c4 */
extern unsigned int DAT_004d92c8; /* 0x4d92c8 */
extern unsigned int DAT_004d92cc; /* 0x4d92cc */
extern unsigned int DAT_004d92d0; /* 0x4d92d0 */
extern unsigned int DAT_004d92d4; /* 0x4d92d4 */
extern unsigned int DAT_004d92d8; /* 0x4d92d8 */
extern float DAT_004d92dc; /* 0x4d92dc */
extern unsigned int DAT_004d92e0; /* 0x4d92e0 */
extern float DAT_004d92e4; /* 0x4d92e4 */
extern unsigned int DAT_004d92e8; /* 0x4d92e8 */
extern unsigned int DAT_004d92ec; /* 0x4d92ec */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_0024dd00. */
/* Supplied declaration required: FUN_0024dd48. */
/* Supplied declaration required: FUN_0024dd80. */
/* Supplied declaration required: FUN_0024dd90. */
/* Supplied declaration required: effMenuListAppend. */
/* Supplied declaration required: FUN_002826d4. */
/* Supplied declaration required: FUN_00282780. */
/* Supplied declaration required: FUN_002b8cec. */
/* Supplied declaration required: FUN_002bfde4. */
/* Supplied declaration required: memAlloc. */


unsigned char * FUN_0024330c(unsigned int *param_1,int param_2,int param_3,int param_4)

{
/* irregular: 2 goto(s); irregular input(s): in_d8, in_fpscr; 14 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  float temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned char temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  int temp_v15;
  int temp_v16;
  float *pfVar18;
  unsigned char temp_v17;
  unsigned char temp_v18;
  unsigned int in_fpscr;
  unsigned int temp_v19;
  float temp_v20;
  float temp_v21;
  unsigned long long in_d8;
  unsigned long long temp_v22;
  float temp_v23;
  float temp_v24 [2];
  unsigned int temp_v25;
  float afStack_74 [2];
  float temp_v26;
  unsigned int temp_v27;
  unsigned char *temp_v28;
  unsigned int temp_v29;
  unsigned int *puStack_34;
  int temp_v30;
  int temp_v31;
  int temp_v32;
  
  temp_v20 = (float)((unsigned long long)in_d8 >> 0x20);
  temp_v32 = param_4;
  temp_v31 = param_3;
  temp_v30 = param_2;
  puStack_34 = param_1;
  temp_v22 = 0x3f800000;
  if (param_2 == 0) {
    temp_v20 = 0.0f;
  }
  temp_v28 = &DAT_00400001;
  if (param_2 != 0) {
    temp_v20 = (float)VectorUnsignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v20 = 1.0f / temp_v20;
  }
  temp_v13 = 1;
  temp_v24[0] = (float)param_1[1];
  afStack_74[1] = 0.0f;
  if ((char)*param_1 != '\x01') {
    if ((char)*param_1 != '\x02') {
      *(char *)param_1 = '\0';
    }
    else {
      temp_v13 = 3;
      temp_v24[1] = (float)param_1[5];
      temp_v26 = (float)param_1[6];
      temp_v25 = param_1[7];
      temp_v27 = param_1[8];
      if ((int)param_1[6] >= 0x3f800001) {
        temp_v26 = 1.0f;
        param_1[6] = 0x3f800000;
      }
      if ((int)param_1[8] >= 0x3f800001) {
        temp_v27 = 0x3f800000;
        param_1[8] = 0x3f800000;
      }
    }
  }
  else {
    temp_v13 = 2;
    temp_v24[1] = (float)param_1[5];
    temp_v26 = (float)param_1[6];
    if ((int)param_1[6] >= 0x3f800001) {
      temp_v26 = 1.0f;
      param_1[6] = 0x3f800000;
    }
  }
  temp_v1 = DAT_0044eae4;
  temp_v24[temp_v13] = (float)param_1[2];
  afStack_74[temp_v13 + 1] = 1.0f;
  DAT_004d92c4 = *param_1;
  DAT_004d92c8 = param_1[1];
  DAT_004d92cc = param_1[2];
  DAT_004d92d0 = param_1[3];
  DAT_004d92d4 = param_1[4];
  DAT_004d92d8 = param_1[5];
  DAT_004d92dc = (float)param_1[6];
  DAT_004d92e0 = param_1[7];
  pfVar18 = temp_v24 + DAT_0044eae4;
  temp_v16 = DAT_0044eae4 + 1;
  DAT_004d92e4 = (float)param_1[8];
  DAT_004d92e8 = param_1[9];
  DAT_004d92ec = param_1[10];
  DAT_0044eaec = *pfVar18;
  DAT_0044eaf0 = afStack_74[temp_v16];
  if ((DAT_0044ea89 == '\0') && (FUN_0024dd90(param_3), DAT_0044eae0 == 1)) {
    FUN_0024dd90(temp_v32);
  }
  if (DAT_0044eae0 == 0) {
    if (DAT_0044eae8 != 0) {
      if (DAT_0044eae8 == 1) {
        temp_v9 = FUN_002b8cec(5);
        if (temp_v9 == 0) {
          FUN_0024dd80(5);
          temp_v9 = FUN_002b8cec();
          if (temp_v9 != 0) {
            if ((*(unsigned int *)(temp_v31 + 0x10) & 0x20) != 0) {
              DAT_0044eae8 = DAT_0044eae8 - 1;
              *(unsigned int *)(temp_v31 + 0x10) = *(unsigned int *)(temp_v31 + 0x10) | 0x10;
            }
          }
          else {
            temp_v9 = FUN_002b8cec(6);
            if (temp_v9 == 0) {
              FUN_0024dd80(6);
              temp_v9 = FUN_002b8cec();
              if (temp_v9 != 0) {
                if ((*(unsigned int *)(temp_v31 + 0x10) & 0x20) != 0) {
                  DAT_0044eae8 = 0;
                  DAT_0044eae4 = 0;
                  *(unsigned int *)(temp_v31 + 0x10) = *(unsigned int *)(temp_v31 + 0x10) | 0x10;
                }
              }
            }
            else if ((*(unsigned int *)(temp_v31 + 0x10) & 0x20) != 0) {
              DAT_0044eae8 = 0;
              DAT_0044eae4 = 0;
              *(unsigned int *)(temp_v31 + 0x10) = *(unsigned int *)(temp_v31 + 0x10) | 0x10;
            }
          }
        }
        else if ((*(unsigned int *)(temp_v31 + 0x10) & 0x20) != 0) {
          DAT_0044eae8 = DAT_0044eae8 - 1;
          *(unsigned int *)(temp_v31 + 0x10) = *(unsigned int *)(temp_v31 + 0x10) | 0x10;
        }
      }
    }
    else {
      if ((temp_v1 != 0) && (temp_v1 != temp_v13)) {
        temp_v9 = FUN_002b8cec(0x20);
        temp_v21 = 10.0f;
        if (temp_v9 != 0) {
          DAT_0044eaf0 = DAT_0044eaf0 + temp_v20 * 10.0f;
        }
        else {
          temp_v9 = FUN_002b8cec(0x20);
          if (temp_v9 != 0) {
            DAT_0044eaf0 = DAT_0044eaf0 - temp_v20 * temp_v21;
          }
          else {
            temp_v9 = FUN_002b8cec(3);
            if (temp_v9 == 0) {
              FUN_0024dd80(3);
              temp_v9 = FUN_002b8cec();
              if (temp_v9 != 0) {
                DAT_0044eaf0 = DAT_0044eaf0 + temp_v20;
              }
              else {
                temp_v9 = FUN_002b8cec(4);
                if (temp_v9 == 0) {
                  FUN_0024dd80(4);
                  temp_v9 = FUN_002b8cec();
                  if (temp_v9 == 0) goto LAB_00243564;
                }
                DAT_0044eaf0 = DAT_0044eaf0 - temp_v20;
              }
            }
            else {
              DAT_0044eaf0 = DAT_0044eaf0 + temp_v20;
            }
          }
        }
        temp_v28 = &DAT_00400003;
      }
LAB_00243564:
      temp_v9 = FUN_002b8cec(5);
      if (temp_v9 == 0) {
        FUN_0024dd80(5);
        temp_v9 = FUN_002b8cec();
        if (temp_v9 != 0) {
          if (0 < (int)DAT_0044eae4) {
            DAT_0044eae4 = DAT_0044eae4 - 1;
          }
        }
        else {
          temp_v9 = FUN_002b8cec(6);
          if (temp_v9 == 0) {
            FUN_0024dd80(6);
            temp_v9 = FUN_002b8cec();
            if (temp_v9 != 0) {
              if (DAT_0044eae4 < temp_v13) {
                DAT_0044eae4 = DAT_0044eae4 + 1;
              }
              else {
                DAT_0044eae8 = DAT_0044eae8 + 1;
                *(unsigned int *)(temp_v31 + 0x10) = *(unsigned int *)(temp_v31 + 0x10) & 0xffffffef;
              }
            }
            else {
              temp_v9 = FUN_002bfde4(0);
              if (temp_v9 == 0) {
                FUN_0024dd80(0);
                temp_v9 = FUN_002bfde4();
                if (temp_v9 != 0) {
                  DAT_0044eae0 = 1;
                }
              }
              else {
                DAT_0044eae0 = 1;
              }
            }
          }
          else if (DAT_0044eae4 < temp_v13) {
            DAT_0044eae4 = DAT_0044eae4 + 1;
          }
          else {
            DAT_0044eae8 = DAT_0044eae8 + 1;
            *(unsigned int *)(temp_v31 + 0x10) = *(unsigned int *)(temp_v31 + 0x10) & 0xffffffef;
          }
        }
      }
      else if (0 < (int)DAT_0044eae4) {
        DAT_0044eae4 = DAT_0044eae4 - 1;
      }
    }
  }
  temp_v8 = DAT_004d92e0;
  temp_v6 = DAT_004d92d8;
  temp_v5 = DAT_004d92d4;
  temp_v4 = DAT_004d92d0;
  temp_v3 = DAT_004d92cc;
  temp_v2 = DAT_004d92c8;
  temp_v21 = DAT_0044eaec;
  temp_v23 = (float)((unsigned long long)temp_v22 >> 0x20);
  temp_v10 = in_fpscr & 0xfffffff;
  temp_v19 = temp_v10 | ((unsigned int)(temp_v23 <= DAT_0044eaf0) << 0x1d);
  if ((romwright_subpiece_4_1_0(temp_v19 >> 0x1d,0)) && (temp_v23 = DAT_0044eaf0, (int)DAT_0044eaf0 >= 0x3f800001)) {
    temp_v23 = (float)temp_v22;
  }
  DAT_0044eaf0 = temp_v23;
  temp_v23 = DAT_0044eaf0;
  *pfVar18 = DAT_0044eaec;
  afStack_74[temp_v16] = DAT_0044eaf0;
  temp_v12 = DAT_004d92c4;
  if (temp_v12 != temp_v13 - 1) {
    if (temp_v12 == 1) {
      DAT_004d92dc = 0.5f;
    }
    else if (temp_v12 == 2) {
      DAT_004d92e4 = ((float)temp_v22 - DAT_004d92dc) * 0.5f;
    }
  }
  temp_v7 = DAT_004d92dc;
  *param_1 = DAT_004d92c4;
  param_1[1] = temp_v2;
  param_1[2] = temp_v3;
  param_1[3] = temp_v4;
  param_1[4] = temp_v5;
  param_1[5] = temp_v6;
  param_1[6] = (unsigned int)temp_v7;
  param_1[7] = temp_v8;
  temp_v2 = DAT_004d92e8;
  temp_v7 = DAT_004d92e4;
  param_1[10] = DAT_004d92ec;
  param_1[8] = (unsigned int)temp_v7;
  param_1[9] = temp_v2;
  if (temp_v1 == 0) {
    param_1[1] = (unsigned int)temp_v24[0];
  }
  else if (temp_v1 == temp_v13) {
    param_1[2] = (unsigned int)temp_v21;
  }
  else {
    param_1[temp_v1 * 2 + 3] = (unsigned int)temp_v21;
    param_1[temp_v1 * 2 + 4] = (unsigned int)temp_v23;
    if (temp_v13 >= 3) {
      if (temp_v1 >= 2) {
        temp_v21 = (float)param_1[temp_v1 * 2 + 2];
        temp_v19 = temp_v10 | ((unsigned int)(temp_v21 < temp_v23) << 0x1f) | ((unsigned int)(temp_v21 == temp_v23) << 0x1e);
        temp_v0 = (unsigned char)(temp_v19 >> 0x18);
        temp_v17 = (unsigned char)(temp_v0 >> 7);
        temp_v18 = (unsigned char)((temp_v0 >> 6) & 1);
        if (!temp_v18 && temp_v17 == ((temp_v21 != temp_v21) || (temp_v23 != temp_v23))) {
          param_1[temp_v1 * 2 + 2] = (unsigned int)temp_v23;
        }
        if (!temp_v18 && temp_v17 == ((temp_v21 != temp_v21) || (temp_v23 != temp_v23))) {
          afStack_74[temp_v1] = temp_v23;
        }
      }
      else {
        temp_v21 = (float)param_1[temp_v1 * 2 + 6];
        temp_v19 = temp_v10 | ((unsigned int)(temp_v23 < temp_v21) << 0x1f) | ((unsigned int)(temp_v23 == temp_v21) << 0x1e);
        temp_v0 = (unsigned char)(temp_v19 >> 0x18);
        temp_v17 = (unsigned char)(temp_v0 >> 7);
        temp_v18 = (unsigned char)((temp_v0 >> 6) & 1);
        if (!temp_v18 && temp_v17 == ((temp_v23 != temp_v23) || (temp_v21 != temp_v21))) {
          param_1[temp_v1 * 2 + 6] = (unsigned int)temp_v23;
        }
        if (!temp_v18 && temp_v17 == ((temp_v23 != temp_v23) || (temp_v21 != temp_v21))) {
          afStack_74[temp_v1 + 2] = temp_v23;
        }
      }
    }
  }
  temp_v21 = (float)VectorUnsignedToFloat(temp_v30,(unsigned char)(temp_v19 >> 0x16) & 3);
  iRam0044eaf4 = (int)(temp_v23 * temp_v21);
  FUN_00282780(0xa0,8,0xa0,0xba);
  FUN_0024dd48(temp_v31);
  if (DAT_0044eae0 == 1) {
    FUN_0024dd48(temp_v32);
  }
  temp_v23 = (float)((unsigned long long)temp_v22 >> 0x20);
  temp_v10 = 0;
  temp_v21 = temp_v23;
  do {
    pfVar18 = temp_v24 + temp_v10;
    temp_v10 = temp_v10 + 1;
    if (temp_v21 < romwright_fabs_4(*pfVar18)) {
      temp_v21 = romwright_fabs_4(*pfVar18);
    }
  } while (temp_v10 <= temp_v13);
  temp_v16 = 0xa8;
  temp_v9 = 0x10;
  if (temp_v21 == temp_v23) {
    temp_v21 = (float)temp_v22;
  }
  temp_v11 = 0x10000;
  memAlloc(0x10000,0x100,0,0x68,0x10,1);
  *(unsigned int *)(temp_v11 + 0xc) = 0x10;
  *(unsigned int *)(temp_v11 + 8) = 0xa8;
  *(unsigned int *)(temp_v11 + 4) = 6;
  *(unsigned int *)(temp_v11 + 0x18) = 0x80808080;
  *(unsigned int *)(temp_v11 + 0x10) = 0xa8;
  *(unsigned int *)(temp_v11 + 0x14) = 0x6a;
  effMenuListAppend();
  temp_v29 = 0x138;
  temp_v11 = 0x10000;
  memAlloc(0x10000,0x100,0,0x68,0x10,1);
  *(unsigned int *)(temp_v11 + 0x18) = 0xff404040;
  *(unsigned int *)(temp_v11 + 4) = 6;
  *(unsigned int *)(temp_v11 + 8) = 0xa8;
  *(unsigned int *)(temp_v11 + 0xc) = 0x3d;
  *(unsigned int *)(temp_v11 + 0x10) = temp_v29;
  *(unsigned int *)(temp_v11 + 0x14) = 0x3d;
  effMenuListAppend();
  FUN_002826d4(0xa8,0x10,0x90,0x5a,0,0xff000000);
  if (temp_v13 != 0) {
    temp_v20 = 144.0f;
    temp_v22 = 0x42340000;
  }
  temp_v10 = 0;
  if (temp_v10 < temp_v13) {
    do {
      temp_v16 = (int)(afStack_74[temp_v10 + 2] * temp_v20) + 0xa8;
      temp_v14 = (int)(afStack_74[temp_v10 + 1] * temp_v20) + 0xa8;
      temp_v9 = 0x3d - (int)((temp_v24[temp_v10 + 1] / temp_v21) * (float)temp_v22);
      temp_v15 = 0x3d - (int)((temp_v24[temp_v10] / temp_v21) * (float)temp_v22);
      temp_v11 = 0x10000;
      memAlloc(0x10000,0x100,0,0x68,0x10,1);
      *(unsigned int *)(temp_v11 + 4) = 6;
      *(int *)(temp_v11 + 8) = temp_v14;
      *(int *)(temp_v11 + 0xc) = temp_v15;
      *(int *)(temp_v11 + 0x10) = temp_v16;
      *(int *)(temp_v11 + 0x14) = temp_v9;
      *(unsigned int *)(temp_v11 + 0x18) = 0xffffffff;
      effMenuListAppend();
      if ((temp_v10 != temp_v1) || (DAT_0044eae8 != 0)) {
        temp_v11 = 0x10000;
        memAlloc(0x10000,0x100,0,0x68,0x10,1);
        *(unsigned int *)(temp_v11 + 4) = 3;
        *(int *)(temp_v11 + 8) = temp_v14;
        *(int *)(temp_v11 + 0xc) = temp_v15;
        *(unsigned int *)(temp_v11 + 0x10) = 0xff00ffff;
        effMenuListAppend();
      }
      else {
        temp_v11 = 0x10000;
        memAlloc(0x10000,0x100,0,0x68,0x10,1);
        *(unsigned int *)(temp_v11 + 4) = 3;
        *(int *)(temp_v11 + 8) = temp_v14;
        *(int *)(temp_v11 + 0xc) = temp_v15;
        *(unsigned int *)(temp_v11 + 0x10) = 0xff00ff00;
        effMenuListAppend();
      }
      temp_v10 = temp_v10 + 1;
    } while (temp_v10 < temp_v13);
  }
  if ((temp_v13 != temp_v1) || (DAT_0044eae8 != 0)) {
    temp_v11 = 0x10000;
    memAlloc(0x10000,0x100,0,0x68,0x10,1);
    *(unsigned int *)(temp_v11 + 0x10) = 0xff00ffff;
    *(unsigned int *)(temp_v11 + 4) = 3;
    *(int *)(temp_v11 + 8) = temp_v16;
    *(int *)(temp_v11 + 0xc) = temp_v9;
    effMenuListAppend();
  }
  else {
    temp_v11 = 0x10000;
    memAlloc(0x10000,0x100,0,0x68,0x10,1);
    *(unsigned int *)(temp_v11 + 0x10) = 0xff00ff00;
    *(unsigned int *)(temp_v11 + 4) = 3;
    *(int *)(temp_v11 + 8) = temp_v16;
    *(int *)(temp_v11 + 0xc) = temp_v9;
    effMenuListAppend();
  }
  FUN_0024dd00(0xa4,0x6e,8,&LAB_00243d04,temp_v30);
  temp_v16 = FUN_002bfde4(1);
  if (temp_v16 == 0) {
    FUN_0024dd80(1);
    temp_v16 = FUN_002bfde4();
    if (temp_v16 != 0) goto LAB_00243c88;
    if (DAT_0044eae0 != 0) {
      temp_v13 = *(unsigned int *)(temp_v32 + 0x10);
      if ((temp_v13 & 8) != 0) {
        temp_v28 = (unsigned char *)((unsigned int)temp_v28 | 2);
      }
      return temp_v28;
    }
  }
  else {
LAB_00243c88:
    if (DAT_0044eae0 != 0) {
      DAT_0044eae0 = 0;
    }
    else {
      temp_v28 = (unsigned char *)((unsigned int)temp_v28 & 0xfffffffe);
    }
  }
  temp_v13 = *(unsigned int *)(temp_v31 + 0x10);
  if ((temp_v13 & 8) != 0) {
    temp_v28 = (unsigned char *)((unsigned int)temp_v28 | 2);
  }
  return temp_v28;
}

} /* extern "C" */
