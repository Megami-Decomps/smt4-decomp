/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a68dc` (_code @ 0x3a68dc, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_00588120; /* 0x588120 */

extern int FUN_00184e20(unsigned int);


unsigned int FUN_003a68dc(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (((DAT_00588120 == (unsigned int *)0x0) || (temp_v0 = FUN_00184e20(*DAT_00588120), temp_v0 == 0)) ||
     (*(int *)DAT_00588120[3] != 0xe)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}
