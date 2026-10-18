/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a04a0` (_code @ 0x3a04a0, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002990bc(short);
/* Supplied declaration required: FUN_002c0ba8. */


unsigned int FUN_003a04a0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  
  if (*(short *)(param_1 + 2) != 0) {
    temp_v1 = FUN_002c0ba8();
    if (temp_v1 == 0) {
      return 0;
    }
    temp_v0 = *(short *)(param_1 + 4);
    if (temp_v0 != 0) {
      temp_v1 = FUN_002c0ba8(temp_v0);
      if (temp_v1 != 0) {
        return 0;
      }
    }
  }
  else {
    temp_v0 = *(short *)(param_1 + 4);
    if (temp_v0 == 0) {
      temp_v0 = *(short *)(param_1 + 6);
      if (temp_v0 == 0) {
        return 1;
      }
      temp_v1 = FUN_002990bc(temp_v0);
      if (temp_v1 != 0) {
        return 2;
      }
      return 0;
    }
    temp_v1 = FUN_002c0ba8(temp_v0);
    if (temp_v1 != 0) {
      return 0;
    }
  }
  temp_v0 = *(short *)(param_1 + 6);
  if (temp_v0 == 0) {
    return 2;
  }
  temp_v1 = FUN_002990bc(temp_v0);
  if (temp_v1 != 0) {
    return 2;
  }
  return 0;
}
