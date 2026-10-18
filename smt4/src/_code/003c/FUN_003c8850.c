/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c8850` (_code @ 0x3c8850, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00229f30(unsigned short);
extern int FUN_002b6b20(void);
extern int FUN_002b6b38(void);


unsigned short FUN_003c8850(void)

{
  int temp_v0;
  unsigned short temp_v1;
  
  temp_v1 = 0;
  temp_v0 = FUN_002b6b38();
  if (temp_v0 == 2) {
    temp_v0 = FUN_002b6b20();
    temp_v0 = FUN_00229f30(*(unsigned short *)(temp_v0 + 0x46));
    temp_v1 = *(unsigned short *)(temp_v0 + 4) >> 1;
  }
  return temp_v1;
}
