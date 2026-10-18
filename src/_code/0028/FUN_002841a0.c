/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002841a0` (_code @ 0x2841a0, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b47cc(unsigned short);
extern int FUN_002b66ec(void);


void FUN_002841a0(unsigned int *param_1,int param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_002b66ec();
  *param_1 = *(unsigned int *)(temp_v0 + 0x34);
  param_1[1] = *(unsigned int *)(temp_v0 + 0x38);
  param_1[2] = *(unsigned int *)(temp_v0 + 0x3c);
  param_1[3] = *(unsigned int *)(temp_v0 + 0x40);
  if ((param_2 != 0) && (temp_v0 = FUN_002b47cc(*(unsigned short *)(temp_v0 + 0xc)), temp_v0 != 0)) {
    *(unsigned short *)(param_1 + 4) = *(unsigned short *)(temp_v0 + 0x6a);
  }
  return;
}
