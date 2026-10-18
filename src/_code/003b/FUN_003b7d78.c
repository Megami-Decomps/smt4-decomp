/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b7d78` (_code @ 0x3b7d78, 0x600 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned char DAT_004059c4; /* 0x4059c4 */
extern unsigned char DAT_00405a0c; /* 0x405a0c */
extern unsigned char DAT_00405ab4; /* 0x405ab4 */
extern unsigned char DAT_00405b20; /* 0x405b20 */
extern unsigned char DAT_00405b3c; /* 0x405b3c */

/* Supplied declaration required: FUN_0028c2a8. */
/* Supplied declaration required: FUN_0028d974. */
/* Supplied declaration required: FUN_00292f44. */
/* Supplied declaration required: FUN_00294568. */
/* Supplied declaration required: FUN_00297704. */
/* Supplied declaration required: FUN_0029a3c4. */
/* Supplied declaration required: FUN_0029eb14. */
/* Supplied declaration required: FUN_002a6214. */
extern int FUN_002a89e4(void);
extern int FUN_002a8a08(void);
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_002eb72c. */
/* Supplied declaration required: FUN_0033c7f0. */


void FUN_003b7d78(int param_1)

{
/* irregular: 16 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = 0;
  do {
    FUN_002a6214(0x28,temp_v1);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  temp_v1 = FUN_002a8a08();
  FUN_00294568(0xffffffff,1);
  temp_v2 = 0;
  do {
    if (-1 < *(char *)(temp_v1 + temp_v2 + 0x9108)) {
      temp_v0 = FUN_002a89e4();
      FUN_00294568((int)*(short *)(temp_v0 + 0x46),1);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 3);
  FUN_0033c7f0(0x14);
  FUN_0033c7f0(0x25);
  *(unsigned int *)(param_1 + 0x3564) = 0;
  *(unsigned int *)(param_1 + 0x356c) = 0;
  *(unsigned int *)(param_1 + 0x3570) = 0;
  *(unsigned int *)(param_1 + 0x3568) = 0;
  FUN_00297704("battle/Result.bf",(unsigned int *)(param_1 + 0x3564),0);
  FUN_00297704("battle/ResultMsg.mbm",(unsigned int *)(param_1 + 0x356c),0);
  FUN_00297704("battle/DevilLvUp.bf",(unsigned int *)(param_1 + 0x3570),0);
  FUN_002c4b30(param_1 + 0x35b4,100);
  *(unsigned int *)(param_1 + 0x3618) = 0;
  *(unsigned int *)(param_1 + 0x361c) = 0;
  *(unsigned int *)(param_1 + 0x3620) = 0;
  *(unsigned int *)(param_1 + 0x3624) = 0;
  *(unsigned int *)(param_1 + 0x3628) = 0;
  *(unsigned int *)(param_1 + 0x362c) = 0;
  temp_v2 = 1;
  *(unsigned int *)(param_1 + 0x3630) = 0;
  *(unsigned int *)(param_1 + 0x3634) = 0;
  *(unsigned int *)(param_1 + 0x3638) = 0;
  *(unsigned int *)(param_1 + 0x363c) = 0;
  *(unsigned int *)(param_1 + 0x3640) = 0;
  *(unsigned int *)(param_1 + 0x3644) = 0;
  *(unsigned int *)(param_1 + 0x3648) = 0;
  *(unsigned short *)(param_1 + 0x364c) = 0;
  *(unsigned int *)(param_1 + 0x3650) = 0;
  temp_v1 = 1;
  *(unsigned short *)(param_1 + 0xcf96) = 0xffff;
  do {
    temp_v0 = temp_v2 + 1;
    temp_v1 = temp_v1 + 2;
    *(unsigned short *)(param_1 + temp_v2 * 2 + 0xcf96) = 0xffff;
    temp_v2 = temp_v2 + 2;
    *(unsigned short *)(param_1 + temp_v0 * 2 + 0xcf96) = 0xffff;
  } while (temp_v1 < 0x19);
  *(unsigned short *)(param_1 + 0xcfca) = 0;
  *(unsigned int *)(param_1 + 0xcf78) = 0;
  *(unsigned char *)(param_1 + 0xd640) = 0;
  *(unsigned char *)(param_1 + 0xd641) = 0;
  *(unsigned char *)(param_1 + 0xd642) = 0;
  FUN_002c3344(param_1);
  FUN_002c32f8(param_1,&DAT_004059c4,0x48,&DAT_00405a0c,0xa8,&DAT_00405ab4,0x6c,&DAT_00405b20,0x1c,
               &DAT_00405b3c,0x32c);
  FUN_002bdb2c(param_1 + 0x20,0x28,0,param_1,1);
  FUN_002bdac0(param_1 + 0x20,0);
  temp_v1 = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 0x8c;
    FUN_002bdb2c(temp_v2 + 0xac,0x28,0,param_1,1);
    FUN_002bdac0(temp_v2 + 0xac,4,0);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 6);
  FUN_002bdb2c(param_1 + 0x3f4,0x28,0,param_1,1);
  FUN_002bf030(param_1 + 0x3f4,4);
  FUN_002bdb2c(param_1 + 0x480,0x28,0,param_1,1);
  FUN_002bdac0(param_1 + 0x480,2,0);
  FUN_002bdb2c(param_1 + 0x50c,0x28,0,param_1,1);
  FUN_002bdac0(param_1 + 0x50c,0);
  FUN_002bdb2c(param_1 + 0x598,0x28,0,param_1,1);
  FUN_002bdac0(param_1 + 0x598,0);
  FUN_002bdb2c(param_1 + 0x624,0x28,1000,param_1,0x65);
  FUN_002eb72c(param_1 + 0x624,0);
  FUN_002bdb2c(param_1 + 0x6b0,0x28,1000,param_1,0x65);
  FUN_002bdb2c(param_1 + 0x73c,0x28,1000,param_1,0x65);
  FUN_002bf030(param_1 + 0x73c,5);
  temp_v1 = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 0x8c + 0x7c8;
    FUN_002bdb2c(temp_v2,0x28,0,param_1,1);
    FUN_002bf030(temp_v2,0);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x10);
  temp_v1 = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 8;
    temp_v0 = param_1 + temp_v1 * 2;
    *(unsigned short *)(temp_v0 + 0xd468) = 0;
    *(unsigned int *)(temp_v2 + 0xd2d8) = 0;
    *(unsigned int *)(temp_v2 + 0xd2dc) = 0;
    *(unsigned short *)(temp_v0 + 0xd49a) = 0;
    *(unsigned char *)(param_1 + temp_v1 + 0xd4fe) = 0;
    *(unsigned char *)(param_1 + temp_v1 + 0xd517) = 0;
    temp_v2 = param_1 + temp_v1 * 0x8c;
    FUN_002bdb2c(temp_v2 + 0x1fd8,0x28,0x1a,param_1,0xc9);
    *(unsigned short *)(temp_v2 + 0x2012) = 2;
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x19);
  temp_v1 = 0;
  do {
    temp_v2 = 0;
    do {
      temp_v0 = param_1 + (temp_v1 * 7 + temp_v2 + 0x1e) * 0x8c;
      FUN_002bdb2c(temp_v0 + 0x20,0xd,0x80c,param_1,0x97);
      FUN_002bf030(temp_v0 + 0x20,1);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 7);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  temp_v1 = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 0x8c;
    FUN_002bdb2c(temp_v2 + 0x2d84,0x28,0x3e,param_1,0x6a);
    FUN_002bf030(temp_v2 + 0x2d84,8);
    FUN_002bdb2c(temp_v2 + 0x3158,0x28,0x119,param_1,0xf1);
    FUN_002bf030(temp_v2 + 0x3158,9);
    *(unsigned short *)(temp_v2 + 0x3192) = 2;
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 6);
  *(unsigned int *)(param_1 + 0x3548) = 0;
  *(unsigned int *)(param_1 + 0x354c) = 0;
  *(unsigned int *)(param_1 + 0x3550) = 0;
  *(unsigned int *)(param_1 + 0x3554) = 0;
  *(unsigned int *)(param_1 + 0x3558) = 0;
  *(unsigned int *)(param_1 + 0x355c) = 0;
  FUN_0028c2a8();
  FUN_0029a3c4(0);
  FUN_00292f44(0);
  FUN_0029eb14(0);
  FUN_0028d974();
  return;
}
