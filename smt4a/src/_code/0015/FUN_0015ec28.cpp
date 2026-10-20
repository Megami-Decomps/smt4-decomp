/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015ec28` (_code @ 0x15ec28, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00175c68(int *);
int FUN_001915c4(int, unsigned int, unsigned int);

/* Supplied declaration required: FUN_00175c68. */
/* Supplied declaration required: FUN_001915c4. */


void FUN_0015ec28(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    piVar1 = *(int **)(param_1 + 8);
    if (*(int **)(param_1 + 8) != (int *)(param_1 + 8)) {
      do {
        piVar2 = (int *)*piVar1;
        FUN_00175c68(piVar1 + -0x6c);
        piVar1 = piVar2;
      } while (piVar2 != (int *)(param_1 + 8));
    }
    FUN_001915c4(param_1,*(unsigned int *)(param_1 + 0x18),*(unsigned int *)(param_1 + 0x1c));
    *(unsigned char *)(param_1 + 0x10) = 0;
  }
  return;
}

} /* extern "C" */
