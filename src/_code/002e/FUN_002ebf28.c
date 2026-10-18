/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ebf28` (_code @ 0x2ebf28, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


unsigned short FUN_002ebf28(unsigned int param_1)

{
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v1 = FUN_002c0ec4(0xe,1);
  temp_v2 = FUN_002c0e9c();
  temp_v3 = FUN_002c0e4c(temp_v1);
  if (param_1 < temp_v3) {
    temp_v0 = *(unsigned short *)(temp_v2 + param_1 * 4);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
