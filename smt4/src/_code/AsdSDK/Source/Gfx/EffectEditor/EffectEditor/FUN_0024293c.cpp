/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024293c` (_code @ 0x24293c, 0x644 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024dd00(...);
int FUN_0024dd48(unsigned char *);
int FUN_0024dd80(...);
int FUN_0024dd90(unsigned char *);
int effMenuListAppend(void);
int FUN_002826d4(int, int, int, int, unsigned int, unsigned int);
int FUN_00282780(int, int, int, int);
int FUN_002b8cec(...);
int FUN_002bfde4(...);
int memAlloc(...);
int VectorSignedToFloat(int, int);

/* stack frame of param_2: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_2_stack;

extern unsigned char LAB_00242f8c; /* 0x242f8c */
extern unsigned char DAT_00400001; /* 0x400001 */
extern unsigned char DAT_00400003; /* 0x400003 */
extern signed char DAT_0044ea89; /* 0x44ea89 */
extern unsigned int DAT_0044ead4; /* 0x44ead4 */
extern int DAT_0044ead8; /* 0x44ead8 */
extern int DAT_0044eb0c; /* 0x44eb0c */
extern int DAT_0044eb10; /* 0x44eb10 */
extern int DAT_0044fcb4; /* 0x44fcb4 */
extern int DAT_0044fcbc; /* 0x44fcbc */
extern unsigned char DAT_0044fe30; /* 0x44fe30 */
extern unsigned int DAT_004d92b4; /* 0x4d92b4 */
extern unsigned int DAT_004d92b8; /* 0x4d92b8 */
extern float DAT_004d92bc; /* 0x4d92bc */
extern float DAT_004d92c0; /* 0x4d92c0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
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


unsigned char * FUN_0024293c(unsigned int *param_1,int param_2)

{
/* irregular: 3 goto(s); irregular input(s): in_fpscr; 13 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char *puVar8;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  int temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned long long temp_v13;
  unsigned int temp_v14 [5];
  float temp_v15 [10];
  unsigned int *puStack_2c;
  int temp_v16;
  
  temp_v13 = 0x3f800000;
  if (param_2 < 1) {
    temp_v8 = 0.0f;
  }
  else {
    temp_v8 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = 1.0f / temp_v8;
  }
  DAT_004d92b4 = *param_1;
  DAT_004d92b8 = param_1[1];
  DAT_004d92bc = (float)param_1[2];
  DAT_004d92c0 = (float)param_1[3];
  puStack_2c = param_1;
  temp_v16 = param_2;
  if (DAT_0044ea89 == '\0') {
    FUN_0024dd90(&DAT_0044fe30);
  }
  temp_v2 = FUN_002b8cec(0x20);
  puVar8 = &DAT_00400003;
  temp_v12 = 10.0f;
  if (temp_v2 != 0) {
    temp_v7 = DAT_0044ead4 == 1;
    temp_v9 = DAT_004d92bc;
    if (!temp_v7) {
      temp_v9 = DAT_004d92c0;
    }
    temp_v9 = temp_v9 + temp_v8 * 10.0f;
    temp_v8 = temp_v9;
    if (!temp_v7) {
      temp_v8 = DAT_004d92bc;
      DAT_004d92c0 = temp_v9;
    }
  }
  else {
    temp_v2 = FUN_002b8cec(0x20);
    if (temp_v2 != 0) {
      temp_v7 = DAT_0044ead4 == 1;
      temp_v9 = DAT_004d92bc;
      if (!temp_v7) {
        temp_v9 = DAT_004d92c0;
      }
      temp_v9 = temp_v9 - temp_v8 * temp_v12;
      temp_v8 = temp_v9;
      if (!temp_v7) {
        temp_v8 = DAT_004d92bc;
        DAT_004d92c0 = temp_v9;
      }
    }
    else {
      temp_v2 = FUN_002b8cec(3);
      if (temp_v2 == 0) {
        FUN_0024dd80(3);
        temp_v2 = FUN_002b8cec();
        if (temp_v2 != 0) goto LAB_00242a4c;
        temp_v2 = FUN_002b8cec(4);
        if (temp_v2 == 0) {
          FUN_0024dd80(4);
          temp_v2 = FUN_002b8cec();
          if (temp_v2 == 0) {
            temp_v2 = FUN_002b8cec(5);
            puVar8 = &DAT_00400001;
            if (temp_v2 == 0) {
              FUN_0024dd80(5);
              temp_v2 = FUN_002b8cec();
              if ((temp_v2 == 0) && (temp_v2 = FUN_002b8cec(6), temp_v2 == 0)) {
                FUN_0024dd80(6);
                temp_v2 = FUN_002b8cec();
                temp_v8 = DAT_004d92bc;
                if (temp_v2 == 0) goto LAB_00242b34;
              }
            }
            temp_v8 = DAT_004d92bc;
            if (DAT_0044ead4 == 1) {
              DAT_0044ead4 = 2;
            }
            else {
              DAT_0044ead4 = 1;
            }
            goto LAB_00242b34;
          }
        }
        temp_v7 = DAT_0044ead4 == 1;
        temp_v9 = DAT_004d92bc;
        if (!temp_v7) {
          temp_v9 = DAT_004d92c0;
        }
        temp_v9 = temp_v9 - temp_v8;
      }
      else {
LAB_00242a4c:
        temp_v7 = DAT_0044ead4 == 1;
        temp_v9 = DAT_004d92bc;
        if (!temp_v7) {
          temp_v9 = DAT_004d92c0;
        }
        temp_v9 = temp_v9 + temp_v8;
      }
      temp_v8 = temp_v9;
      if (!temp_v7) {
        temp_v8 = DAT_004d92bc;
        DAT_004d92c0 = temp_v9;
      }
    }
  }
LAB_00242b34:
  DAT_004d92bc = temp_v8;
  temp_v1 = DAT_004d92b8;
  temp_v12 = (float)((unsigned long long)temp_v13 >> 0x20);
  temp_v8 = temp_v12;
  if ((temp_v12 <= DAT_004d92bc) && (temp_v8 = (float)temp_v13, (int)DAT_004d92bc < 0x3f800001)) {
    temp_v8 = DAT_004d92bc;
  }
  DAT_004d92bc = temp_v8;
  if ((temp_v12 <= DAT_004d92c0) && (temp_v12 = (float)temp_v13, (int)DAT_004d92c0 < 0x3f800001)) {
    temp_v12 = DAT_004d92c0;
  }
  DAT_004d92c0 = temp_v12;
  temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(DAT_004d92bc < DAT_004d92c0) << 0x1f) |
          ((unsigned int)(DAT_004d92bc == DAT_004d92c0) << 0x1e);
  temp_v0 = (unsigned char)(temp_v5 >> 0x18);
  temp_v8 = DAT_004d92c0;
  if (((!(unsigned char)((temp_v0 >> 6) & 1) && (unsigned char)(temp_v0 >> 7) == ((DAT_004d92bc != DAT_004d92bc) || (DAT_004d92c0 != DAT_004d92c0)))
      && (temp_v8 = DAT_004d92bc,
         (float *)*(unsigned int **)(DAT_0044fcbc + DAT_0044fcb4 * 0x18 + 8) != &DAT_004d92bc)) &&
     ((DAT_0044ead8 != 1 || (DAT_0044ead4 != 1)))) {
    DAT_004d92bc = DAT_004d92c0;
    temp_v8 = DAT_004d92c0;
  }
  DAT_004d92c0 = temp_v8;
  temp_v12 = DAT_004d92c0;
  temp_v8 = DAT_004d92bc;
  temp_v11 = (float)VectorSignedToFloat(temp_v16,(unsigned char)(temp_v5 >> 0x16) & 3);
  temp_v9 = (float)VectorSignedToFloat(temp_v16,(unsigned char)(temp_v5 >> 0x16) & 3);
  DAT_0044eb0c = (int)(DAT_004d92bc * temp_v11);
  DAT_0044eb10 = (int)(DAT_004d92c0 * temp_v9);
  *param_1 = DAT_004d92b4;
  param_1[1] = temp_v1;
  *(float *)&param_1[2] = temp_v8;
  *(float *)&param_1[3] = temp_v12;
  FUN_00282780(0xa0,0x6c,0xdc,0x4c);
  FUN_0024dd48(&DAT_0044fe30);
  temp_v14[0] = 0;
  temp_v15[0] = (float)((unsigned long long)temp_v13 >> 0x20);
  temp_v14[1] = 0xff;
  temp_v15[1] = (float)param_1[2];
  temp_v14[2] = 0xff;
  temp_v15[2] = (float)param_1[3];
  temp_v14[3] = 0;
  temp_v15[3] = (float)temp_v13;
  FUN_002826d4(0xa8,0x74,0xb8,0x10,0x80808080,0xff000000);
  temp_v13 = 0x43380000;
  temp_v5 = 0;
  do {
    temp_v8 = temp_v15[temp_v5 + 1];
    temp_v12 = (float)temp_v13;
    temp_v3 = temp_v14[temp_v5];
    temp_v4 = temp_v14[temp_v5 + 1];
    temp_v10 = (int)(temp_v15[temp_v5] * temp_v12);
    temp_v6 = temp_v10 + 0xa8;
    temp_v2 = 0x10000;
    memAlloc(0x10000,0x100,0,0x68,0x10,1);
    *(unsigned int *)(temp_v2 + 0xc) = 0x74;
    *(int *)(temp_v2 + 0x10) = ((int)(temp_v8 * temp_v12) + 0xa8) - temp_v6;
    *(unsigned int *)(temp_v2 + 0x14) = 0x10;
    *(unsigned int *)(temp_v2 + 4) = 4;
    *(int *)(temp_v2 + 8) = temp_v6;
    *(unsigned int *)(temp_v2 + 0x18) = temp_v3 | (temp_v3 << 0x10) | (temp_v3 << 8) | 0xff000000;
    *(unsigned int *)(temp_v2 + 0x1c) = temp_v4 | (temp_v4 << 0x10) | (temp_v4 << 8) | 0xff000000;
    effMenuListAppend();
    if (temp_v5 == DAT_0044ead4) {
      temp_v10 = temp_v10 + 0xa7;
      temp_v2 = 0x10000;
      memAlloc(0x10000,0x100,0,0x68,0x10,1);
      *(int *)(temp_v2 + 8) = temp_v10;
      *(unsigned int *)(temp_v2 + 0x18) = 0xff00ff00;
      *(unsigned int *)(temp_v2 + 4) = 6;
      *(unsigned int *)(temp_v2 + 0xc) = 0x70;
      *(int *)(temp_v2 + 0x10) = temp_v10;
      *(unsigned int *)(temp_v2 + 0x14) = 0x88;
      effMenuListAppend();
      temp_v2 = 0x10000;
      memAlloc(0x10000,0x100,0,0x68,0x10,1);
      *(unsigned int *)(temp_v2 + 0x18) = 0xff00ff00;
      *(int *)(temp_v2 + 8) = temp_v6;
      *(unsigned int *)(temp_v2 + 0xc) = 0x70;
      *(unsigned int *)(temp_v2 + 4) = 6;
      *(int *)(temp_v2 + 0x10) = temp_v6;
      *(unsigned int *)(temp_v2 + 0x14) = 0x88;
    }
    else {
      temp_v2 = 0x10000;
      memAlloc(0x10000,0x100,0,0x68,0x10,1);
      *(unsigned int *)(temp_v2 + 4) = 6;
      *(int *)(temp_v2 + 8) = temp_v6;
      *(unsigned int *)(temp_v2 + 0xc) = 0x70;
      *(int *)(temp_v2 + 0x10) = temp_v6;
      *(unsigned int *)(temp_v2 + 0x14) = 0x88;
      *(unsigned int *)(temp_v2 + 0x18) = 0xffffffff;
    }
    effMenuListAppend();
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 3);
  temp_v2 = 0x10000;
  memAlloc(0x10000,0x100,0,0x68,0x10,1);
  *(unsigned int *)(temp_v2 + 4) = 6;
  *(unsigned int *)(temp_v2 + 8) = 0x160;
  *(unsigned int *)(temp_v2 + 0xc) = 0x70;
  *(unsigned int *)(temp_v2 + 0x10) = 0x160;
  *(unsigned int *)(temp_v2 + 0x14) = 0x88;
  *(unsigned int *)(temp_v2 + 0x18) = 0xffffffff;
  effMenuListAppend();
  FUN_0024dd00(0xa4,0x8c,8,&LAB_00242f8c,temp_v16);
  temp_v2 = FUN_002bfde4(1);
  if (temp_v2 == 0) {
    FUN_0024dd80(1);
    temp_v2 = FUN_002bfde4();
    if (temp_v2 == 0) {
      return puVar8;
    }
  }
  return (unsigned char *)((unsigned int)puVar8 & 0xfffffffe);
}

} /* extern "C" */
