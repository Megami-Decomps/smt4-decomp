/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003341b0` (_code @ 0x3341b0, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fd0; /* 0x588fd0 */

extern int FUN_0026264c(unsigned short);


void FUN_003341b0(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00588fd0 + 0x4));
  if (((((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) != 0) && (*(char *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x2017) != '\x0e')) &&
      ((*(char *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x2017) != '\a' ||
       (temp_v1 = FUN_0026264c(*(unsigned short *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x1390)), temp_v1 != 0)))) &&
     (*(char *)(temp_v0 + 0x2017) != '\x10')) {
    *(unsigned int *)(temp_v0 + 0x1930) = param_1;
  }
  return;
}

} /* extern "C" */
