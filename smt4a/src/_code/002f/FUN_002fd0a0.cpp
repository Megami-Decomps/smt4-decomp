/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fd0a0` (_code @ 0x2fd0a0, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0031011e(...);

/* Supplied declaration required: FUN_0031011e. */
extern unsigned int aeabi_uidivmod(int, unsigned int);


int FUN_002fd0a0(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_0031011e(param_1,5);
  }
  temp_v0 = *(int *)(param_1 + 0x18) + param_2;
  if (!(temp_v0 < *(unsigned int *)(param_1 + 0x14))) {
    temp_v1 = aeabi_uidivmod(temp_v0 * 0xf,10);
    FUN_0031011e(param_1,temp_v1);
  }
  if (*(unsigned int *)(param_1 + 0x10) <= param_2) {
    *(unsigned int *)(param_1 + 0x10) = param_2 + 1;
  }
  return *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x18) + param_2;
}

} /* extern "C" */
