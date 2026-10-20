/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00406a1c` (_code @ 0x406a1c, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(void);
int asdOperatorDelete(void);
int asdOperatorDeleteB(int);

typedef int romwright_code(...);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdOperatorDelete. */
/* Supplied declaration required: asdOperatorDeleteB. */


void FUN_00406a1c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int *piVar5;
  int temp_v3;
  
  temp_v3 = 0;
  do {
    temp_v0 = param_1 + temp_v3 * 0xc;
    piVar5 = *(int **)(temp_v0 + 0x118);
    for (piVar4 = *(int **)(temp_v0 + 0x114); piVar4 != piVar5; piVar4 = piVar4 + 1) {
      if (*piVar4 != 0) {
        asdOperatorDelete();
      }
    }
    temp_v1 = *(int *)(temp_v0 + 0x114);
    temp_v2 = *(int *)(temp_v0 + 0x118);
    if (temp_v1 != temp_v2) {
      *(unsigned int *)(temp_v0 + 0x118) = temp_v2 - ((temp_v2 - temp_v1) & 0xfffffffcU);
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 8);
  if (*(int *)(param_1 + 0xfc) != 0) {
    asdOperatorDeleteB(*(int *)(param_1 + 0xfc) - 8);
  }
  if (((*(unsigned int *)(param_1 + 4) & 1) == 0) && (*(int **)(param_1 + 8) != (int *)0x0)) {
    (**(romwright_code **)(**(int **)(param_1 + 8) + 4))();
    *(unsigned int *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0xc) = 0;
  }
  return;
}

} /* extern "C" */
