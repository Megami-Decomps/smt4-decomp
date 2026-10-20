/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003341b0` (_code @ 0x3341b0, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588fd4; /* 0x588fd4 */

extern int FUN_0026264c(unsigned short);


void FUN_003341b0(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_00588fd4;
  if ((((DAT_00588fd4 != 0) && (*(char *)(DAT_00588fd4 + 0x2017) != '\x0e')) &&
      ((*(char *)(DAT_00588fd4 + 0x2017) != '\a' ||
       (temp_v1 = FUN_0026264c(*(unsigned short *)(DAT_00588fd4 + 0x1390)), temp_v1 != 0)))) &&
     (*(char *)(temp_v0 + 0x2017) != '\x10')) {
    *(unsigned int *)(temp_v0 + 0x1930) = param_1;
  }
  return;
}

} /* extern "C" */
