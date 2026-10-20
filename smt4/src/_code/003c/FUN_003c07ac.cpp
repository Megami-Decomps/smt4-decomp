/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c07ac` (_code @ 0x3c07ac, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00297468(...);
int FUN_002be624(...);
int asdMemFree(...);

/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: asdMemFree. */


unsigned int FUN_003c07ac(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0 [128];
  
  if (*(char *)(param_1 + 0xc5) != '\0') {
    if (*(int *)(param_1 + 0x18) == 2) {
      *(unsigned char *)(param_1 + 0xc5) = 0;
      return 1;
    }
  }
  else if (*(int *)(param_1 + 0x18) == 2) {
    if (*(int *)(param_1 + 200) == param_2) {
      return 1;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      asdMemFree();
      *(unsigned int *)(param_1 + 0x14) = 0;
    }
    *(int *)(param_1 + 200) = param_2;
    FUN_002be624(temp_v0,"battle/talk/TalkTone%s.mbm",*(unsigned int *)(param_2 * 4 + 0x439b70));
    FUN_00297468(temp_v0,param_1 + 0x14,0);
    *(unsigned char *)(param_1 + 0xc5) = 1;
    *(unsigned int *)(param_1 + 0x18) = 3;
    return 0;
  }
  return 0;
}

} /* extern "C" */
