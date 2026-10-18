/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003db814` (_code @ 0x3db814, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0027dc58(unsigned int, unsigned int);
extern unsigned int FUN_00293c98(void);


void FUN_003db814(int param_1,int param_2,unsigned int param_3)

{
  unsigned int temp_v0;
  int temp_v1;
  
  if ((*(unsigned int *)(param_2 + 0x50) & 0x20000) == 0) {
    temp_v1 = 0;
    while (-1 < *(int *)(param_1 + temp_v1 * 0x30 + 0x1398)) {
      temp_v1 = temp_v1 + 1;
      if (temp_v1 >= 0x32) {
        return;
      }
    }
    temp_v0 = FUN_00293c98();
    temp_v0 = FUN_0027dc58(temp_v0,param_3);
    param_1 = param_1 + temp_v1 * 0x30;
    *(unsigned int *)(param_1 + 0x1398) = param_3;
    *(unsigned int *)(param_1 + 0x139c) = temp_v0;
  }
  return;
}
