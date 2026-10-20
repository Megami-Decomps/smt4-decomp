/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00389f60` (_code @ 0x389f60, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f3b0; /* 0x57f3b0 */

extern int FUN_00163e40(unsigned int);


void FUN_00389f60(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = DAT_0057f3b0;
  temp_v2 = 0;
  do {
    temp_v3 = temp_v0 + temp_v2 * 4;
    temp_v1 = FUN_00163e40(*(unsigned int *)(temp_v3 + 0x4c));
    temp_v2 = temp_v2 + 1;
    if (temp_v1 == 0) {
      *(unsigned int *)(temp_v3 + 0x4c) = 0;
    }
  } while (temp_v2 < 0x10);
  temp_v2 = 0;
  do {
    if (*(int *)(temp_v0 + temp_v2 * 4 + 0x4c) == 0) {
      *(unsigned int *)(temp_v0 + temp_v2 * 4 + 0x4c) = param_1;
      return;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x10);
  return;
}

} /* extern "C" */
