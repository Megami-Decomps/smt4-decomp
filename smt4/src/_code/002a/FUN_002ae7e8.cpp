/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ae7e8` (_code @ 0x2ae7e8, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c415c(...);

extern int DAT_0044ea28; /* 0x44ea28 */

/* Supplied declaration required: FUN_002c415c. */


void FUN_002ae7e8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int *puVar4;
  
  puVar4 = (unsigned int *)(DAT_0044ea28 + param_1 * 0x18);
  if (puVar4[1] != 0) {
    temp_v0 = *(int *)(puVar4[1] + 4);
    while (temp_v0 != 0) {
      temp_v1 = *(int *)(temp_v0 + 0x10);
      FUN_002c415c(*(unsigned int *)(temp_v0 + 0xc));
      FUN_002c415c(temp_v0);
      temp_v0 = temp_v1;
    }
    FUN_002c415c(*(unsigned int *)puVar4[1]);
    FUN_002c415c(puVar4[1]);
    puVar4[1] = 0;
  }
  piVar2 = (int *)*puVar4;
  if (*piVar2 != 0) {
    FUN_002c415c();
    *piVar2 = 0;
  }
  if (piVar2[2] != 0) {
    FUN_002c415c();
    piVar2[2] = 0;
  }
  FUN_002c415c(piVar2);
  *puVar4 = 0;
  return;
}

} /* extern "C" */
