/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f558` (_code @ 0x30f558, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030c62c(int, unsigned int *, unsigned int *);

/* Supplied declaration required: FUN_0030c62c. */
extern int FUN_0030f88a(int, int);


void FUN_0030f558(int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0030f88a(param_1 + 4,param_1 + 0xc);
  if (temp_v0 != 0) {
    FUN_0030c62c(param_1,(unsigned int *)(param_1 + 8),param_2);
  }
  else {
    *(unsigned int *)(param_1 + 4) = *param_2;
  }
  *(unsigned int *)(param_1 + 8) = *param_2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

} /* extern "C" */
