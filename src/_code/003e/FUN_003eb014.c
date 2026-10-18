/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eb014` (_code @ 0x3eb014, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b7770. */
extern unsigned int FUN_002bd630(void);


void FUN_003eb014(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if ((((*(char *)(param_1 - 0x38) != '\0') && (param_2 <= *(unsigned int *)(param_1 + 0x20))) &&
      (*(unsigned int *)(param_1 + 0x20) <= param_3)) && (*(char *)(param_1 - 0x37) != '\0')) {
    temp_v0 = FUN_002bd630();
    FUN_002b7770(temp_v0,param_1 + 0xc);
    *(unsigned char *)(param_1 - 0x37) = 0;
  }
  return;
}
