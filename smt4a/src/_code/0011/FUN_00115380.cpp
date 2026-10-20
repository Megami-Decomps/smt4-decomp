/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00115380` (_code @ 0x115380, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0062d88c; /* 0x62d88c */

extern int FUN_00301454(unsigned char *);


int FUN_00115380(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00301454(&DAT_0062d88c);
  return temp_v0 + 4;
}

} /* extern "C" */
