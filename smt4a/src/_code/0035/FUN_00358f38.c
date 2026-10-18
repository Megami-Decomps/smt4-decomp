/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00358f38` (_code @ 0x358f38, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0059dbc4; /* 0x59dbc4 */


void FUN_00358f38(int param_1)

{
  int temp_v0;
  
  temp_v0 = 0;
  do {
    if (*(int *)(DAT_0059dbc4 + temp_v0 * 4) == param_1) {
      *(unsigned int *)(DAT_0059dbc4 + temp_v0 * 4) = 0;
      return;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x20);
  return;
}
