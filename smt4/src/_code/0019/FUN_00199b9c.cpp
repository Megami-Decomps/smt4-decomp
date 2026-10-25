/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00199b9c` (_code @ 0x199b9c, 0x930 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "romwright_types.h"
#include "shard/FUN_001e0698.h"

extern "C" {

int partyCaptureEligibleSkills(...);
int buttonHelpCreate(void);
int buttonHelpAcquireResources(void);
void partyStatusRefreshSlot(void*, int, int);
int FUN_0028e9ec(...);
int FUN_002942c4(...);
int FUN_00295eb0(...);
int asdLoadFileAsyncSimple(...);
int FUN_0029f848(...);
int uiSpriteSetImageKeyframe(int, unsigned int, int);
int FUN_002b7bca(...);
int timerStart(...);
int FUN_002bd954(...);
int spriteStartAnimationByIndex(...);
int drawParameterBlockClear(int);

/* stack frame of param_2: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

extern int FUN_0021960c(...); /* 0x21960c */
extern unsigned char DAT_00400b98; /* 0x400b98 */
extern unsigned char DAT_00400c40; /* 0x400c40 */
extern unsigned char DAT_00400d24; /* 0x400d24 */
extern unsigned char DAT_00400d84; /* 0x400d84 */

/* Supplied declaration required: partyCaptureEligibleSkills. */
/* Supplied declaration required: FUN_001e0698. */
/* Supplied declaration required: buttonHelpCreate. */
/* Supplied declaration required: buttonHelpAcquireResources. */
/* Supplied declaration required: partyStatusRefreshSlot. */
extern int btlActorIsDown(unsigned int);
extern int FUN_0028e9a0(unsigned int);
extern int flagValueIsPositive(unsigned int);
/* Supplied declaration required: FUN_0028e9ec. */
extern int flagBitIsSet(int);
/* Supplied declaration required: FUN_002942c4. */
/* Supplied declaration required: FUN_00295eb0. */
/* Supplied declaration required: asdLoadFileAsyncSimple. */
/* Supplied declaration required: FUN_0029f848. */
extern int gameGetUnitRecord(int);
extern int gameGetSlotTable(void);
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
extern int supportUnitGetEntry(int, unsigned short);
extern int FUN_002b6ad0(void);
extern int gameGetSupportUnitData(void);
/* Supplied declaration required: FUN_002b7bca. */
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: spriteStartAnimationByIndex. */
/* Supplied declaration required: paramsInit. */
/* Supplied declaration required: drawParameterBlockClear. */


void FUN_00199b9c(int param_1,unsigned int param_2)

{
/* irregular: 18 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned long long temp_v7;
  
  *(unsigned int *)(param_1 + 0x3048) = 0;
  *(unsigned int *)(param_1 + 0x304c) = 0;
  *(unsigned int *)(param_1 + 0x3040) = param_2;
  *(unsigned int *)(param_1 + 0x3044) = 0;
  *(unsigned int *)(param_1 + 0x3058) = 0;
  *(unsigned int *)(param_1 + 0x305c) = 0xffffffff;
  *(unsigned char *)(param_1 + 0x307c) = 0;
  *(unsigned char *)(param_1 + 0x3060) = 0x20;
  temp_v6 = 0;
  *(unsigned int *)(param_1 + 0x3884) = 0;
  *(unsigned int *)(param_1 + 0x3888) = 0;
  *(unsigned int *)(param_1 + 0x388c) = 0;
  *(unsigned int *)(param_1 + 0x3890) = 0;
  *(unsigned int *)(param_1 + 0x3894) = 0;
  *(unsigned int *)(param_1 + 0x3898) = 0;
  FUN_001e0698();
  drawParameterBlockClear(param_1);
  paramsInit(reinterpret_cast<UiResourceParameters *>(param_1),&DAT_00400b98,0xa8,&DAT_00400c40,0xe4,&DAT_00400d24,0x60,0,0,&DAT_00400d84,
               0x4d0);
  temp_v7 = (unsigned long long)temp_v6;
  temp_v1 = param_1 + 0x9f8;
  temp_v5 = 0;
  do {
    temp_v4 = param_1 + temp_v5 * 0x8c;
    FUN_002bd954(temp_v4 + 0x73c,0x15,0,param_1,6);
    spriteStartAnimationByIndex(temp_v4 + 0x73c,0);
    temp_v2 = temp_v4 + 0x9f8;
    FUN_002bd954(temp_v2,0x15,0,param_1,6);
    if (temp_v5 == 0) {
      temp_v3 = 9;
      temp_v2 = temp_v1;
    }
    else {
      temp_v3 = 8;
    }
    uiSpriteSetImageKeyframe(temp_v2,temp_v3,0);
    temp_v2 = temp_v4 + 0xc28;
    FUN_002bd954(temp_v2,0x15,0x1b,param_1,0x1f);
    FUN_00295eb0(temp_v2,0x15,0x45);
    spriteStartAnimationByIndex(temp_v2,6);
    FUN_002bd954(temp_v4 + 0x13d0,0x15,0x1c8,param_1,0x1a);
    spriteStartAnimationByIndex(temp_v4 + 0x13d0,0xb);
    FUN_002bd954(temp_v4 + 0x1600,0x15,0xbba,param_1,0x1a);
    FUN_00295eb0(temp_v4 + 0x1600,0x15,0x1ca);
    spriteStartAnimationByIndex(temp_v4 + 0x1600,0xd);
    temp_v4 = temp_v4 + 0x1830;
    FUN_002bd954(temp_v4,0x15,0xbbe,param_1,0x25);
    FUN_00295eb0(temp_v4,0x15,0x1ca);
    spriteStartAnimationByIndex(temp_v4,0xe);
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 4);
  FUN_002bd954(param_1 + 0x96c,0x15,0x5e,param_1,6);
  temp_v1 = btlActorIsDown(*(unsigned int *)(param_1 + 0x3040));
  if ((temp_v1 != 0) && (temp_v1 = FUN_002b6ad0(), temp_v1 != 0)) {
    timerStart(param_1 + 0x96c,0xd,0);
  }
  FUN_002bd954(param_1 + 0x20,0x15,0xdb,param_1,6);
  spriteStartAnimationByIndex(param_1 + 0x20,0);
  temp_v1 = 0;
  do {
    temp_v5 = param_1 + temp_v1 * 0x8c;
    FUN_002bd954(temp_v5 + 0x138,0x15,0xdd,param_1,6);
    spriteStartAnimationByIndex(temp_v5 + 0x138,0);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 8);
  FUN_002bd954(param_1 + 0xac,0x15,0xde,param_1,6);
  spriteStartAnimationByIndex(param_1 + 0xac,1);
  FUN_002bd954(param_1 + 0x598,0x15,0x4a,param_1,6);
  spriteStartAnimationByIndex(param_1 + 0x598,2);
  FUN_002bd954(param_1 + 0x624,0x15,0x96,param_1,6);
  spriteStartAnimationByIndex(param_1 + 0x624,3);
  FUN_002bd954(param_1 + 0x6b0,0x15,0x9c,param_1,6);
  timerStart(param_1 + 0x6b0,6,0);
  temp_v1 = 0;
  do {
    FUN_002bd954(param_1 + temp_v1 * 0x8c + 0xe58,0x15,0x72,param_1,6);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 6);
  temp_v1 = 0;
  do {
    temp_v5 = param_1 + temp_v1 * 0x8c + 0x1a60;
    FUN_002bd954(temp_v5,0xd,2000,param_1,0xf1);
    spriteStartAnimationByIndex(temp_v5,4);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x19);
  temp_v1 = 0;
  do {
    temp_v5 = param_1 + temp_v1 * 0x8c;
    temp_v2 = temp_v5 + 0x280c;
    FUN_002bd954(temp_v2,0x15,1000,param_1,0xf1);
    spriteStartAnimationByIndex(temp_v2,5);
    temp_v5 = temp_v5 + 0x2ac8;
    FUN_002bd954(temp_v5,0x15,0x3ea,param_1,0xf1);
    spriteStartAnimationByIndex(temp_v5,5);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 5);
  temp_v1 = 0;
  do {
    temp_v5 = param_1 + temp_v1 * 0x8c + 0x2d84;
    FUN_002bd954(temp_v5,0x15,0x3ee,param_1,0xf1);
    spriteStartAnimationByIndex(temp_v5,7);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 5);
  FUN_002bd954(param_1 + 0x11a0,0x15,0x110,param_1,6);
  spriteStartAnimationByIndex(param_1 + 0x11a0,0);
  FUN_002bd954(param_1 + 0x1344,0x15,0,param_1,6);
  spriteStartAnimationByIndex(param_1 + 0x1344,9);
  FUN_0028e9ec(param_1);
  FUN_002bd954(param_1 + 0x122c,0x15,0x124,param_1,6);
  spriteStartAnimationByIndex(param_1 + 0x122c,8);
  FUN_002bd954(param_1 + 0x12b8,0x15,0,param_1,6);
  FUN_002942c4(0xffffffff,1);
  temp_v1 = 0;
  do {
    temp_v5 = gameGetSlotTable();
    if (*(char *)(temp_v5 + temp_v1 + 0x9108) >= '\0') {
      temp_v5 = gameGetSlotTable();
      temp_v5 = gameGetUnitRecord((int)*(char *)(temp_v5 + temp_v1 + 0x9108));
      FUN_002942c4((int)*(short *)(temp_v5 + 0x46),1);
      *(unsigned int *)(param_1 + temp_v1 * 4 + 0x3410) = (unsigned int)*(unsigned short *)(temp_v5 + 0x46);
      temp_v5 = gameGetSlotTable();
      *(short *)(param_1 + temp_v1 * 2 + 0x38f6) = (short)*(char *)(temp_v5 + temp_v1 + 0x9108);
      *(unsigned char *)(param_1 + temp_v1 + 0x38d2) = 0;
    }
    else {
      *(unsigned int *)(param_1 + temp_v1 * 4 + 0x3410) = 0;
      *(unsigned short *)(param_1 + temp_v1 * 2 + 0x38f6) = 0xffff;
      *(unsigned char *)(param_1 + temp_v1 + 0x38d2) = 1;
    }
    temp_v3 = (unsigned int)temp_v7;
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  temp_v1 = FUN_002b6ad0();
  if (temp_v1 != 0) {
    temp_v1 = gameGetSupportUnitData();
    temp_v0 = *(unsigned short *)(temp_v1 + 0x606);
    temp_v1 = gameGetSupportUnitData();
    temp_v1 = supportUnitGetEntry((int)*(short *)(temp_v1 + 0x604),temp_v0);
    FUN_002942c4((int)(short)(*(short *)(temp_v1 + 0x5a) + 1),0);
  }
  partyStatusRefreshSlot(reinterpret_cast<void*>(param_1),0,1);
  partyStatusRefreshSlot(reinterpret_cast<void*>(param_1),1,1);
  partyStatusRefreshSlot(reinterpret_cast<void*>(param_1),2,1);
  partyStatusRefreshSlot(reinterpret_cast<void*>(param_1),3,1);
  partyStatusRefreshSlot(reinterpret_cast<void*>(param_1),4,1);
  partyCaptureEligibleSkills(param_1);
  temp_v1 = 0;
  do {
    temp_v5 = param_1 + temp_v1 * 2;
    *(unsigned short *)(temp_v5 + 0x5950) = 0;
    *(unsigned short *)(temp_v5 + 0x595a) = 0;
    *(unsigned int *)(param_1 + temp_v1 * 4 + 0x5964) = temp_v3;
    *(unsigned char *)(param_1 + temp_v1 + 0x5978) = 0;
    *(unsigned short *)(temp_v5 + 0x597e) = 0;
    *(unsigned short *)(temp_v5 + 0x5988) = 0;
    *(unsigned short *)(temp_v5 + 0x5992) = 0;
    *(unsigned short *)(temp_v5 + 0x599c) = 0;
    temp_v1 = temp_v1 + 1;
    *(unsigned short *)(temp_v5 + 0x59a6) = 0;
    *(unsigned short *)(temp_v5 + 0x59b0) = 0;
  } while (temp_v1 < 5);
  *(int *)(param_1 + 0x340c) = param_1 + 0x3218;
  FUN_0029f848(param_1 + 0x3218,399,6,1,0,1);
  FUN_0029f848(param_1 + 0x327c,100,6,1,0,1);
  temp_v1 = 0;
  temp_v6 = 1;
  do {
    temp_v5 = flagValueIsPositive(temp_v6);
    if ((temp_v5 != 0) && (temp_v5 = FUN_0028e9a0(temp_v6), temp_v5 != 0)) {
      temp_v5 = temp_v1 * 2;
      temp_v1 = temp_v1 + 1;
      *(short *)(param_1 + temp_v5 + 0x3480) = (short)temp_v6;
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 0x3d);
  FUN_0029f848(param_1 + 0x32e0,temp_v1,6,1,0,1);
  FUN_002b7bca(param_1 + 0x3480,temp_v1,2,FUN_0021960c);
  FUN_0029f848(param_1 + 0x33a8,4,1,4,1,1);
  temp_v5 = 0;
  temp_v1 = 0;
  do {
    temp_v2 = flagBitIsSet(temp_v1 + 0x2e);
    if (temp_v2 != 0) {
      temp_v5 = temp_v5 + 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 6);
  FUN_0029f848(param_1 + 0x3344,temp_v5,6,1,0,1);
  buttonHelpAcquireResources();
  buttonHelpCreate();
  asdLoadFileAsyncSimple(0x19a4e0,param_1 + 0x59bc,0);
  return;
}

} /* extern "C" */
