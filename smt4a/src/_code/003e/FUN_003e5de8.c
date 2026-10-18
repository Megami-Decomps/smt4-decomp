/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e5de8` (_code @ 0x3e5de8, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_00557af0; /* 0x557af0 */


unsigned int * FUN_003e5de8(unsigned int *param_1)

{
  int temp_v0;
  
  temp_v0 = 0;
  *param_1 = (unsigned int)&DAT_00557af0;
  do {
    if ((int *)param_1[temp_v0 * 0x17 + 9] != (int *)0x0) {
      (**(romwright_code **)(*(int *)param_1[temp_v0 * 0x17 + 9] + 4))();
      param_1[temp_v0 * 0x17 + 9] = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  if ((int *)param_1[2] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[2] + 4))();
    param_1[2] = 0;
  }
  return param_1;
}
