/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123a4e` (_code @ 0x123a4e, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int *FUN_0030f044(int, unsigned int);


unsigned int FUN_00123a4e(int param_1)

{
  int *piVar1;
  int temp_v0;
  
  if (((*(int *)(param_1 + 8) != 0) &&
      (piVar1 = (int *)FUN_0030f044(param_1,0xb), piVar1 != (int *)0x0)) &&
     (temp_v0 = (**(romwright_code **)(*piVar1 + 0x28))(), temp_v0 != 0)) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
