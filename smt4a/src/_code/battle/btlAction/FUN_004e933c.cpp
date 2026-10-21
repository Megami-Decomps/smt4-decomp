/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e933c` (_code @ 0x4e933c, 0x4d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match3_BattleTiming.h"

extern "C" {

int asdMemoryAllocTracked(int, int, int, int, int);
int FUN_00192608(void);
int asdMemFree(void);
int wordPairCopy(...);
int dataTable04FindById(void);
int sysMemClear(int [109], int);
int FUN_003e8bb0(...);
int FUN_004c8340(...);
int FUN_004c9160(...);
int FUN_004e7c04(...);
int btlUnitMarkTargetCandidates(...);
int FUN_004eb838(...);

/* stack frame of param_2: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp224; /* 0x224: local_224 */
    unsigned int sp228; /* 0x228: local_228 */
} param_2_stack;

extern unsigned int DAT_00571148; /* 0x571148 */
extern unsigned int DAT_0057114c; /* 0x57114c */
extern unsigned int DAT_00571150; /* 0x571150 */
extern unsigned int DAT_00571154; /* 0x571154 */
extern unsigned int DAT_00571168; /* 0x571168 */
extern unsigned int DAT_0057116c; /* 0x57116c */
extern unsigned int DAT_00571178; /* 0x571178 */
extern unsigned int DAT_0057117c; /* 0x57117c */

extern int randRange(unsigned int);
/* Supplied declaration required: asdMemoryAllocTracked. */
extern int gameGetPlayerData(void);
/* Supplied declaration required: FUN_00192608. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: wordPairCopy. */
/* Supplied declaration required: dataTable04FindById. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_003e8bb0. */
extern int isOutsideRange4To53(int);
/* Supplied declaration required: FUN_004c8340. */
/* Supplied declaration required: FUN_004c9160. */
/* Supplied declaration required: FUN_004e7c04. */
/* Supplied declaration required: btlUnitMarkTargetCandidates. */
/* Supplied declaration required: FUN_004eb838. */


unsigned int FUN_004e933c(int *param_1,int param_2)

{
/* irregular: 1 goto(s); 13 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  unsigned int temp_v5;
  int temp_v6;
  int aiStack_220 [109];
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10 [5];
  unsigned char temp_v11;
  unsigned int temp_v12;
  
  temp_v4 = *(int *)(param_2 + 0x20);
  temp_v8 = 0;
  sysMemClear(aiStack_220,0x1b4);
  temp_v6 = 0;
  temp_v1 = 0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0x368,1);
  temp_v7 = temp_v1;
  temp_v1 = isOutsideRange4To53((int)*(short *)(*(int *)(param_2 + 0x20) + 0x6e));
  if (temp_v1 != 0) {
    temp_v5 = 4;
    temp_v1 = 0x32;
  }
  else {
    temp_v5 = 0;
    temp_v1 = 4;
  }
  temp_v12 = temp_v1 + temp_v5;
  if (temp_v5 < temp_v12) {
    temp_v9 = temp_v4 + 0x322;
    do {
      puVar6 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v5 * 0x408);
      if (((DAT_00571148 & *puVar6) != 0 || (DAT_0057114c & puVar6[1]) != 0) &&
         ((*puVar6 & DAT_00571178) == 0 && (puVar6[1] & DAT_0057117c) == 0)) {
        temp_v1 = 0;
        *(unsigned short *)(temp_v4 + 0x322) = 2;
        do {
          temp_v2 = temp_v4 + 0x164 + temp_v1 * 2;
          temp_v3 = (unsigned int)*(unsigned short *)(temp_v2 + 0x118);
          dataTable04FindById();
          if (temp_v3 != 0) {
            *(unsigned short *)(temp_v4 + 0x324) = *(unsigned short *)(temp_v2 + 0x118);
            FUN_003e8bb0(temp_v10,*param_1,*(unsigned int *)(param_2 + 0x20));
            temp_v3 = (unsigned int)*(short *)(*(int *)(param_2 + 0x20) + 0x6e);
            FUN_004c8340(temp_v3,(int)*(short *)((int)puVar6 + 0x6e),temp_v10[0] >> 0x10,
                         (int)(short)temp_v10[1],0xffffffff);
            temp_v2 = temp_v9;
            if ((temp_v3 & 0x70000) != 0) {
              temp_v1 = temp_v7 + temp_v6 * 8;
              aiStack_220[temp_v6] = (int)puVar6;
              wordPairCopy(temp_v1,temp_v2);
              temp_v6 = temp_v6 + 1;
              goto LAB_004e960c;
            }
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 8);
        *(unsigned short *)(temp_v4 + 0x322) = 1;
        *(unsigned short *)(temp_v4 + 0x324) = 1;
        FUN_003e8bb0(temp_v10,*param_1,*(unsigned int *)(param_2 + 0x20));
        temp_v3 = (unsigned int)*(short *)(*(int *)(param_2 + 0x20) + 0x6e);
        FUN_004c8340(temp_v3,(int)*(short *)((int)puVar6 + 0x6e),temp_v10[0] >> 0x10,
                     (int)(short)temp_v10[1],0xffffffff);
        temp_v1 = temp_v9;
        if ((temp_v3 & 0x70000) != 0) {
          temp_v2 = temp_v7 + temp_v6 * 8;
          aiStack_220[temp_v6] = (int)puVar6;
          wordPairCopy(temp_v2,temp_v1);
          temp_v6 = temp_v6 + 1;
          break;
        }
        if ((**(unsigned int **)(param_2 + 0x20) & DAT_00571150) != 0 ||
            ((*(unsigned int **)(param_2 + 0x20))[1] & DAT_00571154) != 0) {
          temp_v1 = gameGetPlayerData();
          temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 2);
          FUN_00192608();
          if (temp_v3 != 0) {
            *(unsigned short *)(temp_v4 + 0x324) = 2;
            FUN_003e8bb0(temp_v10,*param_1,*(unsigned int *)(param_2 + 0x20));
            temp_v3 = (unsigned int)*(short *)(*(int *)(param_2 + 0x20) + 0x6e);
            FUN_004c8340(temp_v3,(int)*(short *)((int)puVar6 + 0x6e),temp_v10[0] >> 0x10,
                         (int)(short)temp_v10[1],0xffffffff);
            temp_v1 = temp_v9;
            if ((temp_v3 & 0x70000) != 0) {
              temp_v2 = temp_v7 + temp_v6 * 8;
              aiStack_220[temp_v6] = (int)puVar6;
              wordPairCopy(temp_v2,temp_v1);
              temp_v6 = temp_v6 + 1;
              break;
            }
          }
        }
      }
LAB_004e960c:
      temp_v5 = temp_v5 + 1;
    } while ((int)temp_v5 < (int)temp_v12);
    if (temp_v6 != 0) {
      temp_v1 = randRange((temp_v6 - 1U) & 0xffff);
      wordPairCopy(temp_v9,temp_v7 + temp_v1 * 8);
      temp_v1 = aiStack_220[temp_v1];
      FUN_003e8bb0(&temp_v8,*param_1,*(unsigned int *)(param_2 + 0x20));
      temp_v0 = (**(unsigned int **)(param_2 + 0x20) & DAT_00571168) == 0 &&
              ((*(unsigned int **)(param_2 + 0x20))[1] & DAT_0057116c) == 0;
      FUN_004e7c04(param_1,temp_v0);
      temp_v11 = temp_v11;
      if (temp_v11 != 0) {
        if (temp_v11 != 1) {
          if (temp_v11 == 2) {
            btlUnitMarkTargetCandidates(param_1,temp_v0,2);
          }
        }
        else {
          btlUnitMarkTargetCandidates(param_1,temp_v0,1);
        }
      }
      else {
        *(unsigned char *)((int)*(short *)(temp_v1 + 0x6e) + param_2 + 0x38) = 1;
      }
      temp_v6 = 0x6d;
      temp_v1 = 0;
      do {
        temp_v6 = temp_v6 - 1;
        temp_v4 = temp_v1 * 0x1d0 + 0x50;
        temp_v5 = *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v4);
        *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v4) = temp_v5 & 0xfffffffb;
        *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v4) = temp_v5 & 0xfffffff3;
        temp_v1 = temp_v1 + 1;
      } while (temp_v6 != 0);
    btlCommandExtendAnimationWindow((BtlActorRef*)param_1,(BtlCommand*)param_2,(int)*(short *)(*(int *)(param_2 + 0x24) + 0x6a),0,0x1e,0x1e);
      FUN_004eb838(param_1,param_2);
      FUN_004c9160(10,*(unsigned int *)(param_2 + 0x20),0,1);
      temp_v8 = 1;
      if (temp_v7 != 0) {
        asdMemFree();
      }
      return temp_v8;
    }
  }
  *(unsigned short *)(temp_v4 + 0x322) = 0;
  *(unsigned short *)(temp_v4 + 0x324) = 0;
  if (temp_v7 != 0) {
    asdMemFree();
  }
  return temp_v8;
}

} /* extern "C" */
