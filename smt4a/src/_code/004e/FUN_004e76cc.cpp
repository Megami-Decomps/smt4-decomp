/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e76cc` (_code @ 0x4e76cc, 0x4a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match3_BattleTiming.h"

extern "C" {

int battleRecordUnitMaskHistoryEvents(...);
int btlSelectActionTier(void);
int FUN_004e5f2c(...);
int battleApplyInteractionSelection(...);
int FUN_004fb43c(...);
int FUN_004fb798(...);
int btlReflectCreateKind19(...);
int FUN_004fbeac(...);
int FUN_004fc094(...);

/* stack frame of param_3: 21 slot(s), 84 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
} param_3_stack;

extern unsigned int DAT_00571168; /* 0x571168 */
extern unsigned int DAT_0057116c; /* 0x57116c */

extern int gameFlagIsSet(unsigned int);
extern int btlScriptUnitHasFlags(int);
/* Supplied declaration required: battleRecordUnitMaskHistoryEvents. */
/* Supplied declaration required: btlSelectActionTier. */
/* Supplied declaration required: FUN_004e5f2c. */
/* Supplied declaration required: battleApplyInteractionSelection. */
extern int FUN_004e83ac(int *, unsigned int *, int);
/* Supplied declaration required: FUN_004fb43c. */
/* Supplied declaration required: FUN_004fb798. */
/* Supplied declaration required: btlReflectCreateKind19. */
/* Supplied declaration required: FUN_004fbeac. */
/* Supplied declaration required: FUN_004fc094. */


unsigned char FUN_004e76cc(int *param_1,unsigned int *param_2,int param_3)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  
  temp_v2 = 0xffffffff;
  temp_v3 = 0xffffffff;
  temp_v4 = 0xffffffff;
  temp_v5 = 0xffffffff;
  if ((*(unsigned int *)param_2[8] & DAT_00571168) == 0 && (((unsigned int *)param_2[8])[1] & DAT_0057116c) == 0) {
    temp_v3 = 0;
    temp_v4 = 0xb;
  }
  temp_v0 = btlScriptUnitHasFlags(*param_1);
  if (temp_v0 == 0) {
    temp_v5 = 0;
  }
  temp_v0 = gameFlagIsSet(0x591);
  if (((temp_v0 != 0) &&
      ((*(unsigned int *)param_2[8] & DAT_00571168) == 0 && (((unsigned int *)param_2[8])[1] & DAT_0057116c) == 0))
     && (0 < param_3)) {
    FUN_004fc094(10,param_2,0,param_2[9],0,param_3,0xffffffff,0xffffffff,
                 param_2[*(short *)(param_2[9] + 0x6a) * 4 + 0x279],
                 *(unsigned int *)(param_2[10] + 0xf8),0,0,0,0,1,0,0x1e,0,temp_v3,temp_v5,temp_v4,0xffffffff
                 ,1,0,1,1);
    FUN_004fb43c(10,param_2,0x1000223,0,0,0,0);
    temp_v0 = gameFlagIsSet(0x591);
    if ((temp_v0 != 0) && ((*param_2 & 0x20000) != 0)) {
      FUN_004fbeac(0x1e,param_2,0,0x45,1);
      *param_2 = *param_2 | 0x20000;
    }
    return 0;
  }
  *(unsigned int *)(param_2[8] + 0x158) = 0;
  temp_v1 = (int)*(short *)(param_2[9] + 0x6a);
  btlSelectActionTier();
  temp_v0 = temp_v1;
  if (0 < temp_v1) {
    temp_v0 = param_3;
  }
  if ((temp_v0 >= 1) && (param_3 >= (int)param_2[*(short *)(param_2[9] + 0x6a) * 4 + 0x279])) {
    if (temp_v1 != 2) {
      if (temp_v1 == 1 || temp_v1 == 3) {
        temp_v2 = 1;
      }
    }
    else if ((*(unsigned short *)(param_2[8] + 0x274) & 8) == 0) {
      temp_v2 = param_2[*(short *)(param_2[9] + 0x6a) * 4 + 0x27a];
    }
    else {
      temp_v2 = 1;
    }
    btlReflectCreateKind19(0x1e,param_2,(int)*(short *)(param_2[8] + 0x6e));
    battleRecordUnitMaskHistoryEvents((int)*(short *)(param_2[9] + 0x6a));
  }
  FUN_004e5f2c(param_1,param_2,(int)*(short *)(param_2[9] + 0x6a),-param_3);
  temp_v0 = FUN_004e83ac(param_1,param_2,(int)*(short *)(param_2[9] + 0x6a));
  temp_v6 = temp_v0 != 0;
  if ((int)temp_v2 >= 1) {
    temp_v6 = 0;
  }
  else if (((temp_v6) &&
           ((DAT_00571168 & *(unsigned int *)param_2[8]) != 0 ||
            (((unsigned int *)param_2[8])[1] & DAT_0057116c) != 0)) && (*(int *)(*param_1 + 0xe4) == 1)) {
    *(unsigned int *)(*param_1 + 0xa8) = 0xd;
  }
  FUN_004fc094(10,param_2,0,param_2[9],0,param_3,0xffffffff,0xffffffff,
               param_2[*(short *)(param_2[9] + 0x6a) * 4 + 0x279],
               *(unsigned int *)(param_2[10] + 0xf8),0,0,temp_v6,0,1,0,0x1e,0,temp_v3,temp_v5,temp_v4,
               0xffffffff,1,0,1,1);
  FUN_004fb43c(10,param_2,0x1000223,0,0,0,0);
  if (-1 < (int)temp_v2) {
    FUN_004fb798(0x1e,param_2,0,param_2[9],0,temp_v2,0xffffffff,0xffffffff,0,temp_v3,temp_v5,temp_v4,0,1,1);
    FUN_004fb43c(0x1e,param_2,0x1000267,0,1,0,0);
  }
  if (temp_v6 != 0) {
    temp_v2 = param_2[9];
    if ((*(unsigned int *)(temp_v2 + 0x50) & 0x400) != 0) {
      btlCommandExtendAnimationWindow((BtlActorRef*)param_1,(BtlCommand*)param_2,(int)*(short *)(temp_v2 + 0x6a),10,0x3c,0x3c);
      battleApplyInteractionSelection(param_1,param_2,(int)*(short *)(param_2[9] + 0x6a),0x46,0);
    }
    else {
        btlCommandExtendAnimationWindow((BtlActorRef*)param_1,(BtlCommand*)param_2,(int)*(short *)(temp_v2 + 0x6a),10,0x1e,0x1e);
      battleApplyInteractionSelection(param_1,param_2,(int)*(short *)(param_2[9] + 0x6a),0x28,0);
    }
  }
  else {
    btlCommandExtendAnimationWindow((BtlActorRef*)param_1,(BtlCommand*)param_2,(int)*(short *)(param_2[9] + 0x6a),10,0x1e,0x1e);
  }
  return temp_v6;
}

} /* extern "C" */
