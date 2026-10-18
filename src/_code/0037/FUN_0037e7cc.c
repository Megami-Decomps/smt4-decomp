/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037e7cc` (_code @ 0x37e7cc, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b7770. */
extern unsigned int FUN_002bd630(void);


void FUN_0037e7cc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*(char *)(param_1 + 0xd) != '\0') {
    temp_v0 = FUN_002bd630();
    FUN_002b7770(temp_v0,param_1 + 0x50);
    *(unsigned char *)(param_1 + 0xd) = 0;
  }
  return;
}
