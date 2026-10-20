/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040ddec` (_code @ 0x40ddec, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_0040ddec(int param_1,int param_2)

{
  char *pcVar1;
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  temp_v1 = *(int *)(param_1 + 8);
  while (temp_v1 != 0) {
    pcVar1 = (char *)(temp_v1 + 4);
    temp_v1 = *(int *)(temp_v1 + 0xc);
    if (*pcVar1 == param_2) {
      temp_v0 = temp_v0 + 1;
    }
  }
  return temp_v0;
}

} /* extern "C" */
