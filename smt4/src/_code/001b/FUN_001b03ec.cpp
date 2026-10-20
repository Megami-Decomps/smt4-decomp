/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b03ec` (_code @ 0x1b03ec, 0x16c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ae164(void);

extern int gameGetUnitRecord(int);
extern int gameGetSlotTable(void);
/* Supplied declaration required: FUN_002ae164. */
extern int idIsAbove400(unsigned int);
extern int gameGetPlayerData(void);


void FUN_001b03ec(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v5 = 0;
  temp_v4 = 0;
  *(unsigned int *)(param_1 + 0x341c) = 0;
  *(unsigned int *)(param_1 + 0x3420) = 0;
  *(unsigned int *)(param_1 + 0x3424) = 0;
  *(unsigned int *)(param_1 + 0x3428) = 0;
  *(unsigned int *)(param_1 + 0x342c) = 0;
  *(unsigned int *)(param_1 + 0x3430) = 0;
  *(unsigned int *)(param_1 + 0x3434) = 0;
  *(unsigned int *)(param_1 + 0x3438) = 0;
  *(unsigned int *)(param_1 + 0x343c) = 0;
  *(unsigned int *)(param_1 + 0x3440) = 0;
  *(unsigned int *)(param_1 + 0x3444) = 0;
  *(unsigned int *)(param_1 + 0x3448) = 0;
  *(unsigned int *)(param_1 + 0x344c) = 0;
  *(unsigned int *)(param_1 + 0x3450) = 0;
  *(unsigned int *)(param_1 + 0x3454) = 0;
  *(unsigned int *)(param_1 + 0x3458) = 0;
  do {
    temp_v1 = gameGetPlayerData();
    temp_v0 = *(unsigned short *)(temp_v1 + temp_v4 * 2 + 0x34);
    temp_v2 = (unsigned int)temp_v0;
    FUN_002ae164();
    if (((temp_v2 != 0) && (*(char *)(temp_v2 + 0x55) == '\0')) &&
       (temp_v1 = idIsAbove400((unsigned int)temp_v0), temp_v1 == 0)) {
      temp_v1 = temp_v5 * 2;
      temp_v5 = temp_v5 + 1;
      *(unsigned short *)(param_1 + temp_v1 + 0x341c) = temp_v0;
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 8);
  temp_v4 = 0;
  do {
    temp_v5 = gameGetSlotTable();
    if (-1 < *(char *)(temp_v5 + temp_v4 + 0x9108)) {
      temp_v5 = gameGetSlotTable();
      temp_v5 = gameGetUnitRecord((int)*(char *)(temp_v5 + temp_v4 + 0x9108));
      if (temp_v5 != 0) {
        temp_v6 = 0;
        temp_v1 = 0;
        do {
          temp_v0 = *(unsigned short *)(temp_v5 + temp_v1 * 2 + 0x34);
          temp_v2 = (unsigned int)temp_v0;
          FUN_002ae164();
          if (((temp_v2 != 0) && (*(char *)(temp_v2 + 0x55) == '\0')) &&
             (temp_v3 = idIsAbove400((unsigned int)temp_v0), temp_v3 == 0)) {
            temp_v3 = temp_v6 * 2;
            temp_v6 = temp_v6 + 1;
            *(unsigned short *)(param_1 + temp_v4 * 0x10 + temp_v3 + 0x342c) = temp_v0;
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 8);
      }
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 3);
  return;
}

} /* extern "C" */
