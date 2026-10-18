/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310284` (_code @ 0x310284, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00120fc0. */
extern unsigned char FUN_00306d0e(int, unsigned char, unsigned int);


void FUN_00310284(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  
  if (*(char *)(param_1 + 9) != '\0') {
    temp_v1 = *(int *)(*(int *)(param_1 + 4) + 8);
    if (temp_v1 != 0) {
      temp_v0 = FUN_00306d0e(temp_v1,*(unsigned char *)(*(int *)(param_1 + 4) + 4),0xf);
      *(unsigned char *)(param_1 + 9) = temp_v0 ^ 1;
    }
    FUN_00120fc0(param_1);
  }
  return;
}
