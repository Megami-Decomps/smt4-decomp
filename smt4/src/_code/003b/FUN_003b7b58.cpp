/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b7b58` (_code @ 0x3b7b58, 0x600 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028c040(void);
int buttonHelpCreate(void);
int FUN_00292ca0(...);
int FUN_002942c4(...);
int FUN_00297468(...);
int FUN_0029a128(...);
int FUN_0029e874(...);
int asdTMTexTableLoadEntryAsync(int, int);
int timerStart(...);
int FUN_002bd954(...);
int FUN_002bee58(...);
int FUN_002c312c(...);
int memClear(int, int);
int FUN_002eb76c(...);
int FUN_0033c5bc(int);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned char DAT_004058d4; /* 0x4058d4 */
extern unsigned char DAT_0040591c; /* 0x40591c */
extern unsigned char DAT_004059c4; /* 0x4059c4 */
extern unsigned char DAT_00405a30; /* 0x405a30 */
extern unsigned char DAT_00405a4c; /* 0x405a4c */

/* Supplied declaration required: FUN_0028c040. */
/* Supplied declaration required: buttonHelpCreate. */
/* Supplied declaration required: FUN_00292ca0. */
/* Supplied declaration required: FUN_002942c4. */
/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: FUN_0029a128. */
/* Supplied declaration required: FUN_0029e874. */
/* Supplied declaration required: asdTMTexTableLoadEntryAsync. */
extern int gameGetUnitRecord(void);
extern int gameGetSlotTable(void);
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: FUN_002c312c. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: FUN_002eb76c. */
/* Supplied declaration required: FUN_0033c5bc. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_003b7b58(int param_1)

{
/* irregular: 16 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = 0;
  do {
    asdTMTexTableLoadEntryAsync(0x28,temp_v1);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  temp_v1 = gameGetSlotTable();
  FUN_002942c4(0xffffffff,1);
  temp_v2 = 0;
  do {
    if (-1 < *(char *)(temp_v1 + temp_v2 + 0x9108)) {
      temp_v0 = gameGetUnitRecord();
      FUN_002942c4((int)*(short *)(temp_v0 + 0x46),1);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 3);
  FUN_0033c5bc(0x14);
  FUN_0033c5bc(0x25);
  *(unsigned int *)(param_1 + 0x3564) = 0;
  *(unsigned int *)(param_1 + 0x356c) = 0;
  *(unsigned int *)(param_1 + 0x3570) = 0;
  *(unsigned int *)(param_1 + 0x3568) = 0;
  FUN_00297468("battle/Result.bf",(unsigned int *)(param_1 + 0x3564),0);
  FUN_00297468("battle/ResultMsg.mbm",(unsigned int *)(param_1 + 0x356c),0);
  FUN_00297468("battle/DevilLvUp.bf",(unsigned int *)(param_1 + 0x3570),0);
  memClear(param_1 + 0x35b4,100);
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
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(param_1);
  FUN_002c312c(param_1,&DAT_004058d4,0x48,&DAT_0040591c,0xa8,&DAT_004059c4,0x6c,&DAT_00405a30,0x1c,
               &DAT_00405a4c,0x32c);
  FUN_002bd954(param_1 + 0x20,0x28,0,param_1,1);
  timerStart(param_1 + 0x20,0);
  temp_v1 = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 0x8c;
    FUN_002bd954(temp_v2 + 0xac,0x28,0,param_1,1);
    timerStart(temp_v2 + 0xac,4,0);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 6);
  FUN_002bd954(param_1 + 0x3f4,0x28,0,param_1,1);
  FUN_002bee58(param_1 + 0x3f4,4);
  FUN_002bd954(param_1 + 0x480,0x28,0,param_1,1);
  timerStart(param_1 + 0x480,2,0);
  FUN_002bd954(param_1 + 0x50c,0x28,0,param_1,1);
  timerStart(param_1 + 0x50c,0);
  FUN_002bd954(param_1 + 0x598,0x28,0,param_1,1);
  timerStart(param_1 + 0x598,0);
  FUN_002bd954(param_1 + 0x624,0x28,1000,param_1,0x65);
  FUN_002eb76c(param_1 + 0x624,0);
  FUN_002bd954(param_1 + 0x6b0,0x28,1000,param_1,0x65);
  FUN_002bd954(param_1 + 0x73c,0x28,1000,param_1,0x65);
  FUN_002bee58(param_1 + 0x73c,5);
  temp_v1 = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 0x8c + 0x7c8;
    FUN_002bd954(temp_v2,0x28,0,param_1,1);
    FUN_002bee58(temp_v2,0);
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
    FUN_002bd954(temp_v2 + 0x1fd8,0x28,0x1a,param_1,0xc9);
    *(unsigned short *)(temp_v2 + 0x2012) = 2;
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x19);
  temp_v1 = 0;
  do {
    temp_v2 = 0;
    do {
      temp_v0 = param_1 + (temp_v1 * 7 + temp_v2 + 0x1e) * 0x8c;
      FUN_002bd954(temp_v0 + 0x20,0xd,0x80c,param_1,0x97);
      FUN_002bee58(temp_v0 + 0x20,1);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 7);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  temp_v1 = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 0x8c;
    FUN_002bd954(temp_v2 + 0x2d84,0x28,0x3e,param_1,0x6a);
    FUN_002bee58(temp_v2 + 0x2d84,8);
    FUN_002bd954(temp_v2 + 0x3158,0x28,0x119,param_1,0xf1);
    FUN_002bee58(temp_v2 + 0x3158,9);
    *(unsigned short *)(temp_v2 + 0x3192) = 2;
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 6);
  *(unsigned int *)(param_1 + 0x3548) = 0;
  *(unsigned int *)(param_1 + 0x354c) = 0;
  *(unsigned int *)(param_1 + 0x3550) = 0;
  *(unsigned int *)(param_1 + 0x3554) = 0;
  *(unsigned int *)(param_1 + 0x3558) = 0;
  *(unsigned int *)(param_1 + 0x355c) = 0;
  FUN_0028c040();
  FUN_0029a128(0);
  FUN_00292ca0(0);
  FUN_0029e874(0);
  buttonHelpCreate();
  return;
}

} /* extern "C" */
