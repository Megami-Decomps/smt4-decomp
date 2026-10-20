/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a00f4` (_code @ 0x4a00f4, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorUnsignedToFloat(unsigned int, int);

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int gameGetPlayerData(void);
extern int gameGetSlotRecord(void);
extern unsigned int gameGetSlotTable(void);
extern int gameSlotTableFindFree(unsigned int);


unsigned int FUN_004a00f4(unsigned int param_1)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  
  temp_v1 = param_1;
  if ((param_1 == 0 || param_1 == 2) || param_1 == 3) {
    temp_v0 = gameGetPlayerData();
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + 0x62);
    VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  if (param_1 >= 2) {
    if (param_1 != 2 && param_1 != 3) {
      return temp_v1;
    }
    temp_v0 = 3;
    temp_v1 = gameGetSlotTable();
    temp_v4 = temp_v1 + 0x1ca0;
  }
  else {
    temp_v0 = gameSlotTableFindFree(temp_v1);
    temp_v1 = gameGetSlotTable();
    temp_v4 = temp_v1 + 0x1c88;
  }
  temp_v3 = 0;
  if (temp_v3 < temp_v0) {
    do {
      temp_v1 = (unsigned int)*(char *)(temp_v4 + temp_v3);
      if (-1 < (int)temp_v1) {
        temp_v2 = gameGetSlotRecord();
        temp_v1 = (unsigned int)*(unsigned short *)(temp_v2 + 100);
        VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v0);
  }
  return temp_v1;
}

} /* extern "C" */
