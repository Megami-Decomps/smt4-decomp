/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048cee8` (_code @ 0x48cee8, 0x230 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014afd0(int, int);
int dataTable2ECount(void);
int FUN_0048e46c(int, int);
int MapNaviTable_GetCategoryCount(void);

/* Supplied declaration required: FUN_0014afd0. */
extern int FUN_00153f64(unsigned int, int);
extern int asdTMTexTableReleaseNode(unsigned int);
extern int dataTable2EGetEntry(int);
/* Supplied declaration required: dataTable2ECount. */
/* Supplied declaration required: FUN_0048e46c. */
/* Supplied declaration required: MapNaviTable_GetCategoryCount. */
extern short *MapNaviTable_GetCategoryRecord(unsigned int *, int);


void FUN_0048cee8(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  short *psVar5;
  int temp_v3;
  int temp_v4;
  int *piVar8;
  int uStack_20;
  
  piVar8 = (int *)(param_1 + 0x1480);
  temp_v2 = param_1;
  uStack_20 = param_4;
  if (*piVar8 != 0) {
    temp_v2 = asdTMTexTableReleaseNode(0x28);
    *piVar8 = 0;
  }
  temp_v3 = 0;
  dataTable2ECount();
  if (0 < temp_v2) {
    do {
      temp_v2 = dataTable2EGetEntry(temp_v3);
      if (*(short *)(temp_v2 + 0x20) == -1) break;
      if (*(short *)(temp_v2 + 0x20) == param_2) {
        *piVar8 = *(short *)(temp_v2 + 0x2a) + 1;
        break;
      }
      temp_v3 = temp_v3 + 1;
      dataTable2ECount();
    } while (temp_v3 < temp_v2);
  }
  FUN_0014afd0(0x28,*piVar8);
  temp_v2 = FUN_00153f64(0x28,*piVar8);
  temp_v3 = 0;
  temp_v4 = 0x20;
  *(unsigned int *)(temp_v2 + 0x3c) = 1;
  do {
    temp_v2 = param_1 + temp_v3 * 8;
    *(unsigned int *)(temp_v2 + 0x148c) = 0;
    *(unsigned int *)(temp_v2 + 0x1490) = 0;
    *(unsigned int *)(temp_v2 + 0x158c) = 0;
    *(unsigned int *)(temp_v2 + 0x1590) = 0;
    *(unsigned int *)(temp_v2 + 0x168c) = 0;
    temp_v4 = temp_v4 - 1;
    temp_v3 = temp_v3 + 1;
    *(unsigned int *)(temp_v2 + 0x1690) = 0;
  } while (temp_v4 != 0);
  puVar4 = (unsigned int *)&uStack_20;
  MapNaviTable_GetCategoryCount();
  temp_v2 = 0;
  if (temp_v2 < (int)puVar4) {
    do {
      psVar5 = (short *)MapNaviTable_GetCategoryRecord((unsigned int *)&uStack_20,temp_v2);
      if (*psVar5 == param_2) {
        *(int *)(param_1 + psVar5[1] * 8 + 0x148c) = (int)psVar5[8] + (int)psVar5[6];
        *(int *)(param_1 + psVar5[1] * 8 + 0x1490) = (int)psVar5[7] + (int)psVar5[9];
        temp_v0 = *(char *)((int)psVar5 + 9);
        temp_v1 = *(char *)((int)psVar5 + 7);
        *(int *)(param_1 + psVar5[1] * 8 + 0x158c) =
             (int)psVar5[6] + (((int)(char)psVar5[4] - (int)(char)psVar5[3]) * 0xc) / 2;
        *(int *)(param_1 + psVar5[1] * 8 + 0x1590) =
             (int)psVar5[7] + (((int)temp_v0 - (int)temp_v1) * 0xc) / 2;
        *(int *)(param_1 + psVar5[1] * 8 + 0x168c) = (int)(char)psVar5[3];
        *(int *)(param_1 + psVar5[1] * 8 + 0x1690) = (int)*(char *)((int)psVar5 + 7);
      }
      temp_v2 = temp_v2 + 1;
      puVar4 = (unsigned int *)&uStack_20;
      MapNaviTable_GetCategoryCount();
    } while (temp_v2 < (int)puVar4);
  }
  FUN_0048e46c(param_1,param_2);
  *(unsigned char *)(param_1 + 0x7b91) = 1;
  return;
}

} /* extern "C" */
