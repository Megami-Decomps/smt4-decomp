/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ed46` (_code @ 0x10ed46, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002e6e26. */


void FUN_0010ed46(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  romwright_code *pcVar1;
  
  do {
    (**(romwright_code **)(*param_1 + 0x30))(param_1);
    if (*(char *)((int)param_1 + 0x22) != '\x04') {
      return;
    }
    FUN_002e6e26();
    if ((param_1[0x15] & 1U) != 0) {
      pcVar1 = *(romwright_code **)(*(int *)((param_1[0x15] >> 1) + (int)param_1) + param_1[0x14]);
    }
    else {
      pcVar1 = (romwright_code *)param_1[0x14];
    }
    (*pcVar1)();
    param_1[0x12] = param_1[0x12] + 1;
  } while (*(char *)((int)param_1 + 0x22) == '\x04');
  return;
}
