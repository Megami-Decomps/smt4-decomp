/* NON_MATCHING: romwright 0.5.0 decompilation of `memCopyWords` (_code @ 0x2b77b0, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void memCopyWords(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  if (param_3 >= 4) {
    puVar1 = param_1 + -1;
    puVar2 = param_2 + -1;
    if ((int)(param_3 << 0x1d) < 0) {
      *param_2 = *param_1;
      puVar1 = param_1;
      puVar2 = param_2;
    }
    for (param_3 = param_3 >> 3; param_3 != 0; param_3 = param_3 - 1) {
      puVar2[1] = puVar1[1];
      puVar1 = puVar1 + 2;
      puVar2 = puVar2 + 2;
      *puVar2 = *puVar1;
    }
  }
  return;
}

} /* extern "C" */
