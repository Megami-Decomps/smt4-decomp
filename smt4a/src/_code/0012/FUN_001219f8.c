/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001219f8` (_code @ 0x1219f8, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e7674. */
extern int FUN_002e76b6(void);


void FUN_001219f8(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(*(int *)(param_2 + 8) + 0x10);
  temp_v0 = FUN_002e76b6();
  FUN_002e7674(param_1,temp_v0 + 4,temp_v1 - 4);
  return;
}
