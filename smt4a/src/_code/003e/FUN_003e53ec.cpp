/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e53ec` (_code @ 0x3e53ec, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameFlagIsSet(unsigned int);
extern int gameGetSlotTable(void);


unsigned short FUN_003e53ec(void)

{
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v1 = gameFlagIsSet(0x533);
  temp_v0 = 0;
  if (temp_v1 != 0) {
    temp_v1 = gameGetSlotTable();
    temp_v0 = *(unsigned short *)(temp_v1 + 0x2c4e);
  }
  return temp_v0;
}

} /* extern "C" */
