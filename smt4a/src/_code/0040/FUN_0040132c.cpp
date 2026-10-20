/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040132c` (_code @ 0x40132c, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aeafc(int);
int FUN_0040af70(void);

typedef int romwright_code(...);
extern int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_001aeafc. */
/* Supplied declaration required: FUN_0040af70. */


void FUN_0040132c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  
  if (*(int *)(DAT_0056fcc0 + 4) != 0) {
    FUN_0040af70();
    FUN_001aeafc(DAT_0056fcc0);
  }
  temp_v0 = 0;
  do {
    temp_v1 = param_1 + temp_v0 * 4;
    piVar1 = *(int **)(temp_v1 + 0x1c);
    if (piVar1 != (int *)0x0) {
      (**(romwright_code **)(*piVar1 + 4))();
      *(unsigned int *)(temp_v1 + 0x1c) = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  return;
}

} /* extern "C" */
