/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00357bc8` (_code @ 0x357bc8, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030ea58(int, unsigned int);

/* Supplied declaration required: FUN_0030ea58. */


unsigned int FUN_00357bc8(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  temp_v1 = 0;
  if (*(int *)(param_1 + 0x10) < 1) {
    return 0xffffffff;
  }
  while (piVar5 = (int *)(param_1 + 0x20 + temp_v1 * 0x10), *piVar5 != 0) {
    temp_v1 = temp_v1 + 1;
    if (*(int *)(param_1 + 0x10) <= temp_v1) {
      return 0xffffffff;
    }
  }
  param_1 = *(int *)(param_1 + 0x20 + temp_v1 * 0x10 + 0xc) + param_1;
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (piVar5[2] < 1) {
    temp_v3 = 0;
  }
  else {
    temp_v3 = piVar5[2] & 1;
    temp_v2 = 0;
    if (temp_v3 != 0) {
      do {
        temp_v1 = param_1 + temp_v2 * 0x20;
        FUN_0030ea58(temp_v1,param_2);
        if (temp_v1 == 0) {
          return temp_v2;
        }
        temp_v2 = temp_v2 + 1;
      } while ((int)temp_v2 < (int)temp_v3);
    }
  }
  if ((int)temp_v3 < piVar5[2]) {
    do {
      temp_v0 = param_1 + temp_v3 * 0x20;
      temp_v1 = temp_v0;
      FUN_0030ea58(temp_v0,param_2);
      if (temp_v1 == 0) {
        return temp_v3;
      }
      temp_v0 = temp_v0 + 0x20;
      FUN_0030ea58(temp_v0,param_2);
      if (temp_v0 == 0) {
        return temp_v3 + 1;
      }
      temp_v3 = temp_v3 + 2;
    } while ((int)temp_v3 < piVar5[2]);
  }
  return 0xffffffff;
}

} /* extern "C" */
