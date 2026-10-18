/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003014de` (_code @ 0x3014de, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e76b6. */


unsigned int FUN_003014de(int param_1)

{
/* irregular: 1 native warning(s); review required */
  char *pcVar1;
  int temp_v0;
  
  pcVar1 = (char *)FUN_002e76b6(*(unsigned int *)(param_1 + 8));
  if ((*pcVar1 == -0xb) &&
     (temp_v0 = FUN_002e76b6(*(unsigned int *)(param_1 + 8)), *(unsigned char *)(temp_v0 + 1) == 0xd0)) {
    return 1;
  }
  return 0;
}
