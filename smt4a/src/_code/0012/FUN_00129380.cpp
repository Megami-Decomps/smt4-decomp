/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129380` (_code @ 0x129380, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055909c; /* 0x55909c */

extern int FUN_002eb624(int);
extern int FUN_002f8760(unsigned int *);


int FUN_00129380(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055909c;
  temp_v0 = FUN_002f8760(param_1 + 0xd);
  temp_v0 = FUN_002eb624(temp_v0 - 0x30);
  return temp_v0 - 4;
}

} /* extern "C" */
