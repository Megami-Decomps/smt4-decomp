/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00259528` (_code @ 0x259528, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043ded0; /* 0x43ded0 */

extern int FUN_002bf244(unsigned int);


void FUN_00259528(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = DAT_0043ded0;
  temp_v2 = 0;
  do {
    temp_v3 = temp_v0 + temp_v2 * 4;
    temp_v1 = FUN_002bf244(*(unsigned int *)(temp_v3 + 0x34));
    temp_v2 = temp_v2 + 1;
    if (temp_v1 == 0) {
      *(unsigned int *)(temp_v3 + 0x34) = 0;
    }
  } while (temp_v2 < 10);
  temp_v2 = 0;
  do {
    if (*(int *)(temp_v0 + temp_v2 * 4 + 0x34) == 0) {
      *(unsigned int *)(temp_v0 + temp_v2 * 4 + 0x34) = param_1;
      return;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 10);
  return;
}

} /* extern "C" */
