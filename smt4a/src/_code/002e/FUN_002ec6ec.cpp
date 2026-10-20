/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ec6ec` (_code @ 0x2ec6ec, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00559e44; /* 0x559e44 */

extern unsigned int *FUN_002ea6e8(void);
extern int FUN_002ec75c(unsigned int *);


void FUN_002ec6ec(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002ea6e8();
  *puVar1 = (unsigned int)&DAT_00559e44;
  temp_v0 = FUN_002ec75c(puVar1 + 3);
  *(unsigned int *)(temp_v0 + 0x1c) = param_3;
  *(unsigned int *)(temp_v0 + 0x18) = param_2;
  return;
}

} /* extern "C" */
