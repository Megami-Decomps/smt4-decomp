/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036ce2c` (_code @ 0x36ce2c, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_004215fc; /* 0x4215fc */


unsigned int * FUN_0036ce2c(unsigned int *param_1)

{
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v1 = *(char *)((int)param_1 + 9) != '\0';
  *param_1 = (unsigned int)&DAT_004215fc;
  temp_v0 = 0;
  if (temp_v1) {
    temp_v0 = param_1[7];
  }
  if (temp_v1 && temp_v0 != 0) {
    (**(romwright_code **)(*(int *)param_1[1] + 0xc))();
  }
  return param_1;
}

} /* extern "C" */
