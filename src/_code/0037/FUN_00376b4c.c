/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00376b4c` (_code @ 0x376b4c, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00379bcc. */
extern int FUN_00379c14(int);


void FUN_00376b4c(int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = param_2;
  temp_v0 = FUN_00379c14(param_2);
  if (temp_v0 != 0) {
    FUN_00379bcc(*param_1);
  }
  *(int **)(*param_1 + 0xc) = param_1;
  return;
}
