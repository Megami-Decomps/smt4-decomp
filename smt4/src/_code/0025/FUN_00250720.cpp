/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00250720` (_code @ 0x250720, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned short FUN_00245cc0(unsigned int);


void FUN_00250720(int param_1)

{
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00245cc0(1);
  temp_v1 = 0;
  do {
    *(unsigned short *)(*(int *)(param_1 + 0x1fc0) + temp_v1 * 0x288 + 0x74) = temp_v0;
    if (temp_v1 < 0x6d) {
      temp_v2 = *(int *)(param_1 + 0x1e98) + temp_v1 * 0x114;
      *(unsigned int *)(temp_v2 + 0x38) = 0;
      *(unsigned int *)(temp_v2 + 0x34) = 0;
      *(unsigned int *)(temp_v2 + 0x30) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x6d);
  return;
}

} /* extern "C" */
