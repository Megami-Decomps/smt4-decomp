/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ba38c` (_code @ 0x3ba38c, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022af9c(int);
int FUN_0022b064(int);
int gameJumpRequestClear(void);
int FUN_002895a8(int);
int FUN_00289608(int, int);

extern int g_aocMain; /* 0x432fc8 */

/* Supplied declaration required: FUN_0022af9c. */
/* Supplied declaration required: FUN_0022b064. */
extern int FUN_002734ec(int);
/* Supplied declaration required: gameJumpRequestClear. */
/* Supplied declaration required: FUN_002895a8. */
/* Supplied declaration required: FUN_00289608. */
extern int gameJumpRequestIsPending(void);


void FUN_003ba38c(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    if ((*(int *)(param_1 + 0x2c) == 1) && (temp_v0 = FUN_002734ec(g_aocMain + 0xa8), temp_v0 != 0))
    {
      FUN_002895a8(g_aocMain + 0xa8);
      temp_v0 = gameJumpRequestIsPending();
      if (temp_v0 == 0) {
        gameJumpRequestClear();
        FUN_0022af9c(1);
        FUN_0022b064(param_1);
        *(unsigned int *)(param_1 + 0x28) = 5;
        *(unsigned int *)(param_1 + 0x2c) = 0;
        return;
      }
      *(unsigned int *)(param_1 + 0x28) = 0xd;
      *(unsigned int *)(param_1 + 0x2c) = 0;
    }
  }
  else if ((*(unsigned int *)(g_aocMain + 0x754) & 4) == 0 && (*(unsigned int *)(g_aocMain + 0x754) & 8) == 0)
  {
    FUN_0022af9c(0);
    temp_v0 = g_aocMain;
    *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xffffff8f;
    FUN_00289608(temp_v0 + 0xa8,1);
    *(unsigned int *)(param_1 + 0x2c) = 1;
    return;
  }
  return;
}

} /* extern "C" */
