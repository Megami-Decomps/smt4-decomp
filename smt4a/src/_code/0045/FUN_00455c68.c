/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00455c68` (_code @ 0x455c68, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

unsigned int * FUN_00455c68(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  
  *param_1 = param_2;
  temp_v0 = param_1[0x11];
  param_1[0x12] = temp_v0;
  piVar1 = (int *)param_1[0x10];
  if (piVar1 != (int *)0x0) {
    temp_v0 = param_1[0x11];
  }
  if (piVar1 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
    temp_v0 = temp_v1;
  }
  param_1[7] = param_1[6];
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    temp_v0 = param_1[6];
  }
  if (piVar1 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
  }
  return param_1;
}
