/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001153a0` (_code @ 0x1153a0, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0062d88c; /* 0x62d88c */

extern int FUN_00301454(unsigned char *);


unsigned int FUN_001153a0(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00301454(&DAT_0062d88c);
  return *(unsigned int *)(temp_v0 + 0x34);
}

} /* extern "C" */
