/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ca9c` (_code @ 0x30ca9c, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055a9e8; /* 0x55a9e8 */
extern unsigned char DAT_0055ad7c; /* 0x55ad7c */

extern int FUN_003038fc(unsigned int *, unsigned int);


void FUN_0030ca9c(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055ad7c;
  *(unsigned char *)(param_1 + 1) = 0;
  temp_v0 = FUN_003038fc(param_1 + 4,0);
  *(unsigned char **)(temp_v0 - 0x10) = &DAT_0055a9e8;
  return;
}

} /* extern "C" */
