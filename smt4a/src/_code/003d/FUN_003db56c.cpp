/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003db56c` (_code @ 0x3db56c, 0xb10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00162790(...);
int FUN_00164b5c(...);
int efctSetSpeed(void);
int FUN_00168470(...);
int FUN_00180310(...);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int drawSetColorFromRGBA8(...);
int FUN_0025c848(...);
int FUN_00344cd0(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_1: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_1_stack;

extern unsigned char LAB_003db9f8; /* 0x3db9f8 */
extern unsigned char LAB_003dba1c; /* 0x3dba1c */
extern unsigned char LAB_003dba2c; /* 0x3dba2c */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164b5c. */
extern int vec2GetXInt(int);
extern int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_00168470. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
extern unsigned int FUN_00186f54(unsigned int);
/* Supplied declaration required: FUN_0025c848. */
extern int FUN_00284140(int);
extern int FUN_002a4860(int);
extern int FUN_002a4894(int);
extern unsigned int FUN_002e5c2c(void);
/* Supplied declaration required: FUN_00344cd0. */
extern int FUN_00348ed0(int);
extern int FUN_003e4230(unsigned int);
extern unsigned int FUN_003e45a8(unsigned int);
extern int gameDataFlagTestBit(unsigned int);
extern int FUN_003e4718(unsigned int);


void FUN_003db56c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 13 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int *piVar6;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned int in_fpscr;
  unsigned int temp_v11;
  unsigned char temp_v12 [84];
  
  temp_v0 = vec2GetXInt(param_1 + 0x2d8);
  temp_v1 = vec2GetYInt(param_1 + 0x2d8);
  temp_v6 = 0;
  temp_v11 = 0;
  efctSetSpeed();
  FUN_00164b5c(2,0x14,9,temp_v0,temp_v1,0x65);
  FUN_001835b4(2,0x14,0x57c,temp_v0,temp_v1,0x6a);
  FUN_001835b4(2,0x14,0x57d,temp_v0,temp_v1,0x6a);
  FUN_001835b4(2,0x14,0x57e,temp_v0,temp_v1,0x6a);
  FUN_001835b4(2,0x14,0x57f,temp_v0,temp_v1,0x6a);
  temp_v2 = FUN_001834a4(0x14,0x583);
  temp_v3 = FUN_002e5c2c();
  FUN_00100388(temp_v12,&LAB_003db9f8,temp_v3);
  FUN_00180310(0,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,1,4,0x6a,temp_v12);
  temp_v5 = 0;
  temp_v2 = FUN_00348ed0(param_1 + 0x10);
  if (0 < temp_v2) {
    do {
      if ((*(int *)(param_1 + 8) != 2 && *(int *)(param_1 + 8) != 3) ||
         (temp_v2 = FUN_002a4894(param_1 + 0x10), temp_v2 != temp_v5)) {
        temp_v2 = FUN_002a4860(param_1 + 0x10);
        temp_v7 = *(unsigned int *)(param_1 + (temp_v2 + temp_v5) * 4 + 0x74);
        temp_v2 = FUN_001834a4(0x14,temp_v5 + 0x40e);
        temp_v4 = FUN_001834a4(0x14,0x58f);
        FUN_00168470(temp_v7 & 0xffff,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v0,
                     (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v1,0x6a);
        temp_v4 = gameDataFlagTestBit(temp_v7);
        if (temp_v4 != 0) {
          temp_v6 = 0x57d8ffff;
          temp_v4 = FUN_001834a4(0x14,0x595);
          FUN_00164b5c(2,0x14,8,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v2 + 8) + temp_v0,
                       (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v1,0x6a);
        }
        else {
          FUN_001835b4(2,0x14,0x58b,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,
                       0x6a);
          FUN_001835b4(2,0x14,0x58c,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,
                       0x6a);
          FUN_001835b4(2,0x14,0x58d,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,
                       0x6a);
          temp_v4 = FUN_003e4230(temp_v7);
          if (temp_v4 != 0) {
            if (temp_v4 != 1) {
              if (temp_v4 == 2) {
                temp_v6 = 0x9b9b9bff;
                temp_v11 = 0x787878ff;
                FUN_00100388(temp_v12,&LAB_003dba2c);
              }
            }
            else {
              temp_v6 = 0x9b9b9bff;
              temp_v11 = 0xdc0f14ff;
              temp_v3 = FUN_003e45a8(temp_v7);
              FUN_00100388(temp_v12,&LAB_003dba1c,temp_v3);
            }
          }
          else {
            temp_v6 = 0xffffffff;
            temp_v11 = 0xffffffff;
            temp_v3 = FUN_003e45a8(temp_v7);
            FUN_00100388(temp_v12,&LAB_003dba1c,temp_v3);
          }
          temp_v4 = FUN_001834a4(0x14,0x594);
          drawSetColorFromRGBA8(temp_v11);
          FUN_00180310(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v0,
                       (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v1,1,4,0x6f,
                       temp_v12);
          FUN_00183bb0();
        }
        temp_v4 = FUN_001834a4(0x14,0x590);
        temp_v3 = FUN_00186f54(temp_v7);
        VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v1,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v2 + 8) + temp_v0,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00162790(2,temp_v6,temp_v3,(int)*(short *)(temp_v4 + 10));
        temp_v4 = FUN_003e4718(temp_v7);
        if (temp_v4 != 0) {
          temp_v4 = FUN_001834a4(0x14,0x58e);
          FUN_00164b5c(2,0x14,7,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v2 + 8) + temp_v0,
                       (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v2 + 10) + temp_v1,0x6a);
        }
      }
      temp_v5 = temp_v5 + 1;
      temp_v2 = FUN_00348ed0(param_1 + 0x10);
    } while (temp_v5 < temp_v2);
  }
  if (*(int *)(param_1 + 8) == 2 || *(int *)(param_1 + 8) == 3) {
    temp_v2 = FUN_002a4860(param_1 + 0x10);
    temp_v5 = FUN_002a4894(param_1 + 0x10);
    temp_v7 = *(unsigned int *)(param_1 + (temp_v5 + temp_v2) * 4 + 0x74);
    temp_v2 = FUN_002a4894(param_1 + 0x10);
    temp_v2 = FUN_001834a4(0x14,temp_v2 + 0x42f);
    efctSetSpeed();
    FUN_00164b5c(2,0x14,6,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x79);
    efctSetSpeed();
    FUN_001835b4(2,0x14,0x429,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x7e);
    temp_v5 = FUN_002a4894(param_1 + 0x10);
    temp_v5 = FUN_00284140((int)*(short *)(param_1 + temp_v5 * 2 + 0x508));
    temp_v8 = temp_v5 == 1;
    temp_v9 = temp_v5 == 2;
    temp_v10 = temp_v5 == 6;
    temp_v5 = *(short *)(temp_v2 + 10) + temp_v1;
    if (!((temp_v8 || temp_v9) || temp_v10)) {
      FUN_001835b4(2,0x14,0x42a,*(short *)(temp_v2 + 8) + temp_v0,temp_v5,0x83);
      FUN_001835b4(2,0x14,0x42b,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x83);
      FUN_001835b4(2,0x14,0x5c9,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x85);
      efctSetSpeed();
      FUN_001835b4(2,0x14,0x42c,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x88);
      efctSetSpeed();
    }
    else {
      FUN_001835b4(2,0x14,0x5cf,*(short *)(temp_v2 + 8) + temp_v0,temp_v5,0x83);
      FUN_001835b4(2,0x14,0x5d0,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x83);
      FUN_001835b4(2,0x14,0x5d2,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x85);
      efctSetSpeed();
      FUN_001835b4(2,0x14,0x5d1,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x88);
      efctSetSpeed();
    }
    FUN_001835b4(2,0x14,0x596,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x8d);
    temp_v5 = FUN_001834a4(0x14,0x598);
    FUN_00168470(temp_v7 & 0xffff,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v0,
                 (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v1,0x92);
    temp_v5 = gameDataFlagTestBit(temp_v7);
    if (temp_v5 != 0) {
      temp_v6 = 0x57d8ffff;
      temp_v5 = FUN_001834a4(0x14,0x59e);
      FUN_00164b5c(2,0x14,8,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v2 + 8) + temp_v0,
                   (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v2 + 10) + temp_v1,0x92);
    }
    else {
      temp_v5 = FUN_003e4230(temp_v7);
      if (temp_v5 != 0) {
        if (temp_v5 != 1) {
          if (temp_v5 == 2) {
            temp_v6 = 0x787878ff;
            temp_v11 = 0x787878ff;
            FUN_00100388(temp_v12,&LAB_003dba2c);
          }
        }
        else {
          temp_v6 = 0x787878ff;
          temp_v11 = 0xdc0f14ff;
          temp_v3 = FUN_003e45a8(temp_v7);
          FUN_00100388(temp_v12,&LAB_003dba1c,temp_v3);
        }
      }
      else {
        temp_v11 = 0xffffffff;
        if ((temp_v8 || temp_v9) || temp_v10) {
          temp_v6 = 0xf5ff9fff;
        }
        if ((!temp_v8 && !temp_v9) && !temp_v10) {
          temp_v6 = 0x9fe7ffff;
        }
        temp_v3 = FUN_003e45a8(temp_v7);
        FUN_00100388(temp_v12,&LAB_003dba1c,temp_v3);
      }
      temp_v5 = FUN_001834a4(0x14,0x59d);
      drawSetColorFromRGBA8(temp_v11);
      FUN_00180310(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v0,
                   (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v1,1,4,0x97,
                   temp_v12);
      FUN_00183bb0();
    }
    temp_v5 = FUN_001834a4(0x14,0x599);
    temp_v3 = FUN_00186f54(temp_v7);
    VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v1,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v0,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(3,temp_v6,temp_v3,(int)*(short *)(temp_v5 + 10));
    temp_v5 = FUN_003e4718(temp_v7);
    if (temp_v5 != 0) {
      temp_v5 = FUN_001834a4(0x14,0x597);
      FUN_00164b5c(2,0x14,7,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v2 + 8) + temp_v0,
                   (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v2 + 10) + temp_v1,0x97);
    }
  }
  FUN_001835b4(2,0x14,0x5d5,temp_v0,temp_v1,0x97);
  FUN_00344cd0(param_1 + 0x10,temp_v0,temp_v1,0x14,0x56a,0x56b,0x56c,0x566,0x568,0x567,0x569,
               (int)*(short *)(param_1 + 0x522),(int)*(short *)(param_1 + 0x51e),
               (int)*(short *)(param_1 + 0x520),0x97,0);
  temp_v0 = g_renderCtx;
  if (*(int *)(param_1 + 8) == 5) {
    temp_v1 = packNibblesAndByte(6,1,0);
    piVar6 = (int *)(temp_v0 + 0x12b8);
    temp_v2 = piVar6[*piVar6 + 2];
    piVar6[*piVar6 + 2] = temp_v1;
    if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v2 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x12d4))();
      *(unsigned char *)(temp_v0 + 0x12d0) = 0;
    }
    FUN_0025c848(param_1 + 0x47c);
    temp_v0 = g_renderCtx;
    temp_v1 = packNibblesAndByte(6,7,0);
    piVar6 = (int *)(temp_v0 + 0x12b8);
    temp_v2 = piVar6[*piVar6 + 2];
    piVar6[*piVar6 + 2] = temp_v1;
    if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v2 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x12d4))();
      *(unsigned char *)(temp_v0 + 0x12d0) = 0;
    }
  }
  efctSetSpeed();
  return;
}

} /* extern "C" */
