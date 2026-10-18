/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b9d68` (_code @ 0x3b9d68, 0xb4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00432fc8; /* 0x432fc8 */

/* Supplied declaration required: FUN_0022b130. */
/* Supplied declaration required: FUN_0022b1f8. */
/* Supplied declaration required: FUN_0027368c. */
/* Supplied declaration required: FUN_002736fc. */
extern int FUN_00273760(int);
/* Supplied declaration required: FUN_00289770. */
extern int FUN_0029066c(void);


void FUN_003b9d68(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_0022b130(0);
    FUN_0027368c(DAT_00432fc8 + 0xa8,1);
    *(unsigned int *)(param_1 + 0x2c) = 1;
    return;
  }
  if ((*(int *)(param_1 + 0x2c) == 1) && (temp_v0 = FUN_00273760(DAT_00432fc8 + 0xa8), temp_v0 != 0)) {
    FUN_002736fc(DAT_00432fc8 + 0xa8);
    temp_v0 = FUN_0029066c();
    if (temp_v0 == 0) {
      FUN_00289770();
      FUN_0022b130(1);
      FUN_0022b1f8(param_1);
      *(unsigned int *)(param_1 + 0x28) = 5;
      *(unsigned int *)(param_1 + 0x2c) = 0;
      return;
    }
    *(unsigned int *)(param_1 + 0x28) = 0xd;
    *(unsigned int *)(param_1 + 0x2c) = 0;
  }
  return;
}
