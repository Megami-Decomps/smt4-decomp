/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fd374` (_code @ 0x2fd374, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055a25c; /* 0x55a25c */

extern int FUN_002e9318(unsigned int *);


int FUN_002fd374(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055a25c;
  temp_v0 = FUN_002e9318(param_1 + 2);
  return temp_v0 - 8;
}
