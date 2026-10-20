/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001aa030` (_code @ 0x1aa030, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_005b4400; /* 0x5b4400 */


void FUN_001aa030(int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v1 = DAT_005b4400;
  puVar3 = (unsigned int *)(DAT_005b4400 + 0x6a0);
  if (param_1 == 0x10) {
    *puVar3 = 0;
    *(unsigned int *)(temp_v1 + 0x6e8) = 0;
    return;
  }
  puVar4 = (unsigned int *)(DAT_005b4400 + 0x458 + param_1 * 0x18);
  temp_v0 = *puVar4;
  puVar3[param_1 + 1] = temp_v0;
  puVar3[param_1 + 0x13] = temp_v0;
  temp_v1 = puVar4[2];
  temp_v3 = temp_v1 == 0x1400;
  if (!temp_v3) {
    temp_v1 = temp_v1 - 0x1401;
    temp_v3 = temp_v1 == 0;
  }
  if (temp_v3) {
    temp_v1 = 1;
  }
  else if (temp_v1 == 1) {
    temp_v1 = 2;
  }
  else if (temp_v1 == 5) {
    temp_v1 = 4;
  }
  else {
    temp_v1 = 0;
  }
  temp_v2 = puVar4[3];
  if (temp_v2 == 0) {
    temp_v2 = puVar4[1] * temp_v1;
  }
  puVar3[param_1 + 0x23] = temp_v2;
  return;
}

} /* extern "C" */
