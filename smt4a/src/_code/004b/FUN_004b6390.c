/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b6390` (_code @ 0x4b6390, 0x788 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned char DAT_0053356c; /* 0x53356c */
extern unsigned char DAT_005335cc; /* 0x5335cc */
extern unsigned char DAT_005336c8; /* 0x5336c8 */
extern unsigned char DAT_0053374c; /* 0x53374c */
extern unsigned char DAT_00533768; /* 0x533768 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184758. */
extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_001acf98. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_002c7ce8. */
/* Supplied declaration required: FUN_002c7e6c. */
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_002c85b0. */
/* Supplied declaration required: FUN_00342010. */
/* Supplied declaration required: FUN_0036b644. */
/* Supplied declaration required: FUN_00371c3c. */
/* Supplied declaration required: FUN_0038b6bc. */
/* Supplied declaration required: FUN_003b7314. */
/* Supplied declaration required: FUN_003e4140. */
/* Supplied declaration required: FUN_003f881c. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_004b6390(int param_1)

{
/* irregular: 18 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = 0;
  do {
    FUN_001acf98(0x1d,temp_v1);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  temp_v1 = FUN_001ab888();
  FUN_00371c3c(0xffffffff,1);
  temp_v2 = 0;
  do {
    if (-1 < *(char *)(temp_v1 + temp_v2 + 0x1ca0)) {
      temp_v0 = FUN_001ab854();
      FUN_00371c3c((int)*(short *)(temp_v0 + 0x62),1);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 3);
  FUN_003f881c(0x14,0);
  FUN_003f881c(0x25,0);
  *(unsigned int *)(param_1 + 0x439c) = 0;
  *(unsigned int *)(param_1 + 0x43a4) = 0;
  *(unsigned int *)(param_1 + 0x43a8) = 0;
  *(unsigned int *)(param_1 + 0x43a0) = 0;
  FUN_002804b0("battle/Result.bf",param_1 + 0x439c,0);
  FUN_002804b0("battle/ResultMsg.mbm",param_1 + 0x43a4,0);
  FUN_002804b0("battle/DevilLvUp.bf",param_1 + 0x43a8,0);
  temp_v1 = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 0x28;
    *(unsigned int *)(temp_v2 + 0x7870) = 0;
    *(unsigned int *)(temp_v2 + 0x7878) = 0;
    *(unsigned int *)(temp_v2 + 0x787c) = 0;
    *(unsigned int *)(temp_v2 + 0x7880) = 0;
    *(unsigned int *)(temp_v2 + 0x7884) = 0;
    *(unsigned short *)(temp_v2 + 0x7888) = 0;
    *(unsigned short *)(temp_v2 + 0x788a) = 0;
    *(unsigned short *)(temp_v2 + 0x788c) = 0;
    *(unsigned char *)(temp_v2 + 0x788e) = 0;
    *(unsigned char *)(temp_v2 + 0x788f) = 0;
    temp_v1 = temp_v1 + 1;
    *(unsigned short *)(temp_v2 + 0x7890) = 0;
    *(unsigned char *)(temp_v2 + 0x7892) = 0;
  } while (temp_v1 < 0x25);
  *(unsigned int *)(param_1 + 0x43f0) = 0;
  *(unsigned int *)(param_1 + 0x43f4) = 0;
  *(unsigned int *)(param_1 + 0x43f8) = 0;
  *(unsigned int *)(param_1 + 0x43fc) = 0;
  *(unsigned int *)(param_1 + 0x4400) = 0;
  *(unsigned int *)(param_1 + 0x4404) = 0;
  *(unsigned int *)(param_1 + 0x4408) = 0;
  *(unsigned int *)(param_1 + 0x440c) = 0;
  *(unsigned int *)(param_1 + 0x4410) = 0;
  *(unsigned int *)(param_1 + 0x4414) = 0;
  *(unsigned int *)(param_1 + 0x4418) = 0;
  *(unsigned int *)(param_1 + 0x441c) = 0;
  *(unsigned int *)(param_1 + 0x4420) = 0;
  *(unsigned short *)(param_1 + 0x4424) = 0;
  temp_v2 = 1;
  temp_v1 = 1;
  *(unsigned int *)(param_1 + 0x4428) = 0;
  *(unsigned short *)(param_1 + 0x74ea) = 0xffff;
  do {
    temp_v0 = temp_v2 + 1;
    temp_v1 = temp_v1 + 2;
    *(unsigned short *)(param_1 + temp_v2 * 2 + 0x74ea) = 0xffff;
    temp_v2 = temp_v2 + 2;
    *(unsigned short *)(param_1 + temp_v0 * 2 + 0x74ea) = 0xffff;
  } while (temp_v1 < 0x25);
  *(unsigned short *)(param_1 + 0x7536) = 0;
  *(unsigned int *)(param_1 + 0x74c0) = 0;
  *(unsigned char *)(param_1 + 0x7f2c) = 0;
  *(unsigned char *)(param_1 + 0x7f2d) = 0;
  *(unsigned short *)(param_1 + 0x7f2e) = 0;
  *(unsigned char *)(param_1 + 0x753c) = 0;
  *(unsigned char *)(param_1 + 0x753d) = 0;
  *(unsigned char *)(param_1 + 0x753e) = 0;
  *(unsigned int *)(param_1 + 0x753f) = 0;
  *(unsigned int *)(param_1 + 0x7543) = 0;
  *(unsigned int *)(param_1 + 0x7547) = 0;
  *(unsigned int *)(param_1 + 0x754b) = 0;
  *(unsigned int *)(param_1 + 0x754f) = 0;
  *(unsigned int *)(param_1 + 0x7553) = 0;
  *(unsigned char *)(param_1 + 0x7557) = 0;
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(param_1);
  FUN_001505ac(param_1,&DAT_0053356c,0x60,&DAT_005335cc,0xfc,&DAT_005336c8,0x84,&DAT_0053374c,0x1c,
               &DAT_00533768,0x508);
  FUN_0014e188(param_1 + 0x20,0x1d,0,param_1,1);
  FUN_00184758(param_1 + 0x20,0);
  temp_v1 = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 0x8c;
    FUN_0014e188(temp_v2 + 0xac,0x1d,0,param_1,1);
    FUN_00184758(temp_v2 + 0xac,4,0);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 8);
  FUN_0014e188(param_1 + 0x50c,0x1d,0,param_1,1);
  FUN_001846d0(param_1 + 0x50c,5);
  FUN_0014e188(param_1 + 0x598,0x1d,0,param_1,1);
  FUN_001846d0(param_1 + 0x598,0xe);
  FUN_0014e188(param_1 + 0x624,0x1d,0,param_1,1);
  FUN_00184758(param_1 + 0x624,0);
  FUN_0014e188(param_1 + 0x6b0,0x1d,0,param_1,1);
  FUN_00184758(param_1 + 0x6b0,0);
  FUN_0014e188(param_1 + 0x73c,0x1d,1000,param_1,0x65);
  FUN_0036b644(param_1 + 0x73c,0);
  FUN_0014e188(param_1 + 0x7c8,0x1d,1000,param_1,0x65);
  FUN_0014e188(param_1 + 0x854,0x1d,1000,param_1,0x65);
  FUN_001846d0(param_1 + 0x854,6);
  temp_v1 = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 0x8c;
    FUN_0014e188(temp_v2 + 0x8e0,0x1d,0,param_1,1);
    FUN_001846d0(temp_v2 + 0x8e0,0);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x10);
  *(unsigned int *)(param_1 + 0x43ec) = 0;
  FUN_0014e188(param_1 + 0x40a8,0x1d,0x160,param_1,0xc9);
  FUN_001846d0(param_1 + 0x40a8,0xb);
  FUN_0014e188(param_1 + 0x4134,0x1d,0x160,param_1,0xc9);
  FUN_001846d0(param_1 + 0x4134,0xc);
  temp_v1 = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 0x8c + 0x41c0;
    FUN_0014e188(temp_v2,0x1d,temp_v1 + 0x161,param_1,(int)(short)((short)temp_v1 + 0xca));
    FUN_001846d0(temp_v2,0xd);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  temp_v1 = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 0x28;
    *(unsigned short *)(temp_v2 + 0x7888) = 0;
    *(unsigned int *)(temp_v2 + 0x7878) = 0;
    *(unsigned int *)(temp_v2 + 0x787c) = 0;
    *(unsigned short *)(temp_v2 + 0x788a) = 0;
    *(unsigned char *)(temp_v2 + 0x788e) = 0;
    *(unsigned char *)(temp_v2 + 0x788f) = 0;
    temp_v2 = param_1 + temp_v1 * 0x8c;
    FUN_0014e188(temp_v2 + 0x24c4,0x1d,0x1a,param_1,0xc9);
    *(unsigned short *)(temp_v2 + 0x24fe) = 2;
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x25);
  temp_v1 = 0;
  do {
    temp_v2 = 0;
    do {
      temp_v0 = param_1 + (temp_v1 * 7 + temp_v2 + 0x20) * 0x8c;
      FUN_0014e188(temp_v0 + 0x20,7,0x80c,param_1,0x97);
      FUN_001846d0(temp_v0 + 0x20,1);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 7);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 5);
  temp_v1 = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 0x8c;
    FUN_0014e188(temp_v2 + 0x3900,0x1d,0x3e,param_1,0x6a);
    FUN_001846d0(temp_v2 + 0x3900,9);
    FUN_0014e188(temp_v2 + 0x3cd4,0x1d,0x119,param_1,0xf1);
    FUN_001846d0(temp_v2 + 0x3cd4,10);
    *(unsigned short *)(temp_v2 + 0x3d0e) = 2;
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 6);
  *(unsigned int *)(param_1 + 0x4380) = 0;
  *(unsigned int *)(param_1 + 0x4384) = 0;
  *(unsigned int *)(param_1 + 0x4388) = 0;
  *(unsigned int *)(param_1 + 0x438c) = 0;
  *(unsigned int *)(param_1 + 0x4390) = 0;
  *(unsigned int *)(param_1 + 0x4394) = 0;
  FUN_002c7e6c();
  FUN_002c85b0(0);
  FUN_002c7ce8(0);
  FUN_002c8538(0);
  FUN_00342010();
  FUN_003e4140(param_1 + 0x7f40);
  FUN_0038b6bc();
  FUN_003b7314();
  return;
}
