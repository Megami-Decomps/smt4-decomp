/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00308c98` (_code @ 0x308c98, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433158; /* 0x433158 */

extern unsigned int FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


int FUN_00308c98(unsigned int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c0ec4(0x23,4);
  temp_v1 = FUN_002c0e9c();
  temp_v2 = FUN_002c0e4c(temp_v0);
  if (param_1 < temp_v2) {
    temp_v1 = temp_v1 + param_1 * 0x1c;
  }
  else if (param_1 < *(int *)(DAT_00433158 + 0x404) + temp_v2) {
    temp_v1 = *(int *)(DAT_00433158 + 0x408) + (param_1 - temp_v2) * 0x1c;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}
