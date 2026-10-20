/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b92d4` (_code @ 0x4b92d4, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00261a14(int);
int FUN_004731d8(void);
int FUN_0047e32c(int);
int FUN_0047e430(int, int);
int FUN_004b7d88(int);

extern int DAT_00570260; /* 0x570260 */

/* Supplied declaration required: FUN_00261a14. */
/* Supplied declaration required: FUN_004731d8. */
extern int FUN_00473244(void);
extern int FUN_0047dfec(int);
/* Supplied declaration required: FUN_0047e32c. */
/* Supplied declaration required: FUN_0047e430. */
/* Supplied declaration required: FUN_004b7d88. */


void FUN_004b92d4(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    if ((*(int *)(param_1 + 0x2c) == 1) && (temp_v0 = FUN_0047dfec(DAT_00570260 + 0xa8), temp_v0 != 0))
    {
      FUN_0047e32c(DAT_00570260 + 0xa8);
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
  }
  else if ((*(unsigned int *)(DAT_00570260 + 0x754) & 4) == 0 && (*(unsigned int *)(DAT_00570260 + 0x754) & 8) == 0)
  {
    FUN_00261a14(0);
    temp_v0 = DAT_00570260;
    *(unsigned int *)(DAT_00570260 + 0x754) = *(unsigned int *)(DAT_00570260 + 0x754) & 0xffffff8f;
    FUN_0047e430(temp_v0 + 0xa8,1);
    *(unsigned int *)(param_1 + 0x2c) = 1;
    return;
  }
  return;
}

} /* extern "C" */
