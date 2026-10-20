/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00293988` (_code @ 0x293988, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0026efec(int);


unsigned int FUN_00293988(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (((*(unsigned int *)(param_1 + 0x44a8) & 0x40) == 0) && (*(int *)(param_1 + 0x2f34) - 1U >= 4)) {
    temp_v1 = 0;
    temp_v2 = temp_v1;
    do {
      temp_v0 = FUN_0026efec(temp_v1);
      temp_v1 = temp_v1 + 1;
      if (*(short *)(temp_v0 + 0x48) != 0) {
        temp_v2 = temp_v2 + 1;
      }
    } while (temp_v1 < 0xc);
    if (temp_v2 < 1) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
