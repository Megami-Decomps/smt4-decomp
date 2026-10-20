/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fnd_detail_GetNextListObject` (_code @ 0x14f6ec, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int nn_fnd_detail_GetNextListObject(unsigned int *param_1,int param_2)

{
  unsigned int temp_v0;
  
  if (param_2 == 0) {
    temp_v0 = *param_1;
  }
  else {
    temp_v0 = *(unsigned int *)((unsigned int)*(unsigned short *)((int)param_1 + 10) + param_2 + 4);
  }
  return temp_v0;
}

} /* extern "C" */
