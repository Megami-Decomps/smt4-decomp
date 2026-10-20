/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035f9cc` (_code @ 0x35f9cc, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int btlGetMainState(void);
extern unsigned int scrGetArg(void);


unsigned int FUN_0035f9cc(void)

{
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = btlGetMainState();
  *(unsigned int *)(temp_v1 + 0x4cc8) = *(unsigned int *)(temp_v1 + 0x4cc8) | (1 << (temp_v0 & 0xff));
  return 1;
}

} /* extern "C" */
