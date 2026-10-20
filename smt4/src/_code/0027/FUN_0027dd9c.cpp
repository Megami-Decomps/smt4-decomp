/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027dd9c` (_code @ 0x27dd9c, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00152bec(void);
int FUN_002a775c(int);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_00152bec. */
/* Supplied declaration required: FUN_002a775c. */


void FUN_0027dd9c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + temp_v1 * 0x28;
    piVar2 = (int *)(temp_v0 + 400);
    *(unsigned int *)(temp_v0 + 0x194) = 0xffffffff;
    *(unsigned int *)(temp_v0 + 0x1b4) = 0;
    *(unsigned int *)(temp_v0 + 0x198) = 0xffffffff;
    *(unsigned int *)(temp_v0 + 0x1ac) = 0;
    if (*(int **)(temp_v0 + 0x1b0) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(temp_v0 + 0x1b0) + 4))();
      *(unsigned int *)(temp_v0 + 0x1b0) = 0;
    }
    if (*piVar2 != 0) {
      if (-1 < *(int *)(*(int *)(*piVar2 + 8) + 0xc)) {
        FUN_00152bec();
      }
      FUN_002a775c(*piVar2);
      *piVar2 = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x32);
  return;
}

} /* extern "C" */
