/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dc108` (_code @ 0x3dc108, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_00324bb8(unsigned int, unsigned int, unsigned char, unsigned int);


void FUN_003dc108(int param_1,unsigned int param_2,unsigned int param_3,int param_4,unsigned int param_5)

{
  unsigned int temp_v0;
  
  temp_v0 = FUN_00324bb8(param_3,param_2,param_4 != 0,param_5);
  *(unsigned int *)(param_1 + 0x1cfc) = temp_v0;
  return;
}

} /* extern "C" */
