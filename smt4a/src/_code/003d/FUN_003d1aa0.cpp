/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d1aa0` (_code @ 0x3d1aa0, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(...);
int FUN_00186f58(void);
int FUN_00203b40(int, unsigned int, int, int, int, int);
int FUN_003e41f8(unsigned int, int);
int gameDataSetAreaBit(unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_00221a08(...); /* 0x221a08 */
extern int FUN_00231f50(...); /* 0x231f50 */
extern int gauntletAppCompareBySortKeys(...); /* 0x2320b0 */
extern int FUN_002418f8(...); /* 0x2418f8 */
extern int FUN_002b2c44(...); /* 0x2b2c44 */
extern int FUN_002ce57c(...); /* 0x2ce57c */
extern int gauntletAppCompareBySortKeysDescending(...); /* 0x2ce6dc */
extern int entryRefCompareByKindLevelOrder(...); /* 0x2fdfc0 */
extern int g_gauntletAppMenu; /* 0x57f238 */

/* Supplied declaration required: qsort. */
/* Supplied declaration required: FUN_00186f58. */
/* Supplied declaration required: FUN_00203b40. */
extern int FUN_0026140c(void);
extern unsigned int objectApplyIfUnblocked(int);
/* Supplied declaration required: FUN_003e41f8. */
extern int FUN_003e4230(unsigned int);
extern int FUN_003e44ec(unsigned int);
/* Supplied declaration required: gameDataSetAreaBit. */
extern int gameDataFlagTestBit(unsigned int);


void FUN_003d1aa0(int param_1)

{
/* irregular: irregular input(s): in_lr; 13 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  romwright_code *pcVar5;
  unsigned int unaff_r4;
  unsigned int temp_v4;
  unsigned char temp_v5;
  unsigned int unaff_r5;
  unsigned int unaff_r6;
  unsigned char *pbVar8;
  unsigned int in_lr;
  
  *(unsigned int *)(param_1 + 0x2a8) = 0;
  if (*(char *)(param_1 + 0x2b4) != '\0') {
    *(unsigned int *)(param_1 + 0x74) = 0x2e;
    *(unsigned int *)(param_1 + 0x2a8) = 1;
  }
  else if (*(char *)(param_1 + 0x2b5) != '\0') {
    *(unsigned int *)(param_1 + 0x74) = 0x18;
    *(unsigned int *)(param_1 + 0x2a8) = 1;
  }
  else if (*(char *)(param_1 + 0x2b7) != '\0') {
    *(unsigned int *)(param_1 + 0x74) = 0x76;
    *(unsigned int *)(param_1 + 0x2a8) = 1;
  }
  else {
    temp_v4 = 1;
    do {
      temp_v0 = temp_v4;
      FUN_00186f58();
      if ((temp_v0 != 0) &&
         ((temp_v1 = gameDataFlagTestBit(temp_v4), temp_v1 != 0 || (temp_v1 = FUN_003e4230(temp_v4), temp_v1 != 2)))) {
        temp_v1 = FUN_003e44ec(temp_v4);
        if (temp_v1 == 0) {
          gameDataSetAreaBit(temp_v4,1);
          FUN_003e41f8(temp_v4,1);
        }
        *(unsigned int *)(param_1 + *(int *)(param_1 + 0x2a8) * 4 + 0x74) = temp_v4;
        *(int *)(param_1 + 0x2a8) = *(int *)(param_1 + 0x2a8) + 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x8d);
  }
  FUN_00203b40(param_1 + 0x10,*(unsigned int *)(param_1 + 0x2a8),10,1,1,1);
  temp_v1 = g_gauntletAppMenu;
  temp_v2 = FUN_0026140c();
  pbVar8 = (unsigned char *)(temp_v2 + 0xd);
  temp_v5 = ~(*(unsigned char *)(temp_v2 + 0xd) >> 7) & 1;
  if ((*(unsigned char *)(temp_v2 + 0xd) & 0x7f) == 0x21) {
    if (temp_v5 != 0) {
      temp_v3 = objectApplyIfUnblocked(temp_v1 + 0x10);
      qsort(temp_v1 + 0x74,temp_v3,4,FUN_00231f50,unaff_r4,unaff_r5,unaff_r6,in_lr);
    }
    else {
      temp_v3 = objectApplyIfUnblocked(temp_v1 + 0x10);
      qsort(temp_v1 + 0x74,temp_v3,4,FUN_002ce57c,unaff_r4,unaff_r5,unaff_r6,in_lr);
    }
  }
  if ((*pbVar8 & 0x7f) == 0x15) {
    if (temp_v5 != 0) {
      temp_v3 = objectApplyIfUnblocked(temp_v1 + 0x10);
      qsort(temp_v1 + 0x74,temp_v3,4,FUN_002418f8,unaff_r4,unaff_r5,unaff_r6,in_lr);
    }
    else {
      temp_v3 = objectApplyIfUnblocked(temp_v1 + 0x10);
      qsort(temp_v1 + 0x74,temp_v3,4,entryRefCompareByKindLevelOrder,unaff_r4,unaff_r5,unaff_r6,in_lr);
    }
  }
  if ((*pbVar8 & 0x7f) == 0x16) {
    if (temp_v5 != 0) {
      temp_v3 = objectApplyIfUnblocked(temp_v1 + 0x10);
      qsort(temp_v1 + 0x74,temp_v3,4,FUN_00221a08,unaff_r4,unaff_r5,unaff_r6,in_lr);
    }
    else {
      temp_v3 = objectApplyIfUnblocked(temp_v1 + 0x10);
      qsort(temp_v1 + 0x74,temp_v3,4,FUN_002b2c44,unaff_r4,unaff_r5,unaff_r6,in_lr);
    }
  }
  if ((*pbVar8 & 0x7f) != 3) {
    return;
  }
  if (temp_v5 != 0) {
    temp_v3 = objectApplyIfUnblocked(temp_v1 + 0x10);
    pcVar5 = gauntletAppCompareBySortKeys;
  }
  else {
    temp_v3 = objectApplyIfUnblocked(temp_v1 + 0x10);
    pcVar5 = gauntletAppCompareBySortKeysDescending;
  }
  qsort(temp_v1 + 0x74,temp_v3,4,pcVar5);
  return;
}

} /* extern "C" */
