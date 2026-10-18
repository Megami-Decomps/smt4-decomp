/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a9084` (_code @ 0x1a9084, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_001a9084(unsigned int *param_1,int *param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = (**(romwright_code **)(*param_2 + 0x48))(param_2);
  if (temp_v0 == 1) {
    temp_v1 = 0x467b18;
  }
  else if (temp_v0 == 2) {
    temp_v1 = 0x467ae0;
  }
  else if (temp_v0 == 3) {
    temp_v1 = 0x467b98;
  }
  *param_1 = 0;
  param_1[1] = temp_v1;
  param_1[2] = 0;
  return;
}
