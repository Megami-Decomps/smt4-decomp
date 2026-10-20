/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_res_ResLookupTable_Dereference` (_code @ 0x1a3e90, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int * nw_gfx_res_ResLookupTable_Dereference(int *param_1)

{
  int temp_v0;
  
  param_1 = (int *)*param_1;
  if (*param_1 != -0x80000000) {
    if (*param_1 == 0x40000000) {
      temp_v0 = param_1[3];
      if (temp_v0 != 0) {
        return (int *)((int)(param_1 + 3) + temp_v0);
      }
    }
    param_1 = (int *)0x0;
  }
  return param_1;
}

} /* extern "C" */
