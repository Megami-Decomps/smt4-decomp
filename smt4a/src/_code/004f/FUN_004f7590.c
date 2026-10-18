/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f7590` (_code @ 0x4f7590, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_001aea28. */


void FUN_004f7590(int param_1)

{
/* irregular: 1 native warning(s); review required */
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
      FUN_001aea28(DAT_0056fcc0,*(unsigned int *)(*piVar2 + 4));
      if ((int *)*piVar2 != (int *)0x0) {
        (**(romwright_code **)(*(int *)*piVar2 + 4))();
        *piVar2 = 0;
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x32);
  return;
}
