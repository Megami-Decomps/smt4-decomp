/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004dd800` (_code @ 0x4dd800, 0x504 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match3_BattleTiming.h"
#include "shard/lcgRandomRange.h"

extern "C" {

int FUN_004a9308(...);

int dataTable04FindById(void);
int FUN_003e8bb0(...);
int FUN_004c9160(...);
int btlActionMarkRandomStatusTarget(...);
int FUN_004e5b5c(...);
int FUN_004e6880(...);
int FUN_004e7c04(...);
int FUN_004e8454(...);
int FUN_004e8b54(int *, unsigned int *);
int btlActionClassifyTargetSide(...);
int btlUnitMarkTargetCandidates(...);
int FUN_004eb838(...);
int FUN_004fd508(unsigned int, unsigned int *, int, unsigned int, int);

/* stack frame of param_2: 6 slot(s), 21 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned char sp44; /* 0x44: local_44 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_2_stack;

extern int g_btlScriptUnit; /* 0x57113c */
extern unsigned int DAT_00571168; /* 0x571168 */
extern unsigned int DAT_0057116c; /* 0x57116c */
extern unsigned int DAT_00571170; /* 0x571170 */
extern unsigned int DAT_00571174; /* 0x571174 */
extern unsigned int g_btlUiBlock; /* 0x57a9c8 */

extern int randRange(unsigned int);
/* Supplied declaration required: dataTable04FindById. */
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_004a9308. */
/* Supplied declaration required: FUN_004c9160. */
/* Supplied declaration required: btlActionMarkRandomStatusTarget. */
/* Supplied declaration required: FUN_004e5b5c. */
/* Supplied declaration required: FUN_004e6880. */
/* Supplied declaration required: FUN_004e7c04. */
/* Supplied declaration required: FUN_004e8454. */
/* Supplied declaration required: FUN_004e8b54. */
/* Supplied declaration required: btlActionClassifyTargetSide. */
/* Supplied declaration required: btlUnitMarkTargetCandidates. */
/* Supplied declaration required: FUN_004eb838. */
/* Supplied declaration required: FUN_004fd508. */


void FUN_004dd800(int *param_1,unsigned int *param_2)

{
/* irregular: 2 goto(s); 15 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8 [20];
  char temp_v9;
  
  temp_v1 = lcgRandomRange(99);
  if (temp_v1 < 10) {
    if ((*param_2 & 0x1080) == 0) {
      temp_v5 = 0x32;
    }
    else {
      temp_v5 = 0;
    }
    FUN_004c9160(0x29,param_2[8],0,1);
    FUN_004fd508(temp_v5,param_2,0,param_2[9],1);
    btlCommandExtendAnimationWindow((BtlActorRef*)param_1,(BtlCommand*)param_2,(int)*(short *)(param_2[9] + 0x6a),0,0x1e,0x1e);
    temp_v1 = g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254;
LAB_004ddb40:
    *(unsigned char *)(temp_v1 + 9) = 0x1d;
  }
  else {
    if (temp_v1 < 0x46) {
      piVar3 = param_1;
      FUN_004e8b54(param_1,param_2);
      if (piVar3 == (int *)0x0) {
        temp_v1 = randRange(99);
        if (temp_v1 < 0x19) {
          if ((*param_2 & 0x1080) == 0) {
            temp_v5 = 0x32;
          }
          else {
            temp_v5 = 0;
          }
          FUN_004c9160(0x29,param_2[8],0,1);
          FUN_004fd508(temp_v5,param_2,0,param_2[9],1);
      btlCommandExtendAnimationWindow((BtlActorRef*)param_1,(BtlCommand*)param_2,(int)*(short *)(param_2[9] + 0x6a),0,0x1e,0x1e);
          temp_v1 = g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254;
          goto LAB_004ddb40;
        }
        goto LAB_004ddb48;
      }
      FUN_004e8454(param_1);
      temp_v6 = 0;
      temp_v7 = 0;
      btlActionClassifyTargetSide(param_1,param_2[8],piVar3,&temp_v6,&temp_v7);
      if (temp_v6 == 1) {
        temp_v6 = 0;
      }
      else if (temp_v6 == 0) {
        temp_v6 = 1;
      }
      FUN_004e7c04(param_1,temp_v6);
      temp_v2 = param_2[10];
      *(unsigned short *)(temp_v2 + 0x1be) = 2;
      *(short *)(temp_v2 + 0x1c0) = (short)(int)piVar3;
      FUN_003e8bb0(temp_v8,*param_1,param_2[8]);
      if (temp_v7 != 0) {
        if (temp_v7 == 1 || temp_v7 == 2) {
          btlUnitMarkTargetCandidates(param_1,temp_v6);
        }
      }
      else {
        dataTable04FindById();
        if ((piVar3[0xf] & 0x7fU) != 0) {
          temp_v2 = piVar3[0xf] & 0x7f;
          if (temp_v2 != 4) {
            if (temp_v2 != 0x16) {
              if (temp_v2 != 0x1c) {
                if (temp_v2 != 0x1f) {
                  FUN_004e5b5c(param_1);
                }
                else {
                  FUN_004e6880(param_1,0x1f);
                }
              }
              else {
                FUN_004e6880(param_1,0x1c);
              }
            }
            else {
              FUN_004e6880(param_1,0x16);
            }
          }
          else {
            btlActionMarkRandomStatusTarget(param_1,4);
          }
        }
        else {
          FUN_004e5b5c(param_1);
        }
      }
      temp_v1 = 0;
      temp_v3 = 0x6d;
      do {
        temp_v3 = temp_v3 - 1;
        temp_v4 = temp_v1 * 0x1d0 + 0x50;
        temp_v1 = temp_v1 + 1;
        temp_v2 = *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v4);
        *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v4) = temp_v2 & 0xfffffffb;
        *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v4) = temp_v2 & 0xfffffff3;
      } while (temp_v3 != 0);
    btlCommandExtendAnimationWindow((BtlActorRef*)param_1,(BtlCommand*)param_2,(int)*(short *)(param_2[9] + 0x6a),0,0x1e,0x1e);
      FUN_004eb838(param_1,param_2);
      *(unsigned char *)((int)param_2 + 0x59d) = 1;
      temp_v2 = param_2[8];
      temp_v5 = 0x28;
    }
    else {
LAB_004ddb48:
      FUN_004e8454(param_1);
      temp_v0 = (*(unsigned int *)param_2[8] & DAT_00571168) != 0 ||
              (DAT_0057116c & ((unsigned int *)param_2[8])[1]) != 0;
      FUN_004e7c04(param_1,temp_v0);
      temp_v2 = param_2[10];
      *(unsigned short *)(temp_v2 + 0x1be) = 1;
      FUN_003e8bb0(&temp_v6,*param_1,param_2[8]);
      if ((*(unsigned short *)((unsigned char *)&temp_v6 + 2)) == 1) {
        *(unsigned short *)(temp_v2 + 0x1c0) = 2;
      }
      else {
        *(unsigned short *)(temp_v2 + 0x1c0) = 1;
      }
      if (temp_v9 != '\0') {
        if (temp_v9 != '\x01') {
          if (temp_v9 == '\x02') {
            btlUnitMarkTargetCandidates(param_1,temp_v0,2);
          }
        }
        else {
          btlUnitMarkTargetCandidates(param_1,temp_v0,1);
        }
      }
      else {
        FUN_004e5b5c(param_1);
      }
      temp_v1 = 0;
      temp_v3 = 0x6d;
      do {
        temp_v3 = temp_v3 - 1;
        temp_v4 = temp_v1 * 0x1d0 + 0x50;
        temp_v1 = temp_v1 + 1;
        temp_v2 = *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v4);
        *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v4) = temp_v2 & 0xfffffffb;
        *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v4) = temp_v2 & 0xfffffff3;
      } while (temp_v3 != 0);
    btlCommandExtendAnimationWindow((BtlActorRef*)param_1,(BtlCommand*)param_2,(int)*(short *)(param_2[9] + 0x6a),0,0x1e,0x1e);
      FUN_004eb838(param_1,param_2);
      *(unsigned char *)((int)param_2 + 0x59d) = 1;
      temp_v2 = param_2[8];
      temp_v5 = 0x27;
    }
    FUN_004c9160(temp_v5,temp_v2,0,1);
  }
  if (((DAT_0057116c | DAT_00571174) & ((unsigned int *)param_2[8])[1]) != 0 ||
      ((DAT_00571168 | DAT_00571170) & *(unsigned int *)param_2[8]) != 0) {
    return;
  }
  FUN_004a9308(g_btlUiBlock,(short)param_2[0xb],0);
  return;
}

} /* extern "C" */
