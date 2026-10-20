/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00345f4c` (_code @ 0x345f4c, 0x644 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int padButtonRepeat(...);
int padButtonIsPressed(...);
int memAlloc(...);
int FUN_00200bcc(unsigned char *);
int FUN_00202178(...);
int effEditorNodeChainApply(unsigned char *);
int FUN_00243ce8(...);
int FUN_002b3fd8(int, int, int, int);
int FUN_002cf28c(int, int, int, int, unsigned int, unsigned int);
int FUN_00300124(void);
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

extern unsigned char LAB_0034659c; /* 0x34659c */
extern unsigned char LAB_00400001; /* 0x400001 */
extern unsigned char LAB_00400003; /* 0x400003 */
extern signed char DAT_0059dbe9; /* 0x59dbe9 */
extern unsigned int DAT_0059dc34; /* 0x59dc34 */
extern int DAT_0059dc38; /* 0x59dc38 */
extern int DAT_0059dc6c; /* 0x59dc6c */
extern int DAT_0059dc70; /* 0x59dc70 */
extern int DAT_0059ee04; /* 0x59ee04 */
extern int DAT_0059ee0c; /* 0x59ee0c */
extern unsigned char DAT_0059efb8; /* 0x59efb8 */
extern unsigned int DAT_00635334; /* 0x635334 */
extern unsigned int DAT_00635338; /* 0x635338 */
extern float DAT_0063533c; /* 0x63533c */
extern float DAT_00635340; /* 0x635340 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
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


unsigned char * FUN_00345f4c(unsigned int *param_1,int param_2)

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
  DAT_00635334 = *param_1;
  DAT_00635338 = param_1[1];
  DAT_0063533c = (float)param_1[2];
  DAT_00635340 = (float)param_1[3];
  puStack_2c = param_1;
  temp_v16 = param_2;
  if (DAT_0059dbe9 == '\0') {
    FUN_00200bcc(&DAT_0059efb8);
  }
  temp_v2 = padButtonRepeat(0x20);
  puVar8 = &LAB_00400003;
  temp_v12 = 10.0f;
  if (temp_v2 != 0) {
    temp_v7 = DAT_0059dc34 == 1;
    temp_v9 = DAT_0063533c;
    if (!temp_v7) {
      temp_v9 = DAT_00635340;
    }
    temp_v9 = temp_v9 + temp_v8 * 10.0f;
    temp_v8 = temp_v9;
    if (!temp_v7) {
      temp_v8 = DAT_0063533c;
      DAT_00635340 = temp_v9;
    }
  }
  else {
    temp_v2 = padButtonRepeat(0x20);
    if (temp_v2 != 0) {
      temp_v7 = DAT_0059dc34 == 1;
      temp_v9 = DAT_0063533c;
      if (!temp_v7) {
        temp_v9 = DAT_00635340;
      }
      temp_v9 = temp_v9 - temp_v8 * temp_v12;
      temp_v8 = temp_v9;
      if (!temp_v7) {
        temp_v8 = DAT_0063533c;
        DAT_00635340 = temp_v9;
      }
    }
    else {
      temp_v2 = padButtonRepeat(3);
      if (temp_v2 == 0) {
        FUN_00202178(3);
        temp_v2 = padButtonRepeat();
        if (temp_v2 != 0) goto LAB_0034605c;
        temp_v2 = padButtonRepeat(4);
        if (temp_v2 == 0) {
          FUN_00202178(4);
          temp_v2 = padButtonRepeat();
          if (temp_v2 == 0) {
            temp_v2 = padButtonRepeat(5);
            puVar8 = &LAB_00400001;
            if (temp_v2 == 0) {
              FUN_00202178(5);
              temp_v2 = padButtonRepeat();
              if ((temp_v2 == 0) && (temp_v2 = padButtonRepeat(6), temp_v2 == 0)) {
                FUN_00202178(6);
                temp_v2 = padButtonRepeat();
                temp_v8 = DAT_0063533c;
                if (temp_v2 == 0) goto LAB_00346144;
              }
            }
            temp_v8 = DAT_0063533c;
            if (DAT_0059dc34 == 1) {
              DAT_0059dc34 = 2;
            }
            else {
              DAT_0059dc34 = 1;
            }
            goto LAB_00346144;
          }
        }
        temp_v7 = DAT_0059dc34 == 1;
        temp_v9 = DAT_0063533c;
        if (!temp_v7) {
          temp_v9 = DAT_00635340;
        }
        temp_v9 = temp_v9 - temp_v8;
      }
      else {
LAB_0034605c:
        temp_v7 = DAT_0059dc34 == 1;
        temp_v9 = DAT_0063533c;
        if (!temp_v7) {
          temp_v9 = DAT_00635340;
        }
        temp_v9 = temp_v9 + temp_v8;
      }
      temp_v8 = temp_v9;
      if (!temp_v7) {
        temp_v8 = DAT_0063533c;
        DAT_00635340 = temp_v9;
      }
    }
  }
LAB_00346144:
  DAT_0063533c = temp_v8;
  temp_v1 = DAT_00635338;
  temp_v12 = (float)((unsigned long long)temp_v13 >> 0x20);
  temp_v8 = temp_v12;
  if ((temp_v12 <= DAT_0063533c) && (temp_v8 = (float)temp_v13, (int)DAT_0063533c < 0x3f800001)) {
    temp_v8 = DAT_0063533c;
  }
  DAT_0063533c = temp_v8;
  if ((temp_v12 <= DAT_00635340) && (temp_v12 = (float)temp_v13, (int)DAT_00635340 < 0x3f800001)) {
    temp_v12 = DAT_00635340;
  }
  DAT_00635340 = temp_v12;
  temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(DAT_0063533c < DAT_00635340) << 0x1f) |
          ((unsigned int)(DAT_0063533c == DAT_00635340) << 0x1e);
  temp_v0 = (unsigned char)(temp_v5 >> 0x18);
  temp_v8 = DAT_00635340;
  if (((!(unsigned char)((temp_v0 >> 6) & 1) && (unsigned char)(temp_v0 >> 7) == ((DAT_0063533c != DAT_0063533c) || (DAT_00635340 != DAT_00635340)))
      && (temp_v8 = DAT_0063533c,
         (float *)*(unsigned int **)(DAT_0059ee0c + DAT_0059ee04 * 0x18 + 8) != &DAT_0063533c)) &&
     ((DAT_0059dc38 != 1 || (DAT_0059dc34 != 1)))) {
    DAT_0063533c = DAT_00635340;
    temp_v8 = DAT_00635340;
  }
  DAT_00635340 = temp_v8;
  temp_v12 = DAT_00635340;
  temp_v8 = DAT_0063533c;
  temp_v11 = (float)VectorSignedToFloat(temp_v16,(unsigned char)(temp_v5 >> 0x16) & 3);
  temp_v9 = (float)VectorSignedToFloat(temp_v16,(unsigned char)(temp_v5 >> 0x16) & 3);
  DAT_0059dc6c = (int)(DAT_0063533c * temp_v11);
  DAT_0059dc70 = (int)(DAT_00635340 * temp_v9);
  *param_1 = DAT_00635334;
  param_1[1] = temp_v1;
  *(float *)&param_1[2] = temp_v8;
  *(float *)&param_1[3] = temp_v12;
  FUN_002b3fd8(0xa0,0x6c,0xdc,0x4c);
  effEditorNodeChainApply(&DAT_0059efb8);
  temp_v14[0] = 0;
  temp_v15[0] = (float)((unsigned long long)temp_v13 >> 0x20);
  temp_v14[1] = 0xff;
  temp_v15[1] = (float)param_1[2];
  temp_v14[2] = 0xff;
  temp_v15[2] = (float)param_1[3];
  temp_v14[3] = 0;
  temp_v15[3] = (float)temp_v13;
  FUN_002cf28c(0xa8,0x74,0xb8,0x10,0x80808080,0xff000000);
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
    FUN_00300124();
    if (temp_v5 == DAT_0059dc34) {
      temp_v10 = temp_v10 + 0xa7;
      temp_v2 = 0x10000;
      memAlloc(0x10000,0x100,0,0x68,0x10,1);
      *(int *)(temp_v2 + 8) = temp_v10;
      *(unsigned int *)(temp_v2 + 0x18) = 0xff00ff00;
      *(unsigned int *)(temp_v2 + 4) = 6;
      *(unsigned int *)(temp_v2 + 0xc) = 0x70;
      *(int *)(temp_v2 + 0x10) = temp_v10;
      *(unsigned int *)(temp_v2 + 0x14) = 0x88;
      FUN_00300124();
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
    FUN_00300124();
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
  FUN_00300124();
  FUN_00243ce8(0xa4,0x8c,8,&LAB_0034659c,temp_v16);
  temp_v2 = padButtonIsPressed(1);
  if (temp_v2 == 0) {
    FUN_00202178(1);
    temp_v2 = padButtonIsPressed();
    if (temp_v2 == 0) {
      return puVar8;
    }
  }
  return (unsigned char *)((unsigned int)puVar8 & 0xfffffffe);
}

} /* extern "C" */
