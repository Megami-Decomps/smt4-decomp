/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021c45c` (_code @ 0x21c45c, 0xca0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(...);
int FUN_0014e188(...);
int FUN_0014e220(...);
int FUN_001505ac(int, unsigned char *, int, unsigned char *, int, unsigned char *, int, int, int, unsigned char *, int);
int FUN_00184310(void);
int uiSpriteSelectAnim(...);
int uiSpriteSetKeyframe(...);
int uiSpriteSetImageKeyframe(...);
int FUN_0019e330(...);
int gameGetSlotRecord(...);
int wordTripleClear(...);
int FUN_00203b40(...);
int FUN_0020d3d4(...);
int FUN_0023f328(...);
int FUN_0023f788(...);
int FUN_002804b0(...);
int dataSet16LoadAndSort(void);
int FUN_002bf464(void);
int campButtonHelpAcquire(void);
int FUN_00371c3c(...);
int FUN_00387240(...);
int FUN_003eb200(void);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(int);

/* stack frame of param_2: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

extern unsigned char LAB_0021d124; /* 0x21d124 */
extern int FUN_002fde98(...); /* 0x2fde98 */
extern unsigned char DAT_005288c8; /* 0x5288c8 */
extern unsigned char DAT_005289dc; /* 0x5289dc */
extern unsigned char DAT_00528c34; /* 0x528c34 */
extern unsigned char DAT_00528d0c; /* 0x528d0c */
extern unsigned int DAT_005e1560; /* 0x5e1560 */

/* Supplied declaration required: qsort. */
/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_0014e220. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
extern int FUN_00187168(void);
/* Supplied declaration required: FUN_0019e330. */
/* Supplied declaration required: gameGetSlotRecord. */
extern int gameGetSlotTable(void);
/* Supplied declaration required: wordTripleClear. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_0020d3d4. */
/* Supplied declaration required: FUN_0023f328. */
/* Supplied declaration required: FUN_0023f788. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: dataSet16LoadAndSort. */
/* Supplied declaration required: FUN_002bf464. */
/* Supplied declaration required: campButtonHelpAcquire. */
/* Supplied declaration required: FUN_00371c3c. */
/* Supplied declaration required: FUN_00387240. */
extern int gameDataFlagTestBit(int *);
extern int FUN_003e48bc(void);
extern int FUN_003e4d68(unsigned int);
extern unsigned short FUN_003e53ec(void);
/* Supplied declaration required: FUN_003eb200. */
extern int FUN_0047fbb4(unsigned int);
extern int flagValueIsPositive(unsigned int);
extern int bitsAt60Test(int, unsigned int);
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_0021c45c(int param_1,int param_2)

{
/* irregular: 24 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned long long temp_v8;
  int *temp_v9 [6];
  
  temp_v9[3] = (int *)(param_1 + 0x3874);
  *(unsigned int *)(param_1 + 0x387c) = 0;
  *(unsigned int *)(param_1 + 0x3880) = 0;
  *(unsigned int *)(param_1 + 0x3878) = 0;
  *(unsigned int *)(param_1 + 0x388c) = 0;
  *temp_v9[3] = param_2;
  *(unsigned int *)(param_1 + 0x3890) = 0xffffffff;
  *(unsigned char *)(param_1 + 0x38b0) = 0;
  *(unsigned char *)(param_1 + 0x38ba) = 0;
  *(unsigned char *)(param_1 + 0x3894) = 0x20;
  temp_v7 = 0;
  *(unsigned int *)(param_1 + 0x41a0) = 0;
  *(unsigned int *)(param_1 + 0x41a4) = 0;
  *(unsigned int *)(param_1 + 0x41a8) = 0;
  *(unsigned int *)(param_1 + 0x41ac) = 0;
  *(unsigned int *)(param_1 + 0x41b0) = 0;
  *(unsigned int *)(param_1 + 0x41b4) = 0;
  *(unsigned int *)(param_1 + 0x4ba4) = 0;
  *(unsigned int *)(param_1 + 0x4bc0) = 0;
  *(unsigned char *)(param_1 + 0x3db0) = 0;
  dataSet16LoadAndSort();
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(param_1);
  FUN_001505ac(param_1,&DAT_005288c8,0x114,&DAT_005289dc,600,&DAT_00528c34,0xd8,0,0,&DAT_00528d0c,
               0x9f4);
  temp_v8 = (unsigned long long)temp_v7;
  temp_v1 = param_1 + 0x9f8;
  temp_v5 = 0;
  do {
    temp_v6 = param_1 + temp_v5 * 0x8c;
    FUN_0014e188(temp_v6 + 0x73c,0xd,0,param_1,6);
    uiSpriteSelectAnim(temp_v6 + 0x73c,0);
    temp_v2 = temp_v6 + 0x9f8;
    FUN_0014e188(temp_v2,0xd,0,param_1,6);
    if (temp_v5 == 0) {
      temp_v4 = 0xb;
      temp_v2 = temp_v1;
    }
    else {
      temp_v4 = 10;
    }
    uiSpriteSetImageKeyframe(temp_v2,temp_v4,0);
    temp_v2 = temp_v6 + 0xc28;
    FUN_0014e188(temp_v2,0xd,0x1b,param_1,0x1f);
    FUN_00387240(temp_v2,0xd,0x45);
    uiSpriteSelectAnim(temp_v2,6);
    FUN_0014e188(temp_v6 + 0x145c,0xd,0x1c8,param_1,0x1a);
    uiSpriteSelectAnim(temp_v6 + 0x145c,0xb);
    temp_v2 = temp_v6 + 0x168c;
    FUN_0014e188(temp_v2,0xd,0xbba,param_1,0x1a);
    FUN_00387240(temp_v2,0xd,0x1ca);
    uiSpriteSelectAnim(temp_v2,0xd);
    temp_v6 = temp_v6 + 0x18bc;
    FUN_0014e188(temp_v6,0xd,0xbbe,param_1,0x25);
    FUN_00387240(temp_v6,0xd,0x1ca);
    uiSpriteSelectAnim(temp_v6,0xe);
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 4);
  FUN_0014e188(param_1 + 0x96c,0xd,0x5e,param_1,6);
  temp_v1 = *temp_v9[3];
  FUN_003eb200();
  if (temp_v1 != 0) {
    uiSpriteSetKeyframe(param_1 + 0x96c,0xd,0);
  }
  FUN_0014e188(param_1 + 0x20,0xd,0xdb,param_1,6);
  uiSpriteSelectAnim(param_1 + 0x20,0x1b);
  temp_v1 = 0;
  do {
    temp_v5 = param_1 + temp_v1 * 0x8c;
    FUN_0014e188(temp_v5 + 0x138,0xd,0xdd,param_1,6);
    uiSpriteSelectAnim(temp_v5 + 0x138,0x1b);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 8);
  FUN_0014e188(param_1 + 0xac,0xd,0xde,param_1,6);
  uiSpriteSelectAnim(param_1 + 0xac,1);
  FUN_0014e188(param_1 + 0x598,0xd,0x4a,param_1,6);
  uiSpriteSelectAnim(param_1 + 0x598,2);
  FUN_0014e188(param_1 + 0x624,0xd,0x96,param_1,6);
  uiSpriteSelectAnim(param_1 + 0x624,3);
  FUN_0014e188(param_1 + 0x6b0,0xd,0x9c,param_1,6);
  uiSpriteSelectAnim(param_1 + 0x6b0,0x1e);
  temp_v1 = 0;
  do {
    FUN_0014e188(param_1 + temp_v1 * 0x8c + 0xe58,0xd,0x72,param_1,6);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 6);
  temp_v1 = 0;
  do {
    temp_v5 = param_1 + temp_v1 * 0x8c + 0x2294;
    FUN_0014e188(temp_v5,7,2000,param_1,0xf1);
    uiSpriteSelectAnim(temp_v5,4);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x19);
  temp_v1 = 0;
  do {
    temp_v5 = param_1 + temp_v1 * 0x8c;
    FUN_0014e188(temp_v5 + 0x3040,0xd,1000,param_1,0xf1);
    uiSpriteSelectAnim(temp_v5 + 0x3040,5);
    FUN_0014e188(temp_v5 + 0x32fc,0xd,0x3ea,param_1,0xf1);
    uiSpriteSelectAnim(temp_v5 + 0x32fc,5);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 5);
  temp_v1 = 0;
  do {
    temp_v5 = param_1 + temp_v1 * 0x8c + 0x35b8;
    FUN_0014e220(temp_v5,0xd,0xffffffff,0xf,param_1,0xf1);
    uiSpriteSelectAnim(temp_v5,7);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 5);
  FUN_0014e188(param_1 + 0x11a0,0xd,0x110,param_1,6);
  uiSpriteSelectAnim(param_1 + 0x11a0,0x1b);
  FUN_0014e188(param_1 + 0x1344,0xd,0,param_1,6);
  uiSpriteSelectAnim(param_1 + 0x1344,9);
  FUN_0014e188(param_1 + 0x13d0,0xd,0,param_1,6);
  uiSpriteSelectAnim(param_1 + 0x13d0,9);
  FUN_0020d3d4(param_1);
  FUN_0014e188(param_1 + 0x122c,0xd,0x124,param_1,6);
  uiSpriteSelectAnim(param_1 + 0x122c,8);
  FUN_0014e188(param_1 + 0x12b8,0xd,0,param_1,6);
  FUN_0014e188(param_1 + 0x2208,0xd,0,param_1,6);
  FUN_0014e188(param_1 + 0x1aec,0xd,0xfa9,param_1,0x42);
  uiSpriteSetImageKeyframe(param_1 + 0x1aec,0x1b,0);
  FUN_0014e188(param_1 + 0x1b78,0xd,0xfa9,param_1,0x42);
  uiSpriteSelectAnim(param_1 + 0x1b78,0x14);
  temp_v1 = param_1 + 0x1c04;
  FUN_0014e188(temp_v1,0xd,0xfbd,param_1,0x42);
  FUN_0014e188(param_1 + 0x1c90,0xd,0xfbe,param_1,0x42);
  uiSpriteSelectAnim(param_1 + 0x1c90,0x15);
  FUN_00387240(temp_v1,0xd,0xfc1);
  temp_v5 = param_1 + 0x1d1c;
  FUN_0014e188(temp_v5,0xd,0xfbf,param_1,0x42);
  uiSpriteSelectAnim(temp_v5,0x16);
  FUN_0019e330(temp_v5,0xe,0);
  FUN_00387240(temp_v1,0xd,0xfc2);
  temp_v1 = 0;
  do {
    FUN_0014e188(param_1 + temp_v1 * 0x8c + 0x1da8,0xd,0xfbf,param_1,0x42);
    uiSpriteSetImageKeyframe(temp_v5,0x28,0);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 8);
  temp_v0 = FUN_003e53ec();
  *(unsigned short *)(param_1 + 0x4b9c) = temp_v0;
  *(unsigned char *)(param_1 + 0x4ba0) = 0;
  temp_v1 = FUN_003e48bc();
  if (temp_v1 != 0) {
    *(unsigned char *)(param_1 + 0x4ba0) = 2;
  }
  *(unsigned short *)(param_1 + 0x4b9e) = 0;
  *(unsigned int *)(param_1 + 0x4bb0) = 0;
  *(unsigned int *)(param_1 + 0x4bb4) = 0;
  *(unsigned int *)(param_1 + 0x4bb8) = 0;
  *(unsigned int *)(param_1 + 0x4bbc) = 0;
  FUN_00371c3c(0xffffffff,1);
  temp_v1 = 0;
  *(unsigned int *)(param_1 + 0x4bb0) = 0xffffffff;
  do {
    temp_v5 = gameGetSlotTable();
    if (*(char *)(temp_v5 + temp_v1 + 0x1ca0) >= '\0') {
      temp_v5 = gameGetSlotTable();
      temp_v5 = gameGetSlotRecord((int)*(char *)(temp_v5 + temp_v1 + 0x1ca0));
      FUN_00371c3c((int)*(short *)(temp_v5 + 0x62),1);
      temp_v2 = param_1 + temp_v1 * 4;
      *(unsigned int *)(temp_v2 + 0x4bb4) = (unsigned int)*(unsigned short *)(temp_v5 + 0x62);
      *(unsigned int *)(temp_v2 + 0x4220) = (unsigned int)*(unsigned short *)(temp_v5 + 0x62);
      temp_v5 = gameGetSlotTable();
      *(short *)(param_1 + temp_v1 * 2 + 0x4212) = (short)*(char *)(temp_v5 + temp_v1 + 0x1ca0);
      *(unsigned char *)(param_1 + temp_v1 + 0x41ee) = 0;
    }
    else {
      temp_v5 = param_1 + temp_v1 * 4;
      *(unsigned int *)(temp_v5 + 0x4bb4) = 0;
      *(unsigned int *)(temp_v5 + 0x4220) = 0;
      *(unsigned short *)(param_1 + temp_v1 * 2 + 0x4212) = 0xfffc;
      *(unsigned char *)(param_1 + temp_v1 + 0x41ee) = 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  temp_v7 = 0;
  do {
    temp_v1 = FUN_003e4d68(temp_v7 & 0xffff);
    temp_v5 = FUN_00187168();
    if (temp_v5 != 0) {
      temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 0x62);
      FUN_00184310();
      FUN_00371c3c((int)(short)(*(short *)(temp_v3 + 0x9c) + 1),0);
    }
    temp_v7 = temp_v7 + 1;
  } while ((int)temp_v7 < 0xc);
  *(unsigned short *)(param_1 + 0x4218) = 0xfffc;
  *(unsigned int *)(param_1 + 0x4bac) = 0;
  FUN_0023f328(param_1,0,1);
  FUN_0023f328(param_1,1);
  FUN_0023f328(param_1,2,1);
  FUN_0023f328(param_1,3,1);
  FUN_0023f328(param_1,4,1);
  temp_v1 = 1;
  do {
    if (((*(short *)(param_1 + temp_v1 * 2 + 0x4210) < 0) || (temp_v5 = gameGetSlotRecord(), temp_v5 == 0)) ||
       (temp_v5 = bitsAt60Test(temp_v5,1), temp_v5 != 0)) {
      *(unsigned char *)(param_1 + temp_v1 + 0x41ed) = 1;
    }
    temp_v4 = (unsigned int)temp_v8;
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  FUN_0023f788(param_1);
  *(unsigned char *)(param_1 + 0x4b0f) = 0;
  *(unsigned int *)(param_1 + 0x4b10) = 0;
  *(unsigned short *)(param_1 + 0x4b14) = 0;
  *(unsigned short *)(param_1 + 0x4b16) = 0;
  *(unsigned char *)(param_1 + 0x4b18) = 0;
  *(unsigned char *)(param_1 + 0x4b19) = 0;
  *(unsigned char *)(param_1 + 0x4b1a) = 0;
  *(unsigned char *)(param_1 + 0x4b1b) = 0;
  *(unsigned char *)(param_1 + 0x4b1c) = 0;
  *(unsigned short *)(param_1 + 0x4b1e) = 0xffff;
  *(unsigned char *)(param_1 + 0x4b20) = 0;
  temp_v1 = 0;
  *(unsigned int *)(param_1 + 0x4b24) = 0;
  do {
    temp_v5 = param_1 + temp_v1 * 2;
    *(unsigned short *)(temp_v5 + 0x4b2c) = 0;
    *(unsigned short *)(temp_v5 + 0x4b36) = 0;
    *(unsigned int *)(param_1 + temp_v1 * 4 + 0x4b40) = temp_v4;
    *(unsigned char *)(param_1 + temp_v1 + 0x4b54) = 0;
    *(unsigned short *)(temp_v5 + 0x4b5a) = 0;
    *(unsigned short *)(temp_v5 + 0x4b64) = 0;
    *(unsigned short *)(temp_v5 + 0x4b6e) = 0;
    *(unsigned short *)(temp_v5 + 0x4b78) = 0;
    temp_v1 = temp_v1 + 1;
    *(unsigned short *)(temp_v5 + 0x4b82) = 0;
    *(unsigned short *)(temp_v5 + 0x4b8c) = 0;
  } while (temp_v1 < 5);
  *(int *)(param_1 + 0x3c40) = param_1 + 0x3a4c;
  FUN_00203b40(param_1 + 0x3a4c,399,6,1,0,1);
  temp_v1 = 0;
  temp_v7 = 1;
  do {
    temp_v5 = flagValueIsPositive(temp_v7);
    if ((temp_v5 != 0) && (temp_v5 = FUN_0047fbb4(temp_v7), temp_v5 != 0)) {
      temp_v5 = temp_v1 * 2;
      temp_v1 = temp_v1 + 1;
      *(short *)(param_1 + temp_v5 + 0x3ca8) = (short)temp_v7;
    }
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 0x3d);
  temp_v7 = 0x79f;
  do {
    temp_v5 = flagValueIsPositive(temp_v7);
    if ((temp_v5 != 0) && (temp_v5 = FUN_0047fbb4(temp_v7), temp_v5 != 0)) {
      temp_v5 = temp_v1 * 2;
      temp_v1 = temp_v1 + 1;
      *(short *)(param_1 + temp_v5 + 0x3ca8) = (short)temp_v7;
    }
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 0x7df);
  FUN_00203b40(param_1 + 0x3b14,temp_v1,6,1,0,1);
  qsort(param_1 + 0x3ca8,temp_v1,2,FUN_002fde98);
  FUN_00203b40(param_1 + 0x3bdc,4,1,4,1,1);
  temp_v5 = 0;
  temp_v1 = 0;
  temp_v9[0] = (int *)0x2e;
  temp_v9[1] = (int *)0x32;
  temp_v9[2] = (int *)0x33;
  do {
    temp_v2 = gameDataFlagTestBit(temp_v9[temp_v1]);
    if (temp_v2 != 0) {
      temp_v5 = temp_v5 + 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  FUN_00203b40(param_1 + 0x3b78,temp_v5,6,1,0,1);
  FUN_002bf464();
  campButtonHelpAcquire();
  FUN_002804b0(&LAB_0021d124,param_1 + 0x4b98,0);
  wordTripleClear(&DAT_005e1560);
  return;
}

} /* extern "C" */
