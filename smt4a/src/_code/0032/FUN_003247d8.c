/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003247d8` (_code @ 0x3247d8, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int *DAT_0057f658; /* 0x57f658 */

extern int FUN_00163e40(int);


unsigned int FUN_003247d8(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if (DAT_0057f658 != (int *)0x0) {
    temp_v0 = FUN_00163e40(DAT_0057f658[1]);
    if (temp_v0 != 0) {
      temp_v1 = 1;
    }
    else {
      if (DAT_0057f658 != (int *)0x0) {
        (**(romwright_code **)(*DAT_0057f658 + 4))();
        DAT_0057f658 = (int *)0x0;
      }
      temp_v1 = 0;
    }
  }
  return temp_v1;
}
