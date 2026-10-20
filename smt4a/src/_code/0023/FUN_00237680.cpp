/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00237680` (_code @ 0x237680, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(int);

typedef int romwright_code(...);
extern int DAT_0057f390; /* 0x57f390 */

/* Supplied declaration required: FUN_0019a5a0. */


void FUN_00237680(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057f390;
  if (*(int **)(DAT_0057f390 + 4) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(DAT_0057f390 + 4) + 4))();
  }
  *(unsigned int *)(temp_v0 + 4) = 0;
  FUN_0019a5a0(temp_v0);
  DAT_0057f390 = 0;
  return;
}

} /* extern "C" */
