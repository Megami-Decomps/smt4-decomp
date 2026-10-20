/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048821c` (_code @ 0x48821c, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014afd0(int, int);
int asdTMTexTableReleaseNode(...);
int dataTable2ECount(void);
int FUN_0048e46c(int, int);
int FUN_0049105c(int, int);
int MapNaviTable_GetCategoryCount(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_0014afd0. */
extern int FUN_00153f64(unsigned int, int);
/* Supplied declaration required: asdTMTexTableReleaseNode. */
extern int dataTable2EGetEntry(int);
/* Supplied declaration required: dataTable2ECount. */
/* Supplied declaration required: FUN_0048e46c. */
/* Supplied declaration required: FUN_0049105c. */
extern unsigned int FUN_004931c4(void);
/* Supplied declaration required: MapNaviTable_GetCategoryCount. */
extern short *MapNaviTable_GetCategoryRecord(unsigned char *, int);


void FUN_0048821c(int param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char *puVar5;
  short *psVar6;
  int temp_v4;
  int temp_v5;
  int *piVar9;
  unsigned char temp_v6;
  unsigned char temp_v7;
  
  *(unsigned int *)(param_1 + 0x18) = 0;
  if (param_2 >= 100) {
    *(unsigned char *)(param_1 + 0xc) = 0;
    temp_v2 = FUN_004931c4();
    temp_v6 = temp_v2 == 0;
    if (temp_v6) {
      temp_v2 = (unsigned int)*(unsigned char *)(param_1 + 0x20645);
    }
    if (temp_v6 && temp_v2 == 0) {
      FUN_0014afd0(0x13,6);
      *(unsigned char *)(param_1 + 0x20645) = 1;
    }
    FUN_0049105c(param_1,param_2);
    return;
  }
  *(unsigned char *)(param_1 + 0xc) = 1;
  temp_v2 = FUN_004931c4();
  temp_v6 = temp_v2 == 0;
  if (temp_v6) {
    temp_v2 = (unsigned int)*(unsigned char *)(param_1 + 0x20645);
  }
  if (temp_v6 && temp_v2 == 1) {
    asdTMTexTableReleaseNode(0x13,6);
    *(unsigned char *)(param_1 + 0x20645) = 0;
  }
  if (param_2 == -1) {
    return;
  }
  piVar9 = (int *)(param_1 + 0x1480);
  temp_v3 = param_1;
  if (*piVar9 != 0) {
    temp_v3 = asdTMTexTableReleaseNode(0x28);
    *piVar9 = 0;
  }
  temp_v4 = 0;
  dataTable2ECount();
  if (0 < temp_v3) {
    do {
      temp_v3 = dataTable2EGetEntry(temp_v4);
      if (*(short *)(temp_v3 + 0x20) == -1) break;
      if (*(short *)(temp_v3 + 0x20) == param_2) {
        *piVar9 = *(short *)(temp_v3 + 0x2a) + 1;
        break;
      }
      temp_v4 = temp_v4 + 1;
      dataTable2ECount();
    } while (temp_v4 < temp_v3);
  }
  FUN_0014afd0(0x28,*piVar9);
  temp_v3 = FUN_00153f64(0x28,*piVar9);
  temp_v4 = 0;
  temp_v5 = 0x20;
  *(unsigned int *)(temp_v3 + 0x3c) = 1;
  do {
    temp_v3 = param_1 + temp_v4 * 8;
    *(unsigned int *)(temp_v3 + 0x148c) = 0;
    *(unsigned int *)(temp_v3 + 0x1490) = 0;
    *(unsigned int *)(temp_v3 + 0x158c) = 0;
    *(unsigned int *)(temp_v3 + 0x1590) = 0;
    *(unsigned int *)(temp_v3 + 0x168c) = 0;
    temp_v5 = temp_v5 - 1;
    temp_v4 = temp_v4 + 1;
    *(unsigned int *)(temp_v3 + 0x1690) = 0;
  } while (temp_v5 != 0);
  puVar5 = &temp_v7;
  MapNaviTable_GetCategoryCount();
  temp_v3 = 0;
  if (temp_v3 < (int)puVar5) {
    do {
      psVar6 = (short *)MapNaviTable_GetCategoryRecord(&temp_v7,temp_v3);
      if (*psVar6 == param_2) {
        *(int *)(param_1 + psVar6[1] * 8 + 0x148c) = (int)psVar6[8] + (int)psVar6[6];
        *(int *)(param_1 + psVar6[1] * 8 + 0x1490) = (int)psVar6[7] + (int)psVar6[9];
        temp_v0 = *(char *)((int)psVar6 + 9);
        temp_v1 = *(char *)((int)psVar6 + 7);
        *(int *)(param_1 + psVar6[1] * 8 + 0x158c) =
             (int)psVar6[6] + (((int)(char)psVar6[4] - (int)(char)psVar6[3]) * 0xc) / 2;
        *(int *)(param_1 + psVar6[1] * 8 + 0x1590) =
             (int)psVar6[7] + (((int)temp_v0 - (int)temp_v1) * 0xc) / 2;
        *(int *)(param_1 + psVar6[1] * 8 + 0x168c) = (int)(char)psVar6[3];
        *(int *)(param_1 + psVar6[1] * 8 + 0x1690) = (int)*(char *)((int)psVar6 + 7);
      }
      temp_v3 = temp_v3 + 1;
      puVar5 = &temp_v7;
      MapNaviTable_GetCategoryCount();
    } while (temp_v3 < (int)puVar5);
  }
  FUN_0048e46c(param_1,param_2);
  *(unsigned char *)(param_1 + 0x7b91) = 1;
  return;
}

} /* extern "C" */
