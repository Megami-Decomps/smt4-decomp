/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00285b58` (_code @ 0x285b58, 0x6a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(unsigned char [64], unsigned char *);
int FUN_00162790(...);
int FUN_00164b5c(int, int, int, int, int, int);
int efctSetSpeed(void);
int FUN_00180310(...);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_0022f770(...);
int FUN_0022f9c8(...);
int FUN_0023dcec(...);
int FUN_002a4860(...);
int VectorSignedToFloat(...);

/* stack frame of param_3: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_3_stack;

extern unsigned char LAB_00285eec; /* 0x285eec */
extern unsigned char LAB_00285f14; /* 0x285f14 */
extern unsigned char LAB_00285f24; /* 0x285f24 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
extern int FUN_0022e9b8(void);
/* Supplied declaration required: FUN_0022f770. */
/* Supplied declaration required: FUN_0022f9c8. */
/* Supplied declaration required: FUN_0023dcec. */
extern int FUN_0026140c(void);
/* Supplied declaration required: FUN_002a4860. */
extern int FUN_002a4894(int);
extern unsigned int computeCountLimit(void);
extern int dataTableGetEntry24Byte1(int);
extern int uiSearchPrimary(int);
extern int uniteIsStateTwentyTwo(void);


void FUN_00285b58(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int in_fpscr;
  unsigned char temp_v11 [64];
  int temp_v12;
  int temp_v13;
  int temp_v14;
  int iStack_30;
  int iStack_2c;
  int temp_v15;
  
  iStack_30 = param_1;
  iStack_2c = param_2;
  temp_v15 = param_3;
  temp_v0 = FUN_0022e9b8();
  temp_v13 = FUN_0026140c();
  temp_v13 = temp_v13 + 0x20;
  if (temp_v0 != 0) {
    temp_v10 = 0;
    temp_v12 = 0;
    efctSetSpeed();
    FUN_00164b5c(2,0x1a,1,param_1,param_2,0x65);
    FUN_001835b4(2,0x1a,0x8a,param_1,param_2,0x65);
    temp_v1 = FUN_001834a4(0x1a,0x49);
    textFormatBuffer(temp_v11,&LAB_00285eec);
    VectorSignedToFloat(*(short *)(temp_v1 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v1 + 8) + param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(2,0xffffffff,temp_v11);
    temp_v2 = computeCountLimit();
    if (temp_v2 >= 999) {
      temp_v1 = FUN_001834a4(0x1a,0x279);
      textFormatBuffer(temp_v11,&LAB_00285f14);
      VectorSignedToFloat(*(short *)(temp_v1 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(short *)(temp_v1 + 8) + param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(2,0xffff57ff,temp_v11);
    }
    else {
      temp_v2 = computeCountLimit();
      if (temp_v2 >= 100) {
        FUN_001835b4(2,0x1a,0x4a,param_1,param_2,0x65);
        temp_v1 = FUN_001834a4(0x1a,0x253);
        temp_v3 = computeCountLimit();
        FUN_00180310(0,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,1,3,0x65,
                     &LAB_00285f24,temp_v3);
      }
      else {
        FUN_001835b4(2,0x1a,0x4a,param_1,param_2,0x65);
        temp_v1 = FUN_001834a4(0x1a,0x4c);
        temp_v3 = computeCountLimit();
        FUN_00180310(0,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,1,2,0x65,
                     &LAB_00285f24,temp_v3);
      }
    }
    temp_v1 = temp_v0 + 0x4fc;
    temp_v14 = FUN_002a4860();
    temp_v4 = uiSearchPrimary(temp_v0 + 0x4fc);
    temp_v9 = 0;
    if (temp_v9 < temp_v4) {
      do {
        temp_v5 = uniteIsStateTwentyTwo();
        if ((temp_v5 != 0) || (temp_v5 = FUN_002a4894(temp_v1), temp_v5 != temp_v9)) {
          temp_v5 = temp_v14 + temp_v9;
          if (*(int *)(temp_v0 + temp_v5 * 4 + 0x927c) < 0) break;
          efctSetSpeed();
          temp_v6 = dataTableGetEntry24Byte1(temp_v5);
          temp_v7 = FUN_001834a4(0x1a,temp_v9 + 0xa9);
          if (temp_v15 != 0) {
            if (temp_v15 != 1) {
              if (temp_v15 == 2) {
                if ((4 >= *(int *)(temp_v0 + 0x3fc)) &&
                   (temp_v10 = FUN_002a4894(temp_v1), temp_v9 > temp_v10)) {
                  temp_v10 = FUN_002a4894(temp_v1);
                  temp_v8 = FUN_001834a4(0x1a,temp_v10 + 0xa9);
                  temp_v10 = ((int)*(short *)(temp_v8 + 8) - (int)*(short *)(temp_v7 + 8)) * 0x1000;
                  temp_v10 = (int)*(short *)(temp_v7 + 8) +
                           (((int)(temp_v10 + ((unsigned int)(temp_v10 >> 0x1f) >> 0x1e)) >> 2) *
                            *(int *)(temp_v0 + 0x3fc) >> 0xc);
                  temp_v8 = ((int)*(short *)(temp_v8 + 10) - (int)*(short *)(temp_v7 + 10)) * 0x1000;
                  temp_v12 = (int)*(short *)(temp_v7 + 10) +
                             (((int)(temp_v8 + ((unsigned int)(temp_v8 >> 0x1f) >> 0x1e)) >> 2) *
                              *(int *)(temp_v0 + 0x3fc) >> 0xc);
                }
                else {
                  temp_v10 = (int)*(short *)(temp_v7 + 8);
                  temp_v12 = (int)*(short *)(temp_v7 + 10);
                }
              }
            }
            else if ((*(int *)(temp_v0 + 0x3fc) < 5) &&
                    (temp_v10 = FUN_002a4894(temp_v1), temp_v10 < temp_v9)) {
              temp_v10 = FUN_002a4894(temp_v1);
              temp_v8 = FUN_001834a4(0x1a,temp_v10 + 0xa9);
              temp_v10 = ((int)*(short *)(temp_v7 + 8) - (int)*(short *)(temp_v8 + 8)) * 0x1000;
              temp_v10 = (int)*(short *)(temp_v8 + 8) +
                       (((int)(temp_v10 + ((unsigned int)(temp_v10 >> 0x1f) >> 0x1e)) >> 2) *
                        *(int *)(temp_v0 + 0x3fc) >> 0xc);
              temp_v7 = ((int)*(short *)(temp_v7 + 10) - (int)*(short *)(temp_v8 + 10)) * 0x1000;
              temp_v12 = (int)*(short *)(temp_v8 + 10) +
                         (((int)(temp_v7 + ((unsigned int)(temp_v7 >> 0x1f) >> 0x1e)) >> 2) *
                          *(int *)(temp_v0 + 0x3fc) >> 0xc);
            }
            else {
              temp_v10 = (int)*(short *)(temp_v7 + 8);
              temp_v12 = (int)*(short *)(temp_v7 + 10);
            }
          }
          else {
            temp_v12 = (int)*(short *)(temp_v7 + 10);
            temp_v10 = (int)*(short *)(temp_v7 + 8);
          }
          if (temp_v6 != 0) {
            if (temp_v6 != 1) {
              if (temp_v6 == 2) {
                temp_v7 = 0;
                temp_v6 = 0;
                if (temp_v6 < temp_v5) {
                  do {
                    temp_v8 = dataTableGetEntry24Byte1(temp_v6);
                    if (temp_v8 == 2) {
                      temp_v7 = temp_v7 + 1;
                    }
                    temp_v6 = temp_v6 + 1;
                  } while (temp_v6 < temp_v5);
                }
                temp_v7 = temp_v13 + temp_v7;
                FUN_0022f9c8(temp_v0,temp_v5,param_1 + temp_v10,param_2 + temp_v12,0,
                             (int)*(char *)(temp_v7 + 0x10));
                if (*(char *)(temp_v7 + 0x10) == '\0') break;
              }
            }
            else {
              FUN_0023dcec(temp_v0,temp_v5,param_1 + temp_v10,param_2 + temp_v12,0);
            }
          }
          else {
            FUN_0022f770(temp_v0,temp_v5,param_1 + temp_v10,param_2 + temp_v12,0);
          }
          efctSetSpeed();
        }
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < temp_v4);
    }
    temp_v10 = FUN_002a4860(temp_v1);
    temp_v4 = FUN_002a4894(temp_v1);
    temp_v10 = temp_v10 + temp_v4;
    temp_v4 = uniteIsStateTwentyTwo();
    if (temp_v4 == 0) {
      temp_v4 = dataTableGetEntry24Byte1(temp_v10);
      temp_v1 = FUN_002a4894(temp_v1);
      temp_v1 = FUN_001834a4(0x1a,temp_v1 + 0xa9);
      if (temp_v4 != 0) {
        if (temp_v4 != 1) {
          if (temp_v4 == 2) {
            temp_v9 = 0;
            temp_v4 = 0;
            if (temp_v4 < temp_v10) {
              do {
                temp_v5 = dataTableGetEntry24Byte1(temp_v4);
                if (temp_v5 == 2) {
                  temp_v9 = temp_v9 + 1;
                }
                temp_v4 = temp_v4 + 1;
              } while (temp_v4 < temp_v10);
            }
            FUN_0022f9c8(temp_v0,temp_v10,*(short *)(temp_v1 + 8) + param_1,
                         *(short *)(temp_v1 + 10) + param_2,1,(int)*(char *)(temp_v13 + temp_v9 + 0x10)
                        );
          }
        }
        else {
          FUN_0023dcec(temp_v0,temp_v10,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2
                       ,1);
        }
      }
      else {
        FUN_0022f770(temp_v0,temp_v10,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,1
                    );
      }
    }
    efctSetSpeed();
  }
  return;
}

} /* extern "C" */
