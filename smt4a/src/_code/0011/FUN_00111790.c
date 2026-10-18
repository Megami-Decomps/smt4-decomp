/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111790` (_code @ 0x111790, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_005594dc; /* 0x5594dc */

extern int FUN_001055ac(unsigned int *);
extern int FUN_002f4fd8(int);


int FUN_00111790(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_005594dc;
  temp_v0 = FUN_001055ac(param_1 + 0x16);
  temp_v0 = FUN_002f4fd8(temp_v0 - 0x50);
  return temp_v0 - 8;
}
