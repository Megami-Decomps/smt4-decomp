/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e48bc` (_code @ 0x3e48bc, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001ab888(void);


unsigned char FUN_003e48bc(void)

{
  int temp_v0;
  
  temp_v0 = FUN_001ab888();
  return *(unsigned short *)(temp_v0 + 0x2c4e) >= 8;
}
