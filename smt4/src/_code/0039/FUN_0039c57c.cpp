/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039c57c` (_code @ 0x39c57c, 0x1ac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002314d0(void);
int MapNaviTable_GetCategoryCount(void);

extern int FUN_00231494(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_002314d0. */
/* Supplied declaration required: MapNaviTable_GetCategoryCount. */
extern int MapNaviTable_GetCategoryRecord(unsigned int *, unsigned int);
extern int NaviMain_GetPosX(void);
extern int NaviMain_GetPosY(int);


void FUN_0039c57c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 unstructured edge(s); 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  char *pcVar8;
  short *psVar9;
  int uStack_28;
  
  uStack_28 = param_4;
  temp_v1 = NaviMain_GetPosX();
  temp_v2 = NaviMain_GetPosY(param_1 + 0x162);
  puVar4 = (unsigned int *)&uStack_28;
  FUN_002314d0();
  temp_v3 = FUN_00231494((unsigned int *)&uStack_28,0);
  temp_v4 = 0;
  if (temp_v4 < (int)puVar4) {
    do {
      pcVar8 = (char *)(temp_v3 + temp_v4 * 0x14);
      temp_v5 = (int)*pcVar8;
      if (temp_v5 == -1) break;
      if ((temp_v5 == temp_v1) && ((unsigned char)pcVar8[1] == param_2)) {
        temp_v3 = temp_v3 + temp_v4 * 0x14;
        if (temp_v3 == 0) break;
        temp_v0 = *(char *)(temp_v3 + 3);
        *(char *)(param_1 + 0x60) = temp_v0;
        *(int *)(param_1 + 0x121cc) = (int)temp_v0;
        *(unsigned char *)(param_1 + 0x5a8c) = 1;
        *(unsigned char *)(param_1 + 0x5a8d) = 1;
        return;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < (int)puVar4);
  }
  *(unsigned char *)(param_1 + 0x60) = 0;
  puVar4 = (unsigned int *)&uStack_28;
  MapNaviTable_GetCategoryCount();
  temp_v3 = MapNaviTable_GetCategoryRecord((unsigned int *)&uStack_28,0);
  temp_v4 = 0;
  if (0 < (int)puVar4) {
    while( 1 ) {
      psVar9 = (short *)(temp_v3 + temp_v4 * 0x14);
      temp_v5 = (int)*psVar9;
      if (temp_v5 == -1) break;
      if ((temp_v5 == temp_v1) && (psVar9[1] == temp_v2)) {
        temp_v3 = temp_v3 + temp_v4 * 0x14;
        if (temp_v3 == 0) {
          return;
        }
        temp_v0 = *(char *)(temp_v3 + 4);
        puVar4 = (unsigned int *)&uStack_28;
        FUN_002314d0();
        temp_v3 = FUN_00231494((unsigned int *)&uStack_28,0);
        temp_v2 = 0;
        if ((int)puVar4 < 1) {
          return;
        }
        while( 1 ) {
          pcVar8 = (char *)(temp_v3 + temp_v2 * 0x14);
          temp_v4 = (int)*pcVar8;
          if (temp_v4 == -1) {
            return;
          }
          if ((temp_v4 == temp_v1) && (pcVar8[1] == temp_v0)) break;
          temp_v2 = temp_v2 + 1;
          if ((int)puVar4 <= temp_v2) {
            return;
          }
        }
        temp_v3 = temp_v3 + temp_v2 * 0x14;
        if (temp_v3 == 0) {
          return;
        }
        temp_v0 = *(char *)(temp_v3 + 3);
        *(char *)(param_1 + 0x60) = temp_v0;
        *(int *)(param_1 + 0x121cc) = (int)temp_v0;
        *(unsigned char *)(param_1 + 0x5a8c) = 1;
        *(unsigned char *)(param_1 + 0x5a8d) = 1;
        return;
      }
      temp_v4 = temp_v4 + 1;
      if ((int)puVar4 <= temp_v4) {
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
