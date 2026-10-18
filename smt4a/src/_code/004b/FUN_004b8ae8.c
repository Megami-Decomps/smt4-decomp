/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b8ae8` (_code @ 0x4b8ae8, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00570260; /* 0x570260 */

/* Supplied declaration required: FUN_00261a14. */
/* Supplied declaration required: FUN_004731d8. */
extern int FUN_00473244(void);
/* Supplied declaration required: FUN_0047df1c. */
/* Supplied declaration required: FUN_0047df7c. */
extern int FUN_0047dff0(int);
/* Supplied declaration required: FUN_004b7d88. */


void FUN_004b8ae8(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_00261a14(0);
    FUN_0047df7c(DAT_00570260 + 0xa8,1);
    *(unsigned int *)(param_1 + 0x2c) = 1;
    return;
  }
  if ((*(int *)(param_1 + 0x2c) == 1) && (temp_v0 = FUN_0047dff0(DAT_00570260 + 0xa8), temp_v0 != 0)) {
    FUN_0047df1c(DAT_00570260 + 0xa8);
    temp_v0 = FUN_00473244();
    if (temp_v0 == 0) {
      FUN_004731d8();
      FUN_00261a14(1);
      FUN_004b7d88(param_1);
      *(unsigned int *)(param_1 + 0x28) = 5;
      *(unsigned int *)(param_1 + 0x2c) = 0;
      return;
    }
    *(unsigned int *)(param_1 + 0x28) = 0xd;
    *(unsigned int *)(param_1 + 0x2c) = 0;
  }
  return;
}
