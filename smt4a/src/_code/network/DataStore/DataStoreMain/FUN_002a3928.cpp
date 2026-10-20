/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a3928` (_code @ 0x2a3928, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int *DAT_00588120; /* 0x588120 */

extern int FUN_00184e20(unsigned int);


int FUN_002a3928(int param_1)

{
  int temp_v0;
  
  if ((((DAT_00588120 != (unsigned int *)0x0) && (temp_v0 = FUN_00184e20(*DAT_00588120), temp_v0 != 0)) &&
      (*(char *)(DAT_00588120[3] + 0x14) != '\0')) && (param_1 < 10)) {
    return *(int *)(DAT_00588120[3] + 0x48) + param_1 * 100;
  }
  return 0;
}

} /* extern "C" */
