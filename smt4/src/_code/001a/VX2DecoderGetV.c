/* NON_MATCHING: romwright 0.5.0 decompilation of `VX2DecoderGetV` (_code @ 0x1ae408, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int VX2DecoderGetV(int *param_1,int param_2)

{
  return param_1[6] * *(int *)(*param_1 + 8) + param_2 + ((unsigned int)param_1[6] >> 1);
}
