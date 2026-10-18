/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002888dc` (_code @ 0x2888dc, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


unsigned int FUN_002888dc(unsigned int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c0ec4(0x24,0);
  temp_v1 = FUN_002c0e9c();
  temp_v2 = FUN_002c0e4c(temp_v0);
  if (param_1 >= temp_v2) {
    temp_v2 = 0xffffffff;
  }
  else {
    temp_v2 = (unsigned int)*(unsigned char *)(temp_v1 + param_1 * 0x90);
  }
  return temp_v2;
}
