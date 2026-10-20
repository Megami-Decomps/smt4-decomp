/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025a140` (_code @ 0x25a140, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameGetUnitRecord(void);
extern int gameGetSlotTable(void);
extern int gameCountUnits(void);
extern int gameGetPlayerData(void);


unsigned int FUN_0025a140(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = 1 << (param_2 & 0xff);
  if (((param_1 == 0 || param_1 == 2) || param_1 == 3) &&
     (temp_v1 = gameGetPlayerData(), (*(unsigned short *)(temp_v1 + 0x72) & temp_v0) != 0)) {
    return 1;
  }
  if (param_1 >= 2) {
    if (param_1 != 2 && param_1 != 3) {
      return 0;
    }
    temp_v1 = 3;
    temp_v2 = gameGetSlotTable();
    temp_v2 = temp_v2 + 0x9108;
  }
  else {
    temp_v1 = gameCountUnits();
    temp_v2 = gameGetSlotTable();
    temp_v2 = temp_v2 + 0x90f0;
  }
  temp_v4 = 0;
  if (temp_v4 < temp_v1) {
    do {
      if ((-1 < *(char *)(temp_v2 + temp_v4)) &&
         (temp_v3 = gameGetUnitRecord(), (*(unsigned short *)(temp_v3 + 0x44) & temp_v0) != 0)) {
        return 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v1);
  }
  return 0;
}

} /* extern "C" */
