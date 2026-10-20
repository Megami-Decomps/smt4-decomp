/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048d248` (_code @ 0x48d248, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0048b140(...);
int MapNaviTable_GetCategoryCount(void);

/* Supplied declaration required: FUN_0048b140. */
extern int FUN_00492c5c(void);
extern int FUN_00492c70(int);
/* Supplied declaration required: MapNaviTable_GetCategoryCount. */
extern int MapNaviTable_GetCategoryRecord(unsigned int *, unsigned int);


void FUN_0048d248(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  short *psVar7;
  int temp_v5;
  int uStack_28;
  
  uStack_28 = param_4;
  temp_v1 = FUN_00492c5c();
  temp_v2 = FUN_00492c70(param_1 + 0x4cc);
  temp_v3 = FUN_0048b140(param_1,temp_v1,param_2);
  if (temp_v3 != 0) {
    temp_v0 = *(char *)(temp_v3 + 3);
    *(char *)(param_1 + 100) = temp_v0;
    *(int *)(param_1 + 0x20640) = (int)temp_v0;
    *(unsigned char *)(param_1 + 0x7b90) = 1;
    *(unsigned char *)(param_1 + 0x7b91) = 1;
  }
  else {
    *(unsigned char *)(param_1 + 100) = 0;
    puVar5 = (unsigned int *)&uStack_28;
    MapNaviTable_GetCategoryCount();
    temp_v4 = MapNaviTable_GetCategoryRecord((unsigned int *)&uStack_28,0);
    temp_v3 = 0;
    if (0 < (int)puVar5) {
      while( 1 ) {
        psVar7 = (short *)(temp_v4 + temp_v3 * 0x14);
        temp_v5 = (int)*psVar7;
        if (temp_v5 == -1) break;
        if ((temp_v5 == temp_v1) && (psVar7[1] == temp_v2)) {
          temp_v4 = temp_v4 + temp_v3 * 0x14;
          if (temp_v4 == 0) {
            return;
          }
          temp_v3 = FUN_0048b140(param_1,temp_v1,*(unsigned char *)(temp_v4 + 4));
          if (temp_v3 == 0) {
            return;
          }
          temp_v0 = *(char *)(temp_v3 + 3);
          *(char *)(param_1 + 100) = temp_v0;
          *(int *)(param_1 + 0x20640) = (int)temp_v0;
          *(unsigned char *)(param_1 + 0x7b90) = 1;
          *(unsigned char *)(param_1 + 0x7b91) = 1;
          break;
        }
        temp_v3 = temp_v3 + 1;
        if ((int)puVar5 <= temp_v3) {
          return;
        }
      }
    }
  }
  return;
}

} /* extern "C" */
