/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00249bac` (_code @ 0x249bac, 0xc4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00293c98(void);


int FUN_00249bac(int param_1)

{
  int temp_v0;
  
  if (param_1 - 1U < 4) {
    temp_v0 = FUN_00293c98();
    *(unsigned char *)(temp_v0 + 0x49c5) = 0;
    return param_1;
  }
  if (param_1 != -1) {
    if (param_1 != 0) {
      return 1;
    }
    temp_v0 = FUN_00293c98();
    *(unsigned char *)(temp_v0 + 0x49c5) = 1;
    temp_v0 = FUN_00293c98();
    temp_v0 = *(int *)(temp_v0 + 0x49c0);
  }
  else {
    temp_v0 = FUN_00293c98();
    *(unsigned char *)(temp_v0 + 0x49c5) = 0;
    temp_v0 = FUN_00293c98();
    temp_v0 = *(int *)(temp_v0 + 0x49c0);
  }
  if (temp_v0 == 0xff) {
    return 1;
  }
  temp_v0 = FUN_00293c98();
  return *(int *)(temp_v0 + 0x49c0);
}
