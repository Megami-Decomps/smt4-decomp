/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015dda4` (_code @ 0x15dda4, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_0015dda4(int param_1)

{
/* irregular: irregular input(s): in_d0, in_d1 */
  unsigned int *puVar1;
  unsigned long long in_d0;
  unsigned long long in_d1;
  
  puVar1 = (unsigned int *)(**(romwright_code **)(**(int **)(param_1 + 0x260) + 0x10))();
  if ((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0x20000000) == 0)) {
    puVar1 = (unsigned int *)0x0;
  }
  puVar1[4] = (unsigned int)in_d0;
  puVar1[3] = (unsigned int)((unsigned long long)in_d0 >> 0x20);
  puVar1[1] = (unsigned int)in_d1;
  puVar1[2] = (unsigned int)((unsigned long long)in_d1 >> 0x20);
  return;
}
