/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ed074` (_code @ 0x2ed074, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00559134; /* 0x559134 */

extern unsigned int *FUN_0010d51c(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_002eb56c(void);


void FUN_002ed074(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_002eb56c();
  puVar2 = (unsigned int *)FUN_0010d51c(param_1,param_2,temp_v0);
  *puVar2 = (unsigned int)&DAT_00559134;
  return;
}

} /* extern "C" */
