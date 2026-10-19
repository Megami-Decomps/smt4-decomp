/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c39a4` (_code @ 0x2c39a4, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bbb74. */
/* Supplied declaration required: FUN_002bbbc8. */


void FUN_002c39a4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  
  temp_v0 = 0;
  if (*(unsigned int *)(param_1 + 0x528) < 2) {
    temp_v1 = '\x01';
    temp_v0 = param_1 + 0x5f8;
  }
  else if (*(unsigned int *)(param_1 + 0x528) != 2) {
    temp_v1 = '\0';
  }
  else {
    temp_v1 = '\x02';
    temp_v0 = param_1 + 0x638;
  }
  if (*(char *)(param_1 + 0x5f4) != temp_v1) {
    FUN_002bbbc8(param_1,temp_v0,0,param_1 + 0x530);
    FUN_002bbb74(*(unsigned int *)(param_1 + 0x52c),param_1 + 0x118c);
    *(char *)(param_1 + 0x5f4) = temp_v1;
  }
  return;
}
