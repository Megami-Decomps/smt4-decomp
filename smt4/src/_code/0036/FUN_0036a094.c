/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036a094` (_code @ 0x36a094, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_004214e0; /* 0x4214e0 */


unsigned int * FUN_0036a094(unsigned int *param_1)

{
  int temp_v0;
  int temp_v1;
  
  *param_1 = (unsigned int)&DAT_004214e0;
  if (param_1[0x6e] != 0) {
    (**(romwright_code **)(*(int *)param_1[0x6d] + 0xc))();
  }
  temp_v0 = 0;
  do {
    if (param_1[temp_v0 * 3 + 4] != 0) {
      param_1[temp_v0 * 3 + 4] = 0;
    }
    temp_v1 = temp_v0 + 1;
    param_1[temp_v0 * 2 + 0x39] = 0;
    param_1[temp_v0 * 2 + 0x3a] = 0;
    temp_v0 = temp_v1;
  } while (temp_v1 < 0x10);
  return param_1;
}
