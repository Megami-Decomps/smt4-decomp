/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00288380` (_code @ 0x288380, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002c0e4c(unsigned int);
extern unsigned short *FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


unsigned short FUN_00288380(unsigned int param_1)

{
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned int temp_v2;
  
  temp_v1 = FUN_002c0ec4(1,2);
  puVar3 = (unsigned short *)FUN_002c0e9c();
  temp_v2 = FUN_002c0e4c(temp_v1);
  if (param_1 < temp_v2) {
    temp_v0 = puVar3[param_1 * 2];
  }
  else {
    temp_v0 = *puVar3;
  }
  return temp_v0;
}
