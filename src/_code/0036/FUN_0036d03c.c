/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036d03c` (_code @ 0x36d03c, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_00421244; /* 0x421244 */


unsigned int * FUN_0036d03c(unsigned int *param_1)

{
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v1 = *(char *)((int)param_1 + 9) != '\0';
  *param_1 = (unsigned int)&DAT_00421244;
  temp_v0 = 0;
  if (temp_v1) {
    temp_v0 = param_1[7];
  }
  if (temp_v1 && temp_v0 != 0) {
    (**(romwright_code **)(*(int *)param_1[1] + 0xc))();
  }
  return param_1;
}
