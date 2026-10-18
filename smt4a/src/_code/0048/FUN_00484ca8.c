/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00484ca8` (_code @ 0x484ca8, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_00483d00(); /* 0x483d00 */
extern int FUN_00483d34(); /* 0x483d34 */
extern int FUN_00484378(); /* 0x484378 */
extern unsigned char LAB_0048502c; /* 0x48502c */
extern unsigned char LAB_0048503c; /* 0x48503c */
extern int FUN_004850c4(); /* 0x4850c4 */
extern int FUN_004850e4(); /* 0x4850e4 */
extern int FUN_004852a0(); /* 0x4852a0 */
extern int FUN_00485308(); /* 0x485308 */
extern int FUN_0048550c(); /* 0x48550c */
extern unsigned char DAT_00532e94; /* 0x532e94 */
extern unsigned char DAT_00532eac; /* 0x532eac */
extern unsigned char DAT_00532ed0; /* 0x532ed0 */
extern unsigned short DAT_00588108; /* 0x588108 */

/* Supplied declaration required: FUN_0014384c. */
/* Supplied declaration required: FUN_0014afd0. */
/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_001505ac. */
extern unsigned int *FUN_0015687c(void);
extern unsigned short FUN_00167f08(void);
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */
/* Supplied declaration required: FUN_0020214c. */
/* Supplied declaration required: FUN_00203b40. */
extern unsigned int *FUN_00261828(void);
/* Supplied declaration required: FUN_00275bc8. */
extern unsigned int *FUN_002840ac(void);
/* Supplied declaration required: FUN_00342010. */
extern unsigned int *FUN_003fd528(void);
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_00484ca8(unsigned char *param_1)

{
/* irregular: 20 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  *(romwright_code **)(param_1 + 0xd4) = FUN_004850e4;
  *(unsigned int *)(param_1 + 0xd8) = 0;
  *(romwright_code **)(param_1 + 0xdc) = FUN_004852a0;
  *(unsigned int *)(param_1 + 0xe0) = 0;
  *(romwright_code **)(param_1 + 0xe4) = FUN_00483d34;
  *(unsigned int *)(param_1 + 0xe8) = 0;
  *(unsigned int *)(param_1 + 0xec) = 0x4850e0;
  *(unsigned int *)(param_1 + 0xf0) = 0;
  *(romwright_code **)(param_1 + 0xf4) = FUN_00484378;
  *(unsigned int *)(param_1 + 0xf8) = 0;
  *(romwright_code **)(param_1 + 0xfc) = FUN_00485308;
  *(unsigned int *)(param_1 + 0x100) = 0;
  *(romwright_code **)(param_1 + 0x104) = FUN_00483d00;
  *(unsigned int *)(param_1 + 0x108) = 0;
  *(romwright_code **)(param_1 + 0x10c) = FUN_0048550c;
  *(unsigned int *)(param_1 + 0x110) = 0;
  *(romwright_code **)(param_1 + 0x114) = FUN_004850c4;
  *(unsigned int *)(param_1 + 0x118) = 0;
  *(unsigned int *)(param_1 + 0x11c) = 0x485ab8;
  *(unsigned int *)(param_1 + 0x120) = 0;
  *(unsigned int *)(param_1 + 0x124) = 0x4850c0;
  *(unsigned int *)(param_1 + 0x128) = 0;
  *(unsigned int *)(param_1 + 300) = 0x48505c;
  *(unsigned int *)(param_1 + 0x130) = 0;
  param_1[0x261] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  param_1[0x20] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x22] = 0;
  *(unsigned short *)(param_1 + 0x2c) = 0;
  *(unsigned short *)(param_1 + 0x2e) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(unsigned int *)(param_1 + 0xa4) = 0;
  *(unsigned int *)(param_1 + 0xa8) = 0;
  *(unsigned int *)(param_1 + 0xac) = 0;
  param_1[0x562] = 0;
  if (param_1[0x261] == '\0' || param_1[0x261] == -1) {
    puVar1 = (unsigned int *)FUN_0015687c();
    *(unsigned int *)(param_1 + 0xb0) = *puVar1;
    *(unsigned int *)(param_1 + 0xb4) = puVar1[1];
    *(unsigned int *)(param_1 + 0xb8) = puVar1[2];
    *(unsigned int *)(param_1 + 0xbc) = puVar1[3];
    *(unsigned short *)(param_1 + 0xc0) = *(unsigned short *)(puVar1 + 4);
  }
  if (param_1[0x261] == '\x01') {
    puVar1 = (unsigned int *)FUN_00261828();
    *(unsigned int *)(param_1 + 0xb0) = *puVar1;
    *(unsigned int *)(param_1 + 0xb4) = puVar1[1];
    *(unsigned int *)(param_1 + 0xb8) = puVar1[2];
    *(unsigned int *)(param_1 + 0xbc) = puVar1[3];
    *(unsigned short *)(param_1 + 0xc0) = *(unsigned short *)(puVar1 + 4);
  }
  if (param_1[0x261] == '\x02') {
    puVar1 = (unsigned int *)FUN_003fd528();
    *(unsigned int *)(param_1 + 0xb0) = *puVar1;
    *(unsigned int *)(param_1 + 0xb4) = puVar1[1];
    *(unsigned int *)(param_1 + 0xb8) = puVar1[2];
    *(unsigned int *)(param_1 + 0xbc) = puVar1[3];
    *(unsigned short *)(param_1 + 0xc0) = *(unsigned short *)(puVar1 + 4);
  }
  if (param_1[0x261] == '\x04') {
    puVar1 = (unsigned int *)FUN_002840ac();
    *(unsigned int *)(param_1 + 0xb0) = *puVar1;
    *(unsigned int *)(param_1 + 0xb4) = puVar1[1];
    *(unsigned int *)(param_1 + 0xb8) = puVar1[2];
    *(unsigned int *)(param_1 + 0xbc) = puVar1[3];
    *(unsigned short *)(param_1 + 0xc0) = *(unsigned short *)(puVar1 + 4);
  }
  *(unsigned int *)(param_1 + 0xc2) = *(unsigned int *)(param_1 + 0xb0);
  *(unsigned int *)(param_1 + 0xc6) = *(unsigned int *)(param_1 + 0xb4);
  *(unsigned int *)(param_1 + 0xca) = *(unsigned int *)(param_1 + 0xb8);
  *(unsigned int *)(param_1 + 0xce) = *(unsigned int *)(param_1 + 0xbc);
  *(unsigned short *)(param_1 + 0xd2) = *(unsigned short *)(param_1 + 0xc0);
  FUN_0014384c(0x23);
  FUN_0014afd0(0x23,0);
  FUN_00203b40(param_1 + 0x198,0x69,7,0xf,1,1);
  FUN_00203b40(param_1 + 0x1fc,4,1,4,1,1);
  puVar2 = &LAB_0048502c;
  FUN_0020214c();
  *(unsigned char **)(param_1 + 0x264) = puVar2;
  puVar2 = &LAB_0048503c;
  FUN_0020214c();
  *(unsigned char **)(param_1 + 0x268) = puVar2;
  FUN_00275bc8();
  *(unsigned char **)(param_1 + 0x26c) = puVar2;
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(param_1 + 0x274);
  FUN_001505ac(param_1 + 0x274,&DAT_00532e94,0x18,&DAT_00532eac,0x24,0,0,0,0,&DAT_00532ed0,0x70);
  FUN_0014e188(param_1 + 0x294,0x23,0,param_1 + 0x274,1);
  FUN_001846d0(param_1 + 0x294,0);
  FUN_0014e188(param_1 + 800,0x23,0,param_1 + 0x274,1);
  FUN_00184758(param_1 + 800,0);
  FUN_0014e188(param_1 + 0x3ac,0x23,0,param_1 + 0x274,1);
  FUN_00184c00(param_1 + 0x3ac,0);
  FUN_00342010();
  DAT_00588108 = FUN_00167f08();
  *(unsigned short *)(param_1 + 0x55e) = 0x97;
  return;
}
