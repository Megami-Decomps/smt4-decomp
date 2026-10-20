/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8910` (_code @ 0x2d8910, 0x2f0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00249b18(int, int);
int scrWorkGetValue(...);
int scrWorkSetValue(...);
int FUN_00254e2c(...);
int FUN_00295660(int, unsigned int);
int gameGetUnitRecord(int);
int FUN_002bd06c(unsigned int);
int FUN_002bff50(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_00249b18. */
/* Supplied declaration required: scrWorkGetValue. */
/* Supplied declaration required: scrWorkSetValue. */
/* Supplied declaration required: FUN_00254e2c. */
extern int scrGetCommandFrame(void);
/* Supplied declaration required: FUN_00295660. */
/* Supplied declaration required: gameGetUnitRecord. */
extern int gameGetSlotTable(void);
extern int gameCountUnits(void);
extern int fileSlotGetBuffer(unsigned int);
/* Supplied declaration required: FUN_002bd06c. */
extern unsigned int FUN_002bd1fc(void);
/* Supplied declaration required: FUN_002bff50. */


int FUN_002d8910(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  
  if (param_1 != 0) {
    if ((param_1 == 1) && (temp_v6 = scrGetCommandFrame(), temp_v6 == 0)) {
      FUN_00249b18(0,1);
      scrWorkSetValue(0);
      scrWorkSetValue(1,0);
      scrWorkSetValue(2,0);
    }
    return 1;
  }
  temp_v6 = scrGetCommandFrame();
  if (temp_v6 == 0) {
    FUN_00249b18(0,1);
    scrWorkSetValue(0);
    scrWorkSetValue(1,0);
    scrWorkSetValue(2,0);
  }
  temp_v0 = fileSlotGetBuffer(0x1e);
  temp_v6 = scrWorkGetValue(0);
  if (temp_v6 != 0) {
    if (temp_v6 != 1) {
      if (temp_v6 != 2) {
        if (temp_v6 != 3) {
          return 0;
        }
      }
      else {
        temp_v6 = gameCountUnits();
        temp_v3 = gameGetSlotTable();
        while (temp_v2 = scrWorkGetValue(2), temp_v2 < temp_v6) {
          temp_v2 = scrWorkGetValue(2);
          gameGetUnitRecord((int)*(char *)(temp_v2 + temp_v3 + 0x90f0));
          temp_v2 = scrWorkGetValue(2);
          scrWorkSetValue(2,temp_v2 + 1);
        }
        temp_v3 = scrWorkGetValue(2);
        if (temp_v6 <= temp_v3) {
          return 1;
        }
      }
      temp_v6 = gameGetSlotTable();
      temp_v3 = scrWorkGetValue(2);
      temp_v6 = gameGetUnitRecord((int)*(char *)(temp_v3 + temp_v6 + 0x90f0));
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v6 + 0x46);
      FUN_002bd06c(temp_v4);
      FUN_00295660(0x28,temp_v4);
      temp_v5 = scrWorkGetValue(1);
      FUN_00254e2c(temp_v0,0xd,temp_v5,6,0);
      temp_v6 = scrWorkGetValue(1);
      scrWorkSetValue(1,temp_v6 + 1);
      if (temp_v0 == 1) {
        scrWorkSetValue(0,2);
        scrWorkSetValue(1,0);
        temp_v6 = scrWorkGetValue(2);
        scrWorkSetValue(2,temp_v6 + 1);
        temp_v0 = 0;
      }
    }
    else {
      temp_v5 = FUN_002bd1fc();
      FUN_00295660(0x28,temp_v5);
      temp_v5 = scrWorkGetValue(1);
      FUN_00254e2c(temp_v0,0xd,temp_v5,6,0);
      temp_v6 = scrWorkGetValue(1);
      scrWorkSetValue(1,temp_v6 + 1);
    }
  }
  else {
    temp_v5 = 0xf;
    temp_v6 = gameCountUnits();
    if (temp_v6 == 0) {
      temp_v5 = 0xe;
    }
    FUN_002bff50();
    temp_v1 = scrWorkGetValue(1);
    FUN_00254e2c(temp_v0,temp_v5,temp_v1,6,0);
    temp_v6 = scrWorkGetValue(1);
    scrWorkSetValue(1,temp_v6 + 1);
  }
  return temp_v0;
}

} /* extern "C" */
