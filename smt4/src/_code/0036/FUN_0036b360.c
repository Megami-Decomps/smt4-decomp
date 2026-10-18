/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036b360` (_code @ 0x36b360, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_004215ac; /* 0x4215ac */


unsigned int * FUN_0036b360(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_004215ac;
  temp_v0 = 0;
  if (*(char *)(param_1 + 2) != '\0') {
    temp_v0 = param_1[3];
  }
  if (*(char *)(param_1 + 2) != '\0' && temp_v0 != 0) {
    (**(romwright_code **)(*(int *)param_1[1] + 0xc))();
  }
  return param_1;
}
