/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024745c` (_code @ 0x24745c, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0028ca7c(void);
/* Supplied declaration required: FUN_0028cabc. */
extern int FUN_0028cba8(unsigned int);
/* Supplied declaration required: FUN_002c0a6c. */


void FUN_0024745c(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_002c0a6c();
  }
  temp_v0 = FUN_0028cba8(param_2);
  if (temp_v0 != 0) {
    FUN_0028cabc();
  }
  else {
    param_2 = FUN_0028ca7c();
  }
  *(unsigned int *)(param_1 + 4) = param_2;
  return;
}
