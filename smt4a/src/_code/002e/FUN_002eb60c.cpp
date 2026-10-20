/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb60c` (_code @ 0x2eb60c, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_002eb60c(void)

{
/* irregular: irregular input(s): in_lr, in_r3; 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int in_r3;
  int in_lr;
  
  if (in_r3 >= *(unsigned char *)(in_lr - 1)) {
    temp_v0 = *(unsigned char *)(in_lr + (unsigned int)*(unsigned char *)(in_lr - 1));
  }
  else {
    temp_v0 = *(unsigned char *)(in_lr + in_r3);
  }
                    /* WARNING: Could not recover jumptable at 0x002eb620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(romwright_code *)(in_lr + (unsigned int)temp_v0 * 2))();
  return;
}

} /* extern "C" */
