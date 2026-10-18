/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00324b14` (_code @ 0x324b14, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00580238; /* 0x580238 */


void FUN_00324b14(int param_1)

{
  int temp_v0;
  
  temp_v0 = DAT_00580238;
  if (*(int *)(DAT_00580238 + 0xcc) != param_1) {
    *(int *)(DAT_00580238 + 0xcc) = param_1;
    *(unsigned int *)(temp_v0 + 0xd0) = 0;
    *(unsigned int *)(temp_v0 + 0xd4) = 0;
  }
  return;
}
