/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003984ac` (_code @ 0x3984ac, 0x358 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int buttonHelpCreate(void);
int FUN_00297060(unsigned int, unsigned int);
int FUN_0029f848(unsigned char *, int, int, int, int, int);
int uiSpriteSetImageKeyframe(...);
int timerStart(...);
int FUN_002bd954(...);
int FUN_002bee58(...);
int paramsInit(unsigned char *, unsigned char *, int, unsigned char *, int, int, int, int, int, unsigned char *, int);
int asdTMTexTableLoadSprites(int);
int FUN_002c58c8(int, int);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(void);

typedef int romwright_code(...);
/* stack frame of param_2: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern int FUN_00397470(...); /* 0x397470 */
extern int FUN_00397514(...); /* 0x397514 */
extern int FUN_00397580(...); /* 0x397580 */
extern int FUN_00397b40(...); /* 0x397b40 */
extern unsigned char LAB_00398808; /* 0x398808 */
extern unsigned char LAB_00398818; /* 0x398818 */
extern int FUN_00398830(...); /* 0x398830 */
extern int FUN_00398874(...); /* 0x398874 */
extern int FUN_00398920(...); /* 0x398920 */
extern int FUN_00398940(...); /* 0x398940 */
extern int FUN_00398964(...); /* 0x398964 */
extern int nameFormApply(...); /* 0x3989d4 */
extern unsigned char DAT_004055d0; /* 0x4055d0 */
extern unsigned char DAT_004055e8; /* 0x4055e8 */
extern unsigned char DAT_0040560c; /* 0x40560c */

extern unsigned int *gameDataGetSecondName(void);
extern unsigned int *gameDataGetPlayerName(void);
/* Supplied declaration required: buttonHelpCreate. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_0029f848. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
extern unsigned int *FUN_002bd1fc(void);
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: paramsInit. */
/* Supplied declaration required: asdTMTexTableLoadSprites. */
/* Supplied declaration required: FUN_002c58c8. */
extern unsigned int FUN_002c5c04(unsigned char *);
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_003984ac(unsigned char *param_1,unsigned char param_2)

{
/* irregular: 21 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned char *puVar3;
  
  *(romwright_code **)(param_1 + 0xd4) = FUN_00398940;
  *(unsigned int *)(param_1 + 0xd8) = 0;
  *(romwright_code **)(param_1 + 0xdc) = FUN_00398964;
  *(unsigned int *)(param_1 + 0xe0) = 0;
  *(romwright_code **)(param_1 + 0xe4) = FUN_00397580;
  *(unsigned int *)(param_1 + 0xe8) = 0;
  *(unsigned int *)(param_1 + 0xec) = 0x39893c;
  *(unsigned int *)(param_1 + 0xf0) = 0;
  *(romwright_code **)(param_1 + 0xf4) = FUN_00397b40;
  *(unsigned int *)(param_1 + 0xf8) = 0;
  *(romwright_code **)(param_1 + 0xfc) = FUN_00397470;
  *(unsigned int *)(param_1 + 0x100) = 0;
  *(romwright_code **)(param_1 + 0x104) = FUN_00397514;
  *(unsigned int *)(param_1 + 0x108) = 0;
  *(romwright_code **)(param_1 + 0x10c) = nameFormApply;
  *(unsigned int *)(param_1 + 0x110) = 0;
  *(romwright_code **)(param_1 + 0x114) = FUN_00398920;
  *(unsigned int *)(param_1 + 0x118) = 0;
  *(unsigned int *)(param_1 + 0x11c) = 0x398f4c;
  *(unsigned int *)(param_1 + 0x120) = 0;
  *(romwright_code **)(param_1 + 0x124) = FUN_00398874;
  *(unsigned int *)(param_1 + 0x128) = 0;
  *(romwright_code **)(param_1 + 300) = FUN_00398830;
  *(unsigned int *)(param_1 + 0x130) = 0;
  param_1[0x649] = param_2;
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
  param_1[0x944] = 0;
  if (param_1[0x649] == '\0' || param_1[0x649] == -1) {
    puVar1 = (unsigned int *)FUN_002bd1fc();
    *(unsigned int *)(param_1 + 0xb0) = *puVar1;
    *(unsigned int *)(param_1 + 0xb4) = puVar1[1];
    *(unsigned int *)(param_1 + 0xb8) = puVar1[2];
    *(unsigned int *)(param_1 + 0xbc) = puVar1[3];
    *(unsigned short *)(param_1 + 0xc0) = *(unsigned short *)(puVar1 + 4);
  }
  if (param_1[0x649] == '\x01') {
    puVar1 = (unsigned int *)gameDataGetPlayerName();
    *(unsigned int *)(param_1 + 0xb0) = *puVar1;
    *(unsigned int *)(param_1 + 0xb4) = puVar1[1];
    *(unsigned int *)(param_1 + 0xb8) = puVar1[2];
    *(unsigned int *)(param_1 + 0xbc) = puVar1[3];
    *(unsigned short *)(param_1 + 0xc0) = *(unsigned short *)(puVar1 + 4);
  }
  if (param_1[0x649] == '\x02') {
    puVar1 = (unsigned int *)gameDataGetSecondName();
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
  asdTMTexTableLoadSprites(0x2e);
  FUN_002c58c8(0x2e,0);
  FUN_0029f848(param_1 + 0x580,0x69,7,0xf,1,1);
  FUN_0029f848(param_1 + 0x5e4,3,1,3,1,1);
  temp_v0 = FUN_002c5c04(&LAB_00398808);
  *(unsigned int *)(param_1 + 0x64c) = temp_v0;
  temp_v0 = FUN_002c5c04(&LAB_00398818);
  *(unsigned int *)(param_1 + 0x650) = temp_v0;
  FUN_00297060(temp_v0,*(unsigned int *)(param_1 + 0x64c));
  *(unsigned int *)(param_1 + 0x654) = temp_v0;
  puVar3 = param_1 + 0x65c;
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object();
  paramsInit(puVar3,&DAT_004055d0,0x18,&DAT_004055e8,0x24,0,0,0,0,&DAT_0040560c,0x70);
  FUN_002bd954(param_1 + 0x67c,0x2e,0,puVar3,1);
  FUN_002bee58(param_1 + 0x67c,0);
  FUN_002bd954(param_1 + 0x708,0x2e,0,puVar3,1);
  timerStart(param_1 + 0x708,0);
  FUN_002bd954(param_1 + 0x794,0x2e,0,puVar3,1);
  uiSpriteSetImageKeyframe(param_1 + 0x794,0);
  buttonHelpCreate();
  *(unsigned short *)(param_1 + 0x940) = 0x95;
  return;
}

} /* extern "C" */
