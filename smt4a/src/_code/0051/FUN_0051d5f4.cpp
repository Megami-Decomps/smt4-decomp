/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0051d5f4` (_code @ 0x51d5f4, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b6668(int, int *);
int FUN_004658a8(int *);
int nw_ut_internal_LinkListImpl_insert(int, int, int *);

/* Supplied declaration required: FUN_001b6668. */
extern int FUN_0046588c(int *);
/* Supplied declaration required: FUN_004658a8. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


void FUN_0051d5f4(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  
  piVar2 = *(int **)(param_1 + 0x24);
  if (piVar2 != (int *)(param_1 + 0x24)) {
    do {
      piVar3 = (int *)*piVar2;
      temp_v0 = FUN_0046588c(piVar2 + -0x20);
      if (temp_v0 == 0) {
        FUN_004658a8(piVar2 + -0x20);
        FUN_001b6668(param_1 + 0x20,piVar2);
        nw_ut_internal_LinkListImpl_insert(param_1 + 0x14,param_1 + 0x18,piVar2);
      }
      piVar2 = piVar3;
    } while (piVar3 != (int *)(param_1 + 0x24));
  }
  return;
}

} /* extern "C" */
