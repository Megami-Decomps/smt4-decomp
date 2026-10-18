/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004813bc` (_code @ 0x4813bc, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001bce18(void);


unsigned int FUN_004813bc(int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = FUN_001bce18();
  temp_v0 = (int)(param_1 - 1U) >> 3;
  if (temp_v0 >= 0xfc) {
    temp_v2 = 0;
  }
  else {
    temp_v2 = 0;
    if (((1 << ((param_1 - 1U) & 7)) & 0xffU & (unsigned int)*(unsigned char *)(temp_v1 + temp_v0 + 0xfbc)) != 0) {
      temp_v2 = 1;
    }
  }
  return temp_v2;
}
