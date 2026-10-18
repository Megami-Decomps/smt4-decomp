/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030a3d4` (_code @ 0x30a3d4, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00296f60(unsigned int);
extern int FUN_002bf41c(unsigned int);
extern int FUN_002c0ac8(unsigned int);
extern int FUN_002c615c(unsigned int, unsigned int);


unsigned int FUN_0030a3d4(void)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  temp_v2 = FUN_002bf41c(temp_v0);
  if (temp_v2 != 0) {
    temp_v2 = FUN_002c0ac8(temp_v0);
    temp_v3 = FUN_002c615c(*(unsigned int *)(temp_v2 + 0x10),temp_v1);
    *(int *)(temp_v2 + 0x60) = -temp_v3;
  }
  return 1;
}
