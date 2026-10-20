/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b7084` (_code @ 0x3b7084, 0xab0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bdf94(...);
int drawSetColorFromRGBA8(...);
int FUN_002bed3c(void);
int FUN_002bf288(...);
int FUN_002bf380(...);
int FUN_002bf4f8(...);
int FUN_002bf538(void);

typedef int romwright_code(...);
/* stack frame of param_3: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

extern unsigned char LAB_003b74ac; /* 0x3b74ac */
extern unsigned char LAB_003b74b0; /* 0x3b74b0 */
extern unsigned char LAB_003b7b50; /* 0x3b7b50 */
extern int g_titleScene; /* 0x44ea00 */

extern int FUN_0029efa8(int);
extern int gameGetPlayerData(void);
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: FUN_002bf538. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


void FUN_003b7084(int param_1,int param_2,int param_3)

{
/* irregular: 7 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int *piVar11;
  
  FUN_002bf380(2,0x28,4,param_2,param_3,0x65);
  temp_v2 = FUN_002bf4f8(0x28,0x87);
  drawSetColorFromRGBA8(0x7a4c00ff);
  temp_v3 = gameGetPlayerData();
  FUN_002bdf94(0,*(short *)(temp_v2 + 8) + param_2,*(short *)(temp_v2 + 10) + param_3,0,0,0x6a,
               &LAB_003b74ac,((unsigned int)*(unsigned char *)(temp_v3 + 0x76) - (int)*(char *)(param_1 + 0xd530)) * 5)
  ;
  temp_v2 = FUN_002bf4f8(0x28,0x88);
  FUN_002bdf94(0,*(short *)(temp_v2 + 8) + param_2,*(short *)(temp_v2 + 10) + param_3,0,0,0x6a,
               &LAB_003b74b0);
  temp_v2 = FUN_002bf4f8(0x28,0x8a);
  drawSetColorFromRGBA8(0xff);
  FUN_002bdf94(0,*(short *)(temp_v2 + 8) + param_2,*(short *)(temp_v2 + 10) + param_3,0,0,0x6a,
               &LAB_003b74ac,*(unsigned int *)(param_1 + 0xcfcc));
  FUN_002bed3c();
  temp_v2 = gameGetPlayerData();
  piVar11 = (int *)(param_1 + 0xcf78);
  temp_v0 = *(short *)(temp_v2 + 0x1c);
  temp_v1 = *(short *)(param_1 + *piVar11 * 0x620 + 0x3674);
  temp_v2 = FUN_002bf4f8(0x28,0x9a);
  FUN_002bf380(2,0x28,5,*(short *)(temp_v2 + 8) + param_2,*(short *)(temp_v2 + 10) + param_3,0x65);
  FUN_002bf288(2,0x28,0x8f,*(short *)(temp_v2 + 8) + param_2,*(short *)(temp_v2 + 10) + param_3,0x6a);
  FUN_002bf288(2,0x28,0x91,*(short *)(temp_v2 + 8) + param_2,*(short *)(temp_v2 + 10) + param_3,0x6a);
  temp_v3 = FUN_002bf4f8(0x28,0x95);
  FUN_002bdf94(0,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v2 + 8) + param_2,
               (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v2 + 10) + param_3,1,4,0x6a,
               &LAB_003b74ac,(int)temp_v1);
  temp_v3 = FUN_002bf4f8(0x28,0x99);
  drawSetColorFromRGBA8(0x72e027ff);
  FUN_002bdf94(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v3 + 8) + param_2,
               (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v3 + 10) + param_3,1,4,0x6a,
               &LAB_003b74ac,(int)temp_v0);
  FUN_002bed3c();
  temp_v2 = gameGetPlayerData();
  temp_v8 = (int)*(short *)(temp_v2 + 0x1e);
  temp_v9 = (int)*(short *)(param_1 + *piVar11 * 0x620 + 0x3676);
  temp_v2 = FUN_002bf4f8(0x28,0x9b);
  FUN_002bf380(2,0x28,5,*(short *)(temp_v2 + 8) + param_2,*(short *)(temp_v2 + 10) + param_3,0x65);
  FUN_002bf288(2,0x28,0x90,*(short *)(temp_v2 + 8) + param_2,*(short *)(temp_v2 + 10) + param_3,0x6a);
  FUN_002bf288(2,0x28,0x91,*(short *)(temp_v2 + 8) + param_2,*(short *)(temp_v2 + 10) + param_3,0x6a);
  temp_v3 = FUN_002bf4f8(0x28,0x95);
  FUN_002bdf94(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v3 + 8) + param_2,
               (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v3 + 10) + param_3,1,4,0x6a,
               &LAB_003b74ac,temp_v9);
  temp_v3 = FUN_002bf4f8(0x28,0x99);
  drawSetColorFromRGBA8(0x72e027ff);
  FUN_002bdf94(0,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v2 + 8) + param_2,
               (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v3 + 10) + param_3,1,4,0x6a,
               &LAB_003b74ac,temp_v8);
  FUN_002bed3c();
  temp_v2 = 0;
  do {
    temp_v3 = FUN_0029efa8(param_1 + 0xcfd4);
    if (temp_v3 != temp_v2) {
      switch(temp_v2) {
      case 0:
        temp_v3 = gameGetPlayerData();
        temp_v8 = (int)*(short *)(temp_v3 + 0x20);
        temp_v9 = (int)*(short *)(param_1 + *piVar11 * 0x620 + 0x3678);
        break;
      case 1:
        temp_v3 = gameGetPlayerData();
        temp_v8 = (int)*(short *)(temp_v3 + 0x22);
        temp_v9 = (int)*(short *)(param_1 + *piVar11 * 0x620 + 0x367a);
        break;
      case 2:
        temp_v3 = gameGetPlayerData();
        temp_v8 = (int)*(short *)(temp_v3 + 0x24);
        temp_v9 = (int)*(short *)(param_1 + *piVar11 * 0x620 + 0x367c);
        break;
      case 3:
        temp_v3 = gameGetPlayerData();
        temp_v8 = (int)*(short *)(temp_v3 + 0x26);
        temp_v9 = (int)*(short *)(param_1 + *piVar11 * 0x620 + 0x367e);
        break;
      case 4:
        temp_v3 = gameGetPlayerData();
        temp_v8 = (int)*(short *)(temp_v3 + 0x28);
        temp_v9 = (int)*(short *)(param_1 + *piVar11 * 0x620 + 0x3680);
      }
      temp_v3 = FUN_002bf4f8(0x28,temp_v2 + 0xba);
      FUN_002bf380(2,0x28,6,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x65);
      FUN_002bf288(2,0x28,temp_v2 + 0x9e,*(short *)(temp_v3 + 8) + param_2,
                   *(short *)(temp_v3 + 10) + param_3,0x6a);
      temp_v4 = FUN_002bf4f8(0x28,0xb6);
      drawSetColorFromRGBA8(0x5a5a5aff);
      FUN_002bdf94(0,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + param_2,
                   (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v3 + 10) + param_3,1,3,0x6a,
                   &LAB_003b74ac,temp_v9);
      FUN_002bed3c();
      temp_v4 = FUN_002bf4f8(0x28,0xb9);
      temp_v5 = *(short *)(temp_v3 + 10) + param_3;
      temp_v7 = *(short *)(temp_v3 + 8) + param_2;
      if (temp_v9 < temp_v8) {
        FUN_002bf288(2,0x28,0xa4,temp_v7,temp_v5,0x6a);
        temp_v6 = 0x8400ff;
      }
      else {
        FUN_002bf288(2,0x28,0xa3,temp_v7,temp_v5,0x6a);
        temp_v6 = 0x5a5a5aff;
      }
      drawSetColorFromRGBA8(temp_v6);
      FUN_002bdf94(0,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + param_2,
                   (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + param_3,1,3,0x6a,
                   &LAB_003b74ac,temp_v8);
      FUN_002bed3c();
      FUN_002bf288(2,0x28,0xa5,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x6a
                  );
      FUN_002bf288(2,0x28,0xa6,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x6a
                  );
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 5);
  temp_v2 = FUN_0029efa8(param_1 + 0xcfd4);
  temp_v3 = FUN_002bf4f8(0x28,temp_v2 + 0xba);
  switch(temp_v2) {
  case 0:
    temp_v8 = gameGetPlayerData();
    temp_v8 = (int)*(short *)(temp_v8 + 0x20);
    temp_v9 = (int)*(short *)(param_1 + *piVar11 * 0x620 + 0x3678);
    break;
  case 1:
    temp_v8 = gameGetPlayerData();
    temp_v8 = (int)*(short *)(temp_v8 + 0x22);
    temp_v9 = (int)*(short *)(param_1 + *piVar11 * 0x620 + 0x367a);
    break;
  case 2:
    temp_v8 = gameGetPlayerData();
    temp_v8 = (int)*(short *)(temp_v8 + 0x24);
    temp_v9 = (int)*(short *)(param_1 + *piVar11 * 0x620 + 0x367c);
    break;
  case 3:
    temp_v8 = gameGetPlayerData();
    temp_v8 = (int)*(short *)(temp_v8 + 0x26);
    temp_v9 = (int)*(short *)(param_1 + *piVar11 * 0x620 + 0x367e);
    break;
  case 4:
    temp_v8 = gameGetPlayerData();
    temp_v8 = (int)*(short *)(temp_v8 + 0x28);
    temp_v9 = (int)*(short *)(param_1 + *piVar11 * 0x620 + 0x3680);
  }
  FUN_002bf538();
  FUN_002bf380(2,0x28,7,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x65);
  FUN_002bf538();
  FUN_002bf288(2,0x28,0xa9,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x6a);
  FUN_002bf288(2,0x28,temp_v2 + 0xaa,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,
               0x6a);
  temp_v2 = FUN_002bf4f8(0x28,0xb6);
  FUN_002bdf94(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v3 + 8) + param_2,
               (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v2 + 10) + param_3,1,3,0x6f,
               &LAB_003b7b50,temp_v9);
  temp_v2 = FUN_002bf4f8(0x28,0xb9);
  if (temp_v9 < temp_v8) {
    temp_v6 = 0x72e027ff;
  }
  else {
    temp_v6 = 0xffffffff;
  }
  drawSetColorFromRGBA8(temp_v6);
  FUN_002bdf94(0,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v2 + 8) + param_2,
               (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v3 + 10) + param_3,1,3,0x6f,
               &LAB_003b7b50,temp_v8);
  FUN_002bed3c();
  FUN_002bf288(2,0x28,0xaf,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x6f);
  FUN_002bf288(2,0x28,0xb2,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x6f);
  FUN_002bf288(2,0x28,0xb3,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x6f);
  FUN_002bf538();
  temp_v2 = g_titleScene;
  temp_v8 = packNibblesAndByte(6,1,0);
  piVar11 = (int *)(temp_v2 + 0x12ac);
  temp_v9 = piVar11[*piVar11 + 2];
  piVar11[*piVar11 + 2] = temp_v8;
  if (*(char *)(temp_v2 + 0x12c4) != '\0' || temp_v9 != temp_v8) {
    (**(romwright_code **)(temp_v2 + 0x12c8))();
    *(unsigned char *)(temp_v2 + 0x12c4) = 0;
  }
  FUN_002bf288(2,0x28,0xb0,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x74);
  FUN_002bf288(2,0x28,0xb1,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x74);
  temp_v2 = g_titleScene;
  temp_v3 = packNibblesAndByte(6,7,0);
  piVar11 = (int *)(temp_v2 + 0x12ac);
  temp_v8 = piVar11[*piVar11 + 2];
  piVar11[*piVar11 + 2] = temp_v3;
  if (*(char *)(temp_v2 + 0x12c4) != '\0' || temp_v8 != temp_v3) {
    (**(romwright_code **)(temp_v2 + 0x12c8))();
    *(unsigned char *)(temp_v2 + 0x12c4) = 0;
  }
  FUN_002bf538();
  return;
}

} /* extern "C" */
