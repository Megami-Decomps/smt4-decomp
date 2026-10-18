/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5eac` (_code @ 0x2f5eac, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a0d0c(void);


void FUN_002f5eac(unsigned int param_1,int param_2)

{
  unsigned char temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v1 = FUN_002a0d0c();
  temp_v2 = (unsigned char)(1 << (param_1 & 7));
  temp_v1 = temp_v1 + (param_1 >> 3);
  temp_v0 = *(unsigned char *)(temp_v1 + 0x44);
  if (param_2 != 0) {
    temp_v2 = temp_v2 | temp_v0;
  }
  else {
    temp_v2 = temp_v0 & ~temp_v2;
  }
  *(unsigned char *)(temp_v1 + 0x44) = temp_v2;
  return;
}
