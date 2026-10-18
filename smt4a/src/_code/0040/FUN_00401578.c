/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00401578` (_code @ 0x401578, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_003fdae8(unsigned int);
/* Supplied declaration required: FUN_003fe86c. */


void FUN_00401578(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = 0;
  do {
    temp_v0 = *(int *)(param_1 + temp_v1 * 4 + 0x1c);
    if (temp_v0 != 0) {
      temp_v2 = *(unsigned int *)(temp_v0 + 4);
      temp_v0 = FUN_003fdae8(temp_v2);
      if (param_2 < temp_v0) {
        FUN_003fe86c(temp_v2,param_2,2);
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  return;
}
