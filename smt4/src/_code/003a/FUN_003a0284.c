/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a0284` (_code @ 0x3a0284, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00298e20(short);
/* Supplied declaration required: FUN_002c09d0. */


unsigned int FUN_003a0284(int param_1)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  
  if (*(short *)(param_1 + 2) != 0) {
    temp_v1 = FUN_002c09d0();
    if (temp_v1 == 0) {
      return 0;
    }
    temp_v0 = *(short *)(param_1 + 4);
    if (temp_v0 != 0) {
      temp_v1 = FUN_002c09d0(temp_v0);
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
      temp_v1 = FUN_00298e20(temp_v0);
      if (temp_v1 != 0) {
        return 2;
      }
      return 0;
    }
    temp_v1 = FUN_002c09d0(temp_v0);
    if (temp_v1 != 0) {
      return 0;
    }
  }
  temp_v0 = *(short *)(param_1 + 6);
  if (temp_v0 == 0) {
    return 2;
  }
  temp_v1 = FUN_00298e20(temp_v0);
  if (temp_v1 != 0) {
    return 2;
  }
  return 0;
}
