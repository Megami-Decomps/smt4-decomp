/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00409718` (_code @ 0x409718, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00187a84(int, int, int, int);
int FUN_00187d90(unsigned int, int);

/* Supplied declaration required: FUN_00187a84. */
/* Supplied declaration required: FUN_00187d90. */


void FUN_00409718(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  
  temp_v0 = 0;
  if (*(unsigned int *)(param_1 + 0x52c) < 2) {
    temp_v1 = '\x03';
    temp_v0 = param_1 + 0x67c;
  }
  else if (*(unsigned int *)(param_1 + 0x52c) != 2) {
    temp_v1 = '\0';
  }
  else {
    temp_v1 = '\x04';
    temp_v0 = param_1 + 0x6bc;
  }
  if (*(char *)(param_1 + 0x5f8) != temp_v1) {
    FUN_00187a84(param_1,temp_v0,0,param_1 + 0x534);
    FUN_00187d90(*(unsigned int *)(param_1 + 0x530),param_1 + 0x1198);
    *(char *)(param_1 + 0x5f8) = temp_v1;
  }
  return;
}

} /* extern "C" */
