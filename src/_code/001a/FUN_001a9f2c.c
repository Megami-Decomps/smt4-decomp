/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a9f2c` (_code @ 0x1a9f2c, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_0043de68; /* 0x43de68 */

/* Supplied declaration required: FUN_002c4360. */


void FUN_001a9f2c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043de68;
  if (*(int **)(DAT_0043de68 + 4) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(DAT_0043de68 + 4) + 4))();
  }
  *(unsigned int *)(temp_v0 + 4) = 0;
  FUN_002c4360(temp_v0);
  DAT_0043de68 = 0;
  return;
}
