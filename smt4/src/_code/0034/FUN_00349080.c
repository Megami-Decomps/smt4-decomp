/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00349080` (_code @ 0x349080, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002adc88(void);


void FUN_00349080(int param_1,int param_2)

{
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = FUN_002adc88();
  temp_v0 = temp_v0 + param_1 * 4;
  if ((*(unsigned char *)(temp_v0 + 0x200) & 2) != 0) {
    if (param_2 != 0) {
      temp_v1 = *(unsigned char *)(temp_v0 + 0x202) | 4;
    }
    else {
      temp_v1 = *(unsigned char *)(temp_v0 + 0x202) & 0xfb;
    }
    *(unsigned char *)(temp_v0 + 0x202) = temp_v1;
  }
  return;
}
