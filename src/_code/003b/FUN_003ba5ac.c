/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ba5ac` (_code @ 0x3ba5ac, 0xd0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00432fc8; /* 0x432fc8 */

/* Supplied declaration required: FUN_0022b130. */
/* Supplied declaration required: FUN_0022b1f8. */
extern int FUN_0027375c(int);
/* Supplied declaration required: FUN_00289770. */
/* Supplied declaration required: FUN_00289810. */
/* Supplied declaration required: FUN_00289870. */
extern int FUN_0029066c(void);


void FUN_003ba5ac(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    if ((*(int *)(param_1 + 0x2c) == 1) && (temp_v0 = FUN_0027375c(DAT_00432fc8 + 0xa8), temp_v0 != 0))
    {
      FUN_00289810(DAT_00432fc8 + 0xa8);
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
  }
  else if ((*(unsigned int *)(DAT_00432fc8 + 0x754) & 4) == 0 && (*(unsigned int *)(DAT_00432fc8 + 0x754) & 8) == 0)
  {
    FUN_0022b130(0);
    temp_v0 = DAT_00432fc8;
    *(unsigned int *)(DAT_00432fc8 + 0x754) = *(unsigned int *)(DAT_00432fc8 + 0x754) & 0xffffff8f;
    FUN_00289870(temp_v0 + 0xa8,1);
    *(unsigned int *)(param_1 + 0x2c) = 1;
    return;
  }
  return;
}
