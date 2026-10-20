/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c88b8` (_code @ 0x3c88b8, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int questRecordFindById(unsigned short);
extern int gameGetOptions(void);
extern unsigned int FUN_002b6b38(void);


unsigned short FUN_003c88b8(void)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  
  temp_v2 = 0;
  temp_v0 = FUN_002b6b38();
  if ((temp_v0 >= 2) && (temp_v0 == 2)) {
    temp_v1 = gameGetOptions();
    temp_v1 = questRecordFindById(*(unsigned short *)(temp_v1 + 0x46));
    temp_v2 = *(unsigned short *)(temp_v1 + 0xe);
  }
  return temp_v2;
}

} /* extern "C" */
