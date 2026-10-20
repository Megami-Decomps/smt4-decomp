/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b4f9c` (_code @ 0x4b4f9c, 0xe10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00164b5c(...);
int efctSetSpeed(void);
int FUN_00180310(...);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int drawSetColorFromRGBA8(...);

typedef int romwright_code(...);
/* stack frame of param_3: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_3_stack;

extern unsigned char LAB_004b53b4; /* 0x4b53b4 */
extern unsigned char LAB_004b53b8; /* 0x4b53b8 */
extern unsigned char LAB_004b5bc8; /* 0x4b5bc8 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int gameGetPlayerData(void);
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
extern int FUN_00284140(int);
extern int FUN_002a4894(int);


void FUN_004b4f9c(int param_1,int param_2,int param_3)

{
/* irregular: 7 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  int *piVar14;
  
  FUN_00164b5c(2,0x1d,4,param_2,param_3,0x65);
  temp_v4 = FUN_001834a4(0x1d,0x87);
  drawSetColorFromRGBA8(0x1a5c72ff);
  FUN_00180310(0,*(short *)(temp_v4 + 8) + param_2,*(short *)(temp_v4 + 10) + param_3,0,0,0x6a,
               &LAB_004b53b4,*(unsigned int *)(param_1 + 0x75c4));
  temp_v4 = FUN_001834a4(0x1d,0x88);
  FUN_00180310(0,*(short *)(temp_v4 + 8) + param_2,*(short *)(temp_v4 + 10) + param_3,0,0,0x6a,
               &LAB_004b53b8);
  temp_v4 = FUN_001834a4(0x1d,0x8a);
  drawSetColorFromRGBA8(0xff);
  FUN_00180310(0,*(short *)(temp_v4 + 8) + param_2,*(short *)(temp_v4 + 10) + param_3,0,0,0x6a,
               &LAB_004b53b4,*(unsigned int *)(param_1 + 0x7558));
  FUN_00183bb0();
  temp_v4 = gameGetPlayerData();
  piVar14 = (int *)(param_1 + 0x74c0);
  temp_v0 = *(short *)(temp_v4 + 0x1c);
  temp_v1 = *(short *)(param_1 + *piVar14 * 0x150 + 0x444c);
  temp_v4 = FUN_001834a4(0x1d,0x9a);
  FUN_00164b5c(2,0x1d,5,*(short *)(temp_v4 + 8) + param_2,*(short *)(temp_v4 + 10) + param_3,0x65);
  FUN_001835b4(2,0x1d,0x8f,*(short *)(temp_v4 + 8) + param_2,*(short *)(temp_v4 + 10) + param_3,0x6a);
  FUN_001835b4(2,0x1d,0x91,*(short *)(temp_v4 + 8) + param_2,*(short *)(temp_v4 + 10) + param_3,0x6a);
  temp_v5 = FUN_001834a4(0x1d,0x95);
  FUN_00180310(0,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v5 + 8) + param_2,
               (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + param_3,1,4,0x6a,
               &LAB_004b53b4,(int)temp_v1);
  temp_v5 = FUN_001834a4(0x1d,0x99);
  drawSetColorFromRGBA8(0x72e027ff);
  FUN_00180310(0,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v5 + 8) + param_2,
               (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + param_3,1,4,0x6a,
               &LAB_004b53b4,(int)temp_v0);
  FUN_00183bb0();
  temp_v4 = gameGetPlayerData();
  temp_v11 = (int)*(short *)(temp_v4 + 0x1e);
  temp_v12 = (int)*(short *)(param_1 + *piVar14 * 0x150 + 0x444e);
  temp_v4 = FUN_001834a4(0x1d,0x9b);
  FUN_00164b5c(2,0x1d,5,*(short *)(temp_v4 + 8) + param_2,*(short *)(temp_v4 + 10) + param_3,0x65);
  FUN_001835b4(2,0x1d,0x90,*(short *)(temp_v4 + 8) + param_2,*(short *)(temp_v4 + 10) + param_3,0x6a);
  FUN_001835b4(2,0x1d,0x91,*(short *)(temp_v4 + 8) + param_2,*(short *)(temp_v4 + 10) + param_3,0x6a);
  temp_v5 = FUN_001834a4(0x1d,0x95);
  FUN_00180310(0,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v4 + 8) + param_2,
               (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + param_3,1,4,0x6a,
               &LAB_004b53b4,temp_v12);
  temp_v5 = FUN_001834a4(0x1d,0x99);
  drawSetColorFromRGBA8(0x72e027ff);
  FUN_00180310(0,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v4 + 8) + param_2,
               (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + param_3,1,4,0x6a,
               &LAB_004b53b4,temp_v11);
  FUN_00183bb0();
  temp_v4 = 0;
  do {
    temp_v5 = FUN_002a4894(param_1 + 0x7560);
    if (temp_v5 != temp_v4) {
      switch(temp_v4) {
      case 0:
        temp_v5 = gameGetPlayerData();
        temp_v11 = (int)*(short *)(temp_v5 + 0x20);
        temp_v12 = (int)*(short *)(param_1 + *piVar14 * 0x150 + 0x4450);
        break;
      case 1:
        temp_v5 = gameGetPlayerData();
        temp_v11 = (int)*(short *)(temp_v5 + 0x22);
        temp_v12 = (int)*(short *)(param_1 + *piVar14 * 0x150 + 0x4452);
        break;
      case 2:
        temp_v5 = gameGetPlayerData();
        temp_v11 = (int)*(short *)(temp_v5 + 0x24);
        temp_v12 = (int)*(short *)(param_1 + *piVar14 * 0x150 + 0x4454);
        break;
      case 3:
        temp_v5 = gameGetPlayerData();
        temp_v11 = (int)*(short *)(temp_v5 + 0x26);
        temp_v12 = (int)*(short *)(param_1 + *piVar14 * 0x150 + 0x4456);
        break;
      case 4:
        temp_v5 = gameGetPlayerData();
        temp_v11 = (int)*(short *)(temp_v5 + 0x28);
        temp_v12 = (int)*(short *)(param_1 + *piVar14 * 0x150 + 0x4458);
      }
      temp_v5 = FUN_001834a4(0x1d,temp_v4 + 0xba);
      FUN_00164b5c(2,0x1d,6,*(short *)(temp_v5 + 8) + param_2,*(short *)(temp_v5 + 10) + param_3,0x65);
      FUN_001835b4(2,0x1d,temp_v4 + 0x9e,*(short *)(temp_v5 + 8) + param_2,
                   *(short *)(temp_v5 + 10) + param_3,0x6a);
      temp_v6 = FUN_001834a4(0x1d,0xb6);
      drawSetColorFromRGBA8(0x9b9b9bff);
      FUN_00180310(0,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v6 + 8) + param_2,
                   (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v5 + 10) + param_3,1,3,0x6a,
                   &LAB_004b53b4,temp_v12);
      FUN_00183bb0();
      temp_v6 = FUN_001834a4(0x1d,0xb9);
      temp_v9 = *(short *)(temp_v5 + 10) + param_3;
      temp_v10 = *(short *)(temp_v5 + 8) + param_2;
      if (temp_v12 < temp_v11) {
        FUN_001835b4(2,0x1d,0xa4,temp_v10,temp_v9,0x6a);
        temp_v7 = 0x8400ff;
      }
      else {
        FUN_001835b4(2,0x1d,0xa3,temp_v10,temp_v9,0x6a);
        temp_v7 = 0x9b9b9bff;
      }
      drawSetColorFromRGBA8(temp_v7);
      FUN_00180310(0,(int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v5 + 8) + param_2,
                   (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v6 + 10) + param_3,1,3,0x6a,
                   &LAB_004b53b4,temp_v11);
      FUN_00183bb0();
      FUN_001835b4(2,0x1d,0xa5,*(short *)(temp_v5 + 8) + param_2,*(short *)(temp_v5 + 10) + param_3,0x6a
                  );
      FUN_001835b4(2,0x1d,0xa6,*(short *)(temp_v5 + 8) + param_2,*(short *)(temp_v5 + 10) + param_3,0x6a
                  );
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 5);
  temp_v4 = FUN_002a4894(param_1 + 0x7560);
  temp_v5 = FUN_001834a4(0x1d,temp_v4 + 0xba);
  switch(temp_v4) {
  case 0:
    temp_v11 = gameGetPlayerData();
    temp_v11 = (int)*(short *)(temp_v11 + 0x20);
    temp_v12 = (int)*(short *)(param_1 + *piVar14 * 0x150 + 0x4450);
    break;
  case 1:
    temp_v11 = gameGetPlayerData();
    temp_v11 = (int)*(short *)(temp_v11 + 0x22);
    temp_v12 = (int)*(short *)(param_1 + *piVar14 * 0x150 + 0x4452);
    break;
  case 2:
    temp_v11 = gameGetPlayerData();
    temp_v11 = (int)*(short *)(temp_v11 + 0x24);
    temp_v12 = (int)*(short *)(param_1 + *piVar14 * 0x150 + 0x4454);
    break;
  case 3:
    temp_v11 = gameGetPlayerData();
    temp_v11 = (int)*(short *)(temp_v11 + 0x26);
    temp_v12 = (int)*(short *)(param_1 + *piVar14 * 0x150 + 0x4456);
    break;
  case 4:
    temp_v11 = gameGetPlayerData();
    temp_v11 = (int)*(short *)(temp_v11 + 0x28);
    temp_v12 = (int)*(short *)(param_1 + *piVar14 * 0x150 + 0x4458);
  }
  temp_v6 = FUN_00284140((int)*(short *)(param_1 + temp_v4 * 2 + 0x43b6));
  if ((temp_v6 == 1 || temp_v6 == 2) || (temp_v6 == 6)) {
    temp_v6 = 1;
  }
  else {
    temp_v6 = 0;
  }
  temp_v9 = param_1 + temp_v4 * 4;
  temp_v10 = temp_v9 + 0x4300;
  temp_v9 = FUN_00284140((int)*(short *)(temp_v9 + 0x43da));
  if ((temp_v9 == 1 || temp_v9 == 2) || (temp_v9 == 6)) {
    temp_v2 = 1;
  }
  else {
    temp_v2 = 0;
  }
  temp_v9 = FUN_00284140((int)*(short *)(temp_v10 + 0xd8));
  if ((temp_v9 == 1 || temp_v9 == 2) || (temp_v9 == 6)) {
    temp_v3 = 1;
  }
  else {
    temp_v3 = 0;
  }
  param_1 = param_1 + 0x598;
  if (!((temp_v6 == 0 && !temp_v2) && !temp_v3)) {
    efctSetSpeed();
    FUN_00164b5c(2,0x1d,0xc,*(short *)(temp_v5 + 8) + param_2,*(short *)(temp_v5 + 10) + param_3,0x65,
                 param_1);
    efctSetSpeed();
    FUN_001835b4(2,0x1d,0xa9,*(short *)(temp_v5 + 8) + param_2,*(short *)(temp_v5 + 10) + param_3,0x6a);
    FUN_001835b4(2,0x1d,0x18e,*(short *)(temp_v5 + 8) + param_2,*(short *)(temp_v5 + 10) + param_3,0x6a)
    ;
    FUN_001835b4(2,0x1d,399,*(short *)(temp_v5 + 8) + param_2,*(short *)(temp_v5 + 10) + param_3,0x6a);
    efctSetSpeed();
    FUN_001835b4(2,0x1d,400,*(short *)(temp_v5 + 8) + param_2,*(short *)(temp_v5 + 10) + param_3,0x6a);
    FUN_001835b4(2,0x1d,0x191,*(short *)(temp_v5 + 8) + param_2,*(short *)(temp_v5 + 10) + param_3,0x6a)
    ;
    efctSetSpeed();
  }
  else {
    efctSetSpeed();
    FUN_00164b5c(2,0x1d,7,*(short *)(temp_v5 + 8) + param_2,*(short *)(temp_v5 + 10) + param_3,0x65);
    efctSetSpeed();
    FUN_001835b4(2,0x1d,0xa9,*(short *)(temp_v5 + 8) + param_2,*(short *)(temp_v5 + 10) + param_3,0x6a);
    FUN_001835b4(2,0x1d,0x188,*(short *)(temp_v5 + 8) + param_2,*(short *)(temp_v5 + 10) + param_3,0x6a)
    ;
    FUN_001835b4(2,0x1d,0x189,*(short *)(temp_v5 + 8) + param_2,*(short *)(temp_v5 + 10) + param_3,0x6a)
    ;
    efctSetSpeed();
    FUN_001835b4(2,0x1d,0x18a,*(short *)(temp_v5 + 8) + param_2,*(short *)(temp_v5 + 10) + param_3,0x6a)
    ;
    FUN_001835b4(2,0x1d,0x18b,*(short *)(temp_v5 + 8) + param_2,*(short *)(temp_v5 + 10) + param_3,0x6a)
    ;
    efctSetSpeed();
  }
  drawSetColorFromRGBA8(0xffffffff);
  FUN_001835b4(2,0x1d,temp_v4 + 0xaa,*(short *)(temp_v5 + 8) + param_2,*(short *)(temp_v5 + 10) + param_3,
               0x6a);
  FUN_00183bb0();
  temp_v4 = FUN_001834a4(0x1d,0xb6);
  FUN_00180310(0,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v5 + 8) + param_2,
               (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v4 + 10) + param_3,1,3,0x6f,
               &LAB_004b5bc8,temp_v12);
  temp_v4 = FUN_001834a4(0x1d,0xb9);
  if (temp_v12 < temp_v11) {
    temp_v7 = 0x72e027ff;
  }
  else {
    temp_v7 = 0xffffffff;
  }
  drawSetColorFromRGBA8(temp_v7);
  FUN_00180310(0,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v5 + 8) + param_2,
               (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v4 + 10) + param_3,1,3,0x6f,
               &LAB_004b5bc8,temp_v11);
  FUN_00183bb0();
  drawSetColorFromRGBA8(0xffffffff);
  FUN_001835b4(2,0x1d,0xaf,*(short *)(temp_v5 + 8) + param_2,*(short *)(temp_v5 + 10) + param_3,0x6f);
  FUN_00183bb0();
  FUN_001835b4(2,0x1d,0xb2,*(short *)(temp_v5 + 8) + param_2,*(short *)(temp_v5 + 10) + param_3,0x6f);
  FUN_001835b4(2,0x1d,0xb3,*(short *)(temp_v5 + 8) + param_2,*(short *)(temp_v5 + 10) + param_3,0x6f);
  efctSetSpeed();
  temp_v4 = g_renderCtx;
  temp_v11 = packNibblesAndByte(6,1,0);
  piVar14 = (int *)(temp_v4 + 0x12b8);
  temp_v12 = piVar14[*piVar14 + 2];
  piVar14[*piVar14 + 2] = temp_v11;
  if (*(char *)(temp_v4 + 0x12d0) != '\0' || temp_v12 != temp_v11) {
    (**(romwright_code **)(temp_v4 + 0x12d4))(temp_v11);
    *(unsigned char *)(temp_v4 + 0x12d0) = 0;
  }
  temp_v7 = 0xf5ff9fff;
  temp_v8 = temp_v7;
  if (!temp_v2) {
    temp_v8 = 0x9fe7ffff;
  }
  drawSetColorFromRGBA8(temp_v8);
  FUN_001835b4(2,0x1d,0xb0,*(short *)(temp_v5 + 8) + param_2,*(short *)(temp_v5 + 10) + param_3,0x74);
  FUN_00183bb0();
  if (!temp_v3) {
    temp_v7 = 0x9fe7ffff;
  }
  drawSetColorFromRGBA8(temp_v7);
  FUN_001835b4(2,0x1d,0xb1,*(short *)(temp_v5 + 8) + param_2,*(short *)(temp_v5 + 10) + param_3,0x74);
  FUN_00183bb0();
  temp_v4 = g_renderCtx;
  temp_v5 = packNibblesAndByte(6,7,0);
  piVar14 = (int *)(temp_v4 + 0x12b8);
  temp_v11 = piVar14[*piVar14 + 2];
  piVar14[*piVar14 + 2] = temp_v5;
  if (*(char *)(temp_v4 + 0x12d0) != '\0' || temp_v11 != temp_v5) {
    (**(romwright_code **)(temp_v4 + 0x12d4))();
    *(unsigned char *)(temp_v4 + 0x12d0) = 0;
  }
  efctSetSpeed();
  return;
}

} /* extern "C" */
