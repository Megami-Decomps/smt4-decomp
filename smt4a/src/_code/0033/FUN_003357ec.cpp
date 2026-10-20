/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003357ec` (_code @ 0x3357ec, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int btlGetMainState(void);
extern int scrGetArg(void);


unsigned int FUN_003357ec(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetArg();
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      temp_v0 = btlGetMainState();
      temp_v1 = 5;
    }
    else {
      temp_v0 = btlGetMainState();
      temp_v1 = 0xb;
    }
    *(unsigned int *)(temp_v0 + 0xa8) = temp_v1;
  }
  else {
    temp_v0 = btlGetMainState();
    *(unsigned int *)(temp_v0 + 0xa8) = 0xc;
  }
  return 1;
}

} /* extern "C" */
