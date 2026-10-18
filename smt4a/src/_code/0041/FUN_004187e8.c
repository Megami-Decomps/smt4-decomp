/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004187e8` (_code @ 0x4187e8, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001ab940(void);


void FUN_004187e8(int param_1,int param_2)

{
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = FUN_001ab940();
  temp_v0 = temp_v0 + param_1 * 4;
  if ((*(unsigned char *)(temp_v0 + 0x2a0) & 2) != 0) {
    if (param_2 != 0) {
      temp_v1 = *(unsigned char *)(temp_v0 + 0x2a2) | 4;
    }
    else {
      temp_v1 = *(unsigned char *)(temp_v0 + 0x2a2) & 0xfb;
    }
    *(unsigned char *)(temp_v0 + 0x2a2) = temp_v1;
  }
  return;
}
