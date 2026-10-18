/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011ef68` (_code @ 0x11ef68, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055ac60; /* 0x55ac60 */

extern int FUN_002ea2d2(unsigned int *);


int FUN_0011ef68(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055ac60;
  temp_v0 = FUN_002ea2d2(param_1 + 4);
  return temp_v0 - 0x10;
}
