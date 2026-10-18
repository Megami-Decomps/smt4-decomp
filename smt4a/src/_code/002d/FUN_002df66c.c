/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002df66c` (_code @ 0x2df66c, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0018206c(unsigned int, int);
/* Supplied declaration required: FUN_003210bc. */


unsigned int FUN_002df66c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = *(int *)(param_1 + 0x10);
  if (temp_v3 != 0) {
    temp_v1 = 0;
    temp_v2 = temp_v1;
    do {
      temp_v0 = FUN_0018206c(0xc,temp_v1);
      if (temp_v0 != 0) {
        temp_v2 = temp_v2 + 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 6);
    temp_v1 = 0;
    do {
      temp_v0 = FUN_0018206c(0xd,temp_v1);
      if (temp_v0 != 0) {
        temp_v2 = temp_v2 + 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 5);
    if (temp_v2 >= 11) {
      FUN_003210bc(temp_v3,0);
      return 0;
    }
  }
  return 0;
}
