/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012086c` (_code @ 0x12086c, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055ae1c; /* 0x55ae1c */

extern int FUN_002e9318(int);
extern int FUN_002eda5a(unsigned int *);


int FUN_0012086c(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055ae1c;
  temp_v0 = FUN_002eda5a(param_1 + 8);
  temp_v0 = FUN_002e9318(temp_v0 - 8);
  temp_v0 = FUN_002e9318(temp_v0 - 8);
  temp_v0 = FUN_002e9318(temp_v0 - 8);
  return temp_v0 - 8;
}
