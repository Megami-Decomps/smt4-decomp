/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ced50` (_code @ 0x4ced50, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int recordGetScaledMaximum(...);
int SBORROW4(int, int);

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: recordGetScaledMaximum. */
extern int gameGetPlayerData(void);
extern int FUN_00187168(void);
extern int gameGetSlotRecord(void);
extern int gameGetSlotTable(void);
extern int gameSlotTableFindFree(void);
extern int FUN_003e0024(void);
extern int FUN_003e0034(void);
extern int FUN_003e0154(void);
extern int FUN_003e0164(void);
extern int FUN_003e4d68(unsigned int);


unsigned int FUN_004ced50(void)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  
  temp_v1 = gameGetPlayerData();
  temp_v2 = FUN_003e0024();
  temp_v3 = FUN_003e0154();
  temp_v4 = FUN_003e0034();
  temp_v5 = FUN_003e0164();
  temp_v9 = SBORROW4(temp_v2,temp_v3);
  temp_v6 = temp_v2 - temp_v3;
  if (temp_v3 <= temp_v2) {
    temp_v9 = SBORROW4(temp_v4,temp_v5);
    temp_v6 = temp_v4 - temp_v5;
  }
  if ((temp_v6 < 0 != temp_v9) || (*(short *)(temp_v1 + 0x5e) != 0)) {
    return 1;
  }
  temp_v6 = gameSlotTableFindFree();
  temp_v1 = gameGetSlotTable();
  temp_v2 = 0;
  if (temp_v2 < temp_v6) {
    do {
      if (-1 < *(char *)(temp_v1 + 0x1c88 + temp_v2)) {
        temp_v4 = gameGetSlotRecord();
        temp_v8 = (int)*(short *)(temp_v4 + 0x2a);
        temp_v5 = recordGetScaledMaximum();
        temp_v9 = SBORROW4(temp_v8,temp_v5);
        temp_v3 = temp_v8 - temp_v5;
        if (temp_v5 <= temp_v8) {
          temp_v9 = SBORROW4((int)*(short *)(temp_v4 + 0x2c),(int)*(short *)(temp_v4 + 0x10));
          temp_v3 = (int)*(short *)(temp_v4 + 0x2c) - (int)*(short *)(temp_v4 + 0x10);
        }
        if (temp_v3 < 0 != temp_v9) {
          return 1;
        }
        if ((*(unsigned short *)(temp_v4 + 0x60) & 0xfffb) != 0) {
          return 1;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < temp_v6);
  }
  temp_v7 = 0;
  do {
    temp_v6 = FUN_003e4d68(temp_v7 & 0xffff);
    temp_v1 = FUN_00187168();
    if (temp_v1 != 0) {
      temp_v0 = *(short *)(temp_v6 + 0x2a);
      temp_v1 = recordGetScaledMaximum(temp_v6);
      if (temp_v0 < temp_v1) {
        return 1;
      }
      temp_v9 = *(short *)(temp_v6 + 0x10) == *(short *)(temp_v6 + 0x2c);
      if (*(short *)(temp_v6 + 0x10) <= *(short *)(temp_v6 + 0x2c)) {
        temp_v9 = *(short *)(temp_v6 + 0x60) == 0;
      }
      if (!temp_v9) {
        return 1;
      }
    }
    temp_v7 = temp_v7 + 1;
    if ((int)temp_v7 >= 0xc) {
      return 0;
    }
  } while( 1 );
}

} /* extern "C" */
