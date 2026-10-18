/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9b0c` (_code @ 0x2e9b0c, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001140e8. */
extern unsigned int FUN_002e9af4(void);


void FUN_002e9b0c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002e9af4();
  FUN_001140e8(temp_v0,*(unsigned int *)(param_1 + 0x44));
  *(unsigned int *)(param_1 + 0x44) = 0;
  return;
}
