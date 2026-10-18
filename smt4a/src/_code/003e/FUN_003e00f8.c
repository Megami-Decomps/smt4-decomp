/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e00f8` (_code @ 0x3e00f8, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001801a4(void);


int FUN_003e00f8(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_001801a4();
  switch(param_1) {
  case 0:
    return (int)*(short *)(temp_v0 + 0x20);
  case 1:
    return (int)*(short *)(temp_v0 + 0x22);
  case 2:
    return (int)*(short *)(temp_v0 + 0x24);
  case 3:
    return (int)*(short *)(temp_v0 + 0x26);
  case 4:
    return (int)*(short *)(temp_v0 + 0x28);
  default:
    return 0;
  }
}
