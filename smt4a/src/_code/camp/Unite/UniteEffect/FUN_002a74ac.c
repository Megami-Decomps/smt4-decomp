/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a74ac` (_code @ 0x2a74ac, 0x6c8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} void_stack;

extern unsigned char LAB_002a7940; /* 0x2a7940 */
extern unsigned char LAB_002a7994; /* 0x2a7994 */
extern unsigned char LAB_002a79d0; /* 0x2a79d0 */
extern unsigned char LAB_002a79ec; /* 0x2a79ec */
extern unsigned char LAB_002a7a14; /* 0x2a7a14 */
extern unsigned char LAB_002a7a4c; /* 0x2a7a4c */
extern unsigned char LAB_002a7a68; /* 0x2a7a68 */
extern unsigned char LAB_002a7a7c; /* 0x2a7a7c */
extern unsigned char DAT_0052f360; /* 0x52f360 */
extern unsigned char DAT_0052f3b4; /* 0x52f3b4 */
extern unsigned char DAT_0052f3c0; /* 0x52f3c0 */
extern int DAT_0057f2c4; /* 0x57f2c4 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0013c174. */
/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_0014e220. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_0019e330. */
/* Supplied declaration required: FUN_001fc348. */
/* Supplied declaration required: FUN_0020214c. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_002f1908. */
extern int FUN_003316b4(int);
extern unsigned int FUN_00340fa0(void);
/* Supplied declaration required: FUN_00371c3c. */
/* Supplied declaration required: FUN_00387240. */
/* Supplied declaration required: FUN_003d2a00. */
/* Supplied declaration required: FUN_003f9e80. */
/* Supplied declaration required: FUN_003fb5d4. */
extern unsigned int FUN_00409fe8(unsigned short, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
/* Supplied declaration required: FUN_0040ab7c. */
extern unsigned int FUN_0040ac08(void);
/* Supplied declaration required: FUN_0040bd04. */
/* Supplied declaration required: FUN_0040c190. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_002a74ac(void)

{
/* irregular: 26 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char *puVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char *temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned char *temp_v10;
  unsigned int temp_v11;
  unsigned char temp_v12 [76];
  
  temp_v0 = DAT_0057f2c4;
  FUN_002f1908();
  temp_v3 = 0;
  if (*(short *)(temp_v0 + 0x1e) != 0) {
    do {
      temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + temp_v3 * 2 + 0xe);
      FUN_00184310();
      temp_v2 = FUN_00409fe8(*(unsigned short *)(temp_v1 + 0x9c),0,1);
      *(unsigned int *)(temp_v0 + temp_v3 * 4 + 0x28) = temp_v2;
      FUN_003fb5d4(temp_v2,7,1);
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < (int)(unsigned int)*(unsigned short *)(temp_v0 + 0x1e));
  }
  *(unsigned int *)(temp_v0 + 0x3c) = *(unsigned int *)(temp_v0 + 0x28);
  temp_v1 = FUN_00340fa0();
  temp_v5 = 0x100;
  if (temp_v1 < 0x20000) {
    FUN_0040bd04(temp_v0 + 0x38,0x20000,0x20000,0x100);
  }
  else {
    FUN_0040bd04(temp_v0 + 0x38,0x30000,0x30000,0x100);
  }
  FUN_0040c190(temp_v0 + 0x38);
  temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + 0xc);
  FUN_00184310();
  temp_v2 = FUN_00409fe8(*(unsigned short *)(temp_v1 + 0x9c),0,1);
  *(unsigned int *)(temp_v0 + 0x8c) = temp_v2;
  FUN_003fb5d4(temp_v2,7,1);
  if (*(short *)(temp_v0 + 0x1e) == 2) {
    if (*(char *)(temp_v0 + 0x20) != '\0') {
      temp_v3 = 0x20;
      FUN_00178b04(0x20,&LAB_002a7940,0x6ea);
      temp_v2 = 0;
      if (temp_v3 != 0) {
        temp_v2 = FUN_0040ac08();
      }
      *(unsigned int *)(temp_v0 + 0x90) = temp_v2;
      FUN_0040aa6c();
      FUN_0040ab7c(*(unsigned int *)(temp_v0 + 0x90),0);
      FUN_0040aad4(*(unsigned int *)(temp_v0 + 0x90),0);
      FUN_0013c174(&LAB_002a7994,&temp_v5,1);
      temp_v3 = 0x48;
      FUN_00178b04(0x48,&LAB_002a7940,0x6ef);
    }
    else {
      temp_v3 = 0x20;
      FUN_00178b04(0x20,&LAB_002a7940,0x6f2);
      temp_v2 = 0;
      if (temp_v3 != 0) {
        temp_v2 = FUN_0040ac08();
      }
      *(unsigned int *)(temp_v0 + 0x90) = temp_v2;
      FUN_0040aa6c();
      FUN_0040ab7c(*(unsigned int *)(temp_v0 + 0x90),0);
      FUN_0040aad4(*(unsigned int *)(temp_v0 + 0x90),0);
      FUN_0013c174(&LAB_002a79d0,&temp_v5,1);
      temp_v3 = 0x48;
      FUN_00178b04(0x48,&LAB_002a7940,0x6f7);
    }
    if (temp_v3 != 0) {
      FUN_003f9e80();
    }
    *(int *)(temp_v0 + 0x98) = temp_v3;
    FUN_003d2a00(&LAB_002a79ec);
    FUN_001fc348(temp_v0 + 0x38);
  }
  if (*(short *)(temp_v0 + 0x1e) == 3) {
    temp_v3 = 0x20;
    FUN_00178b04(0x20,&LAB_002a7940,0x70c);
    temp_v2 = 0;
    if (temp_v3 != 0) {
      temp_v2 = FUN_0040ac08();
    }
    *(unsigned int *)(temp_v0 + 0x90) = temp_v2;
    FUN_0040aa6c();
    FUN_0040ab7c(*(unsigned int *)(temp_v0 + 0x90),0);
    FUN_0040aad4(*(unsigned int *)(temp_v0 + 0x90),0);
    FUN_0013c174(&LAB_002a7a14,&temp_v5,1);
    temp_v3 = 0x48;
    FUN_00178b04(0x48,&LAB_002a7940,0x711);
    if (temp_v3 != 0) {
      FUN_003f9e80();
    }
    *(int *)(temp_v0 + 0x98) = temp_v3;
    FUN_003d2a00(&LAB_002a79ec);
    FUN_001fc348(temp_v0 + 0x38);
  }
  if (*(short *)(temp_v0 + 0x1e) == 4) {
    temp_v3 = 0x20;
    FUN_00178b04(0x20,&LAB_002a7940,0x723);
    temp_v2 = 0;
    if (temp_v3 != 0) {
      temp_v2 = FUN_0040ac08();
    }
    *(unsigned int *)(temp_v0 + 0x90) = temp_v2;
    FUN_0040aa6c();
    FUN_0040ab7c(*(unsigned int *)(temp_v0 + 0x90),0);
    FUN_0040aad4(*(unsigned int *)(temp_v0 + 0x90),0);
    FUN_0013c174(&LAB_002a7a4c,&temp_v5,1);
    temp_v3 = 0x48;
    FUN_00178b04(0x48,&LAB_002a7940,0x728);
    if (temp_v3 != 0) {
      FUN_003f9e80();
    }
    *(int *)(temp_v0 + 0x98) = temp_v3;
    FUN_003d2a00(&LAB_002a79ec);
    FUN_001fc348(temp_v0 + 0x38);
  }
  temp_v3 = 0;
  if (*(short *)(temp_v0 + 0x1e) != 0) {
    do {
      FUN_00371c3c((int)*(short *)(temp_v0 + temp_v3 * 2 + 0xe),1);
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < (int)(unsigned int)*(unsigned short *)(temp_v0 + 0x1e));
  }
  puVar4 = &LAB_002a7a68;
  FUN_0020214c();
  *(unsigned char **)(temp_v0 + 0x334) = puVar4;
  temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + 0xc);
  FUN_00184310();
  temp_v3 = FUN_003316b4((int)*(char *)(temp_v1 + 0x38));
  FUN_00100388(temp_v12,&LAB_002a7a7c,temp_v3 + 1);
  puVar4 = temp_v12;
  FUN_0020214c();
  *(unsigned char **)(temp_v0 + 0x33c) = puVar4;
  temp_v2 = *(unsigned int *)(temp_v0 + 0x334);
  FUN_00275bc8(temp_v2,puVar4);
  *(unsigned int *)(temp_v0 + 0x338) = temp_v2;
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(temp_v0 + 0x340);
  temp_v6 = &DAT_0052f3b4;
  temp_v10 = &DAT_0052f3c0;
  temp_v7 = 0xc;
  temp_v11 = 0xe0;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v5 = 0x30;
  FUN_001505ac(temp_v0 + 0x340,&DAT_0052f360,0x24);
  temp_v3 = 0;
  do {
    temp_v4 = temp_v0 + temp_v3 * 0x8c;
    temp_v5 = 1;
    FUN_0014e188(temp_v4 + 0x360,0x1a,0,temp_v0 + 0x340);
    FUN_00184758(temp_v4 + 0x360,0);
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 6);
  temp_v3 = 6;
  do {
    temp_v4 = temp_v0 + temp_v3 * 0x8c;
    temp_v5 = 1;
    FUN_0014e188(temp_v4 + 0x360,0x1a,0,temp_v0 + 0x340);
    FUN_001846d0(temp_v4 + 0x360,0);
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 10);
  temp_v5 = temp_v0 + 0x340;
  temp_v6 = (unsigned char *)0x65;
  temp_v3 = temp_v0 + 0x8d8;
  FUN_0014e220(temp_v3,0x1a,0xffffffff,0x18);
  FUN_0019e330(temp_v3,0);
  *(unsigned short *)(temp_v0 + 0x912) = 2;
  FUN_00387240(temp_v3,0x1a,0x21c);
  *(unsigned char *)(temp_v0 + 0x914) = 1;
  temp_v5 = 1;
  FUN_0014e188(temp_v0 + 0x964,0x1a,0,temp_v0 + 0x340);
  FUN_001846d0(temp_v0 + 0x964,2);
  FUN_001681cc(99);
  temp_v0 = DAT_0057f2c4;
  *(unsigned int *)(DAT_0057f2c4 + 4) = 1;
  *(unsigned int *)(temp_v0 + 8) = 0;
  return;
}
