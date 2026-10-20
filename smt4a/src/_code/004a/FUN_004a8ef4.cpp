/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a8ef4` (_code @ 0x4a8ef4, 0x390 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(...);
int FUN_001505ac(int, unsigned char *, int, unsigned char *, int, unsigned char *, int, int, int, unsigned char *, int);
int FUN_0016007c(...);
int FUN_001846d0(...);
int FUN_00184c00(...);
int FUN_0021c45c(int, int);
int FUN_002b14c8(int);
int FUN_002cdad4(int);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(void);

typedef struct fn_004a8ef4_arg0 fn_004a8ef4_arg0;
struct fn_004a8ef4_arg0 {
    unsigned char pad_0x0[0x20];
    undefined4 field_0x20; /* +0x20 */
    unsigned char pad_0x24[0x34];
    undefined4 field_0x58; /* +0x58 */
    undefined2 field_0x5c; /* +0x5c */
    undefined2 field_0x5e; /* +0x5e */
    undefined1 field_0x60; /* +0x60 */
    unsigned char pad_0x61[0x26];
    undefined1 field_0x87; /* +0x87 */
    unsigned char pad_0x88[0x2];
    undefined1 field_0x8a; /* +0x8a */
};

/* stack frame of param_2: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_2_stack;

extern unsigned char DAT_0052ac1c; /* 0x52ac1c */
extern unsigned char DAT_0052ad3c; /* 0x52ad3c */
extern unsigned char DAT_0052ae44; /* 0x52ae44 */
extern unsigned char DAT_0052af04; /* 0x52af04 */
extern int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: FUN_0016007c. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184c00. */
/* Supplied declaration required: FUN_0021c45c. */
/* Supplied declaration required: FUN_002b14c8. */
/* Supplied declaration required: FUN_002cdad4. */
extern unsigned int FUN_003f9ab0(void);
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_004a8ef4(fn_004a8ef4_arg0 *param_1,int param_2)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = DAT_0057a9c8;
  *(unsigned int *)(DAT_0057a9c8 + 0x74a0) = 0;
  *(unsigned int *)(temp_v0 + 0x74a4) = 0;
  *(unsigned char *)(temp_v0 + 0x7505) = 0;
  *(unsigned char *)(temp_v0 + 0x7506) = 0;
  FUN_002b14c8(temp_v0 + 8);
  FUN_002cdad4(temp_v0 + 0x24bc);
  FUN_0021c45c(temp_v0 + 0x28c4,param_2);
  temp_v1 = DAT_0057a9c8;
  *(unsigned short *)(DAT_0057a9c8 + 0x6b56) = 0;
  *(unsigned short *)(temp_v1 + 0x6c82) = 0;
  *(unsigned short *)(temp_v1 + 0x6dae) = 0;
  *(unsigned short *)(temp_v1 + 0x6eda) = 0;
  *(unsigned short *)(temp_v1 + 0x7006) = 0;
  temp_v1 = temp_v0 + 0x7508;
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object();
  FUN_001505ac(temp_v1,&DAT_0052ac1c,0x120,&DAT_0052ad3c,0x108,&DAT_0052ae44,0xc0,0,0,&DAT_0052af04,
               0x5b0);
  temp_v6 = 0;
  do {
    temp_v4 = temp_v0 + temp_v6 * 0x400;
    temp_v3 = 0;
    *(unsigned char *)(temp_v4 + 0x7994) = 0;
    do {
      temp_v5 = temp_v4 + temp_v3 * 0x8c + 0x75b4;
      FUN_0014e188(temp_v5,7,2000,temp_v1,0xf1);
      FUN_001846d0(temp_v5,3);
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 5);
    FUN_0014e188(temp_v4 + 0x7870,0xd,1000,temp_v1,0xf1);
    FUN_001846d0(temp_v4 + 0x7870,8);
    FUN_0014e188(temp_v4 + 0x78fc,0xd,0x3ea,temp_v1,0xf1);
    FUN_001846d0(temp_v4 + 0x78fc,8);
    temp_v3 = temp_v0 + temp_v6 * 0xa0;
    *(unsigned char *)(temp_v3 + 0xb64c) = 0;
    temp_v3 = temp_v3 + 0xb5b4;
    FUN_0014e188(temp_v3,0xd,0x3ee,temp_v1,0xf1);
    FUN_001846d0(temp_v3,9);
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 0x10);
  temp_v6 = 0;
  do {
    temp_v3 = temp_v0 + temp_v6 * 0x14c;
    *(unsigned short *)(temp_v3 + 0x11a2c) = 0;
    FUN_0014e188(temp_v3 + 0x11914,0xd,0xbba,temp_v0 + 0x7508,0xf1);
    FUN_001846d0(temp_v3 + 0x11914,10);
    FUN_0014e188(temp_v3 + 0x119a0,0xd,0xbbe,temp_v0 + 0x7508,0xf1);
    FUN_001846d0(temp_v3 + 0x119a0,0xb);
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 0xc);
  temp_v6 = 0x420;
  FUN_0016007c(0x420,param_2);
  temp_v2 = 0;
  if (temp_v6 != 0) {
    temp_v2 = FUN_003f9ab0();
  }
  temp_v6 = 0;
  *(unsigned int *)(temp_v0 + 0x7488) = temp_v2;
  do {
    temp_v3 = temp_v0 + temp_v6 * 0xc;
    *(unsigned short *)(temp_v3 + 0x12f3c) = 0;
    *(unsigned int *)(temp_v3 + 0x12f40) = 0;
    *(unsigned int *)(temp_v3 + 0x12f44) = 0;
    temp_v3 = temp_v0 + temp_v6 * 0x8c + 0x128ac;
    FUN_0014e188(temp_v3,0xc,0x84,temp_v0 + 0x7508,0xb);
    FUN_001846d0(temp_v3,0xd);
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 0xc);
  *(unsigned char *)(temp_v0 + 0x6168) = 0;
  if ((*(unsigned int *)(param_2 + 0x10c) & 0x40000) != 0) {
    *(unsigned char *)(temp_v0 + 0x6168) = 1;
  }
  FUN_0014e188(temp_v0 + 0x7528,8,0,temp_v1,1);
  FUN_00184c00(temp_v0 + 0x7528,0xd,0);
  return;
}

} /* extern "C" */
