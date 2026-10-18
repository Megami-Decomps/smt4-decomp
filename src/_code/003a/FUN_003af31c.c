/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003af31c` (_code @ 0x3af31c, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00439ca8; /* 0x439ca8 */

extern int FUN_0028c850(int);
extern int FUN_0031f6a0(int);


unsigned int FUN_003af31c(void)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = DAT_00439ca8;
  temp_v0 = FUN_0028c850(DAT_00439ca8 + 8);
  if ((temp_v0 == 0) || (temp_v1 = FUN_0031f6a0(temp_v1 + 0x2200), temp_v1 == 0)) {
    temp_v2 = 0;
  }
  else {
    temp_v2 = 1;
  }
  return temp_v2;
}
