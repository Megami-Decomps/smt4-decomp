/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fd210` (_code @ 0x2fd210, 0x4e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f9f28(int *, int, int);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_002f9f28. */


unsigned short FUN_002fd210(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  romwright_code *pcVar3;
  
  (**(romwright_code **)(*param_1 + 0x18))(param_1);
  temp_v0 = *(unsigned short *)(param_1 + 5);
  if (temp_v0 == 4) {
    return 4;
  }
  if (temp_v0 < 5) {
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        return temp_v0;
      }
      pcVar3 = *(romwright_code **)(*param_1 + 0x24);
      temp_v1 = (*pcVar3)(param_1);
      if (temp_v1 != 0) {
        FUN_002f9f28(param_1,4,0);
      }
      return *(unsigned short *)(param_1 + 5);
    }
  }
  else {
    if (temp_v0 == 8) {
      return 8;
    }
    if (temp_v0 != 0x40) {
      return temp_v0;
    }
  }
  FUN_002f9f28(param_1,2,0);
  pcVar3 = *(romwright_code **)(*param_1 + 0x20);
  temp_v1 = (*pcVar3)(param_1);
  if (temp_v1 != 0) {
    FUN_002f9f28(param_1,4,0);
  }
  return *(unsigned short *)(param_1 + 5);
}

} /* extern "C" */
