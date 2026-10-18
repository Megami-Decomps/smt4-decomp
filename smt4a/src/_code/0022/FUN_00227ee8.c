/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00227ee8` (_code @ 0x227ee8, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_003e4070. */
/* Supplied declaration required: FUN_003fa010. */
/* Supplied declaration required: FUN_003fa83c. */
/* Supplied declaration required: FUN_00442554. */


unsigned int FUN_00227ee8(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  
  temp_v0 = FUN_00164a9c();
  if (temp_v0 == 0) {
    return 0;
  }
  piVar3 = *(int **)(temp_v0 + 0xc);
  if (*piVar3 != piVar3[1]) {
    piVar3[2] = *piVar3;
    *piVar3 = piVar3[1];
    FUN_003fa010(piVar3);
  }
  if ((char)piVar3[3] != '\0') {
    if (*(char *)((int)piVar3 + 0xe) != '\0') {
      FUN_003e4070(piVar3 + 0xb,piVar3[10]);
      *(unsigned char *)((int)piVar3 + 0xe) = 0;
      *(unsigned char *)(piVar3 + 3) = 0;
      piVar3[1] = piVar3[4];
      piVar3[4] = 0;
    }
  }
  else {
    piVar2 = piVar3;
    FUN_003fa83c();
    if (piVar2 == (int *)0x0) {
      if (*piVar3 != 0xf) {
        return 0;
      }
      return 0xffffffff;
    }
  }
  FUN_00442554(piVar3);
  if (*piVar3 != 0xf) {
    return 0;
  }
  return 0xffffffff;
}
