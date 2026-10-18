/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001df688` (_code @ 0x1df688, 0x11c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

unsigned int FUN_001df688(unsigned int *param_1,unsigned short *param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned char temp_v3;
  unsigned char temp_v4;
  
  puVar4 = (unsigned int *)*param_1;
  temp_v1 = 0;
  do {
    temp_v2 = param_1[3] - temp_v1;
    if (temp_v2 < 0) {
      temp_v2 = temp_v2 + param_1[2];
    }
    temp_v0 = temp_v1 + 1;
    puVar4[temp_v1 + 3] = *(unsigned int *)(param_1[1] + temp_v2 * 4);
    puVar4[temp_v1 + 9] = param_1[6] * puVar4[2] + *(int *)(param_1[1] + temp_v2 * 4);
    temp_v1 = temp_v0;
  } while (temp_v0 < 6);
  temp_v1 = param_1[3];
  param_1[3] = temp_v1 + 1;
  if (temp_v1 + 1 == param_1[2]) {
    param_1[3] = 0;
  }
  param_1[4] = (unsigned int)(*param_2 >> 0xf);
  *puVar4 = (unsigned int)param_2;
  if (param_1[6] == 0x100) {
    temp_v1 = param_1[7];
    temp_v3 = temp_v1 != 1;
    if (!temp_v3) {
      temp_v1 = param_1[5];
    }
    if (temp_v3 || temp_v1 != 0) {
      return puVar4[3];
    }
    (*(romwright_code *)0x172a00)(puVar4);
  }
  if (param_1[6] == 0x200) {
    temp_v1 = param_1[7];
    temp_v3 = temp_v1 != 1;
    if (!temp_v3) {
      temp_v1 = param_1[5];
    }
    if (temp_v3 || temp_v1 != 0) {
      return puVar4[3];
    }
    (*(romwright_code *)0x179000)(puVar4);
  }
  temp_v1 = param_1[6];
  temp_v3 = temp_v1 == 0x400;
  if (temp_v3) {
    temp_v1 = param_1[7];
  }
  temp_v4 = temp_v3 && temp_v1 == 1;
  if (temp_v3 && temp_v1 == 1) {
    temp_v4 = param_1[5] == 0;
  }
  if (temp_v4) {
    (*(romwright_code *)0x16c400)(puVar4);
  }
  return puVar4[3];
}
