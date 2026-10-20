/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030d134` (_code @ 0x30d134, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055a884; /* 0x55a884 */
extern unsigned char DAT_0055ad28; /* 0x55ad28 */

extern int FUN_001145c8(unsigned int *);


void FUN_0030d134(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055ad28;
  *(unsigned char *)(param_1 + 1) = 0;
  temp_v0 = FUN_001145c8(param_1 + 2);
  *(unsigned char **)(temp_v0 - 8) = &DAT_0055a884;
  return;
}

} /* extern "C" */
