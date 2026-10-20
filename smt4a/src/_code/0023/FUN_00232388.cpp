/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00232388` (_code @ 0x232388, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int btlGetMainState(void);


int FUN_00232388(int param_1)

{
  int temp_v0;
  
  if (param_1 - 1U < 4) {
    temp_v0 = btlGetMainState();
    *(unsigned char *)(temp_v0 + 0x4cd1) = 0;
    return param_1;
  }
  if (param_1 != -1) {
    if (param_1 != 0) {
      return 1;
    }
    temp_v0 = btlGetMainState();
    *(unsigned char *)(temp_v0 + 0x4cd1) = 1;
    temp_v0 = btlGetMainState();
    temp_v0 = *(int *)(temp_v0 + 0x4ccc);
  }
  else {
    temp_v0 = btlGetMainState();
    *(unsigned char *)(temp_v0 + 0x4cd1) = 0;
    temp_v0 = btlGetMainState();
    temp_v0 = *(int *)(temp_v0 + 0x4ccc);
  }
  if (temp_v0 == 0xff) {
    return 1;
  }
  temp_v0 = btlGetMainState();
  return *(int *)(temp_v0 + 0x4ccc);
}

} /* extern "C" */
