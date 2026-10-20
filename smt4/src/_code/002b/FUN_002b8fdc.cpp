/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b8fdc` (_code @ 0x2b8fdc, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_002b8fdc(int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (temp_v0 < *(int *)(param_1 + 0x37c)) {
    do {
      if (*(unsigned short *)(*(int *)(param_1 + 0x380) + temp_v0 * 0x22) == param_2) {
        return *(int *)(param_1 + 0x380) + temp_v0 * 0x22;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(int *)(param_1 + 0x37c));
  }
  return 0;
}

} /* extern "C" */
