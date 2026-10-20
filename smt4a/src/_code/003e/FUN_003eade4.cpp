/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eade4` (_code @ 0x3eade4, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameGetSlotTable(void);


char FUN_003eade4(void)

{
  int temp_v0;
  char temp_v1;
  
  temp_v0 = gameGetSlotTable();
  temp_v1 = -1 < *(char *)(temp_v0 + 0x1ca0);
  if (-1 < *(char *)(temp_v0 + 0x1ca1)) {
    temp_v1 = temp_v1 + '\x01';
  }
  if (-1 < *(char *)(temp_v0 + 0x1ca2)) {
    temp_v1 = temp_v1 + '\x01';
  }
  return temp_v1;
}

} /* extern "C" */
