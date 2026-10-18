/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016b824` (_code @ 0x16b824, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0016b824(int param_1,int param_2)

{
  unsigned char *puVar1;
  
  puVar1 = (unsigned char *)(param_1 + 0x20);
  if (param_2 == 0) {
    *puVar1 = 0;
  }
  else {
    if (param_2 == 1) {
      *puVar1 = 1;
      *(unsigned char *)(param_1 + 0x21) = 0;
      *(unsigned char *)(param_1 + 0x23) = 6;
      *(unsigned char *)(param_1 + 0x25) = 7;
      return;
    }
    if (param_2 == 2) {
      *puVar1 = 1;
      *(unsigned char *)(param_1 + 0x21) = 2;
      *(unsigned char *)(param_1 + 0x23) = 6;
      *(unsigned char *)(param_1 + 0x25) = 1;
      return;
    }
    if (param_2 == 3) {
      *puVar1 = 1;
      *(unsigned char *)(param_1 + 0x21) = 0;
      *(unsigned char *)(param_1 + 0x23) = 6;
      *(unsigned char *)(param_1 + 0x25) = 1;
    }
  }
  return;
}
