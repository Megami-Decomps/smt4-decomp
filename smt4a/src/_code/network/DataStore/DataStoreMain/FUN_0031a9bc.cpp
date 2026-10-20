/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031a9bc` (_code @ 0x31a9bc, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int *DAT_00588120; /* 0x588120 */

extern int FUN_00184e20(unsigned int);


unsigned int FUN_0031a9bc(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (((DAT_00588120 != (unsigned int *)0x0) && (temp_v0 = FUN_00184e20(*DAT_00588120), temp_v0 != 0)) &&
     (*(char *)(DAT_00588120[3] + 0x14) != '\0')) {
    temp_v1 = *(unsigned int *)(DAT_00588120[3] + 0x50);
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
