/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c31ec` (_code @ 0x3c31ec, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003283ac. */
extern int FUN_0032faf4(void);
/* Supplied declaration required: FUN_0037c678. */


unsigned int FUN_003c31ec(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_003283ac(*(unsigned int *)(*(int *)(param_1 + 4) + 0x75d0));
  }
  else {
    temp_v0 = FUN_0032faf4();
    if (temp_v0 == 0) {
      FUN_0037c678(0);
    }
    FUN_003283ac();
  }
  return 1;
}
