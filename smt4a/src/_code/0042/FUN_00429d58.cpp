/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00429d58` (_code @ 0x429d58, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

unsigned int FUN_00429d58(int *param_1)

{
  unsigned int temp_v0;
  
  if (param_1 == (int *)0x0) {
    temp_v0 = 0xc8804465;
  }
  else {
    (**(romwright_code **)(*param_1 + 0x30))();
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
