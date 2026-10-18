/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d9e58` (_code @ 0x4d9e58, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0019a7dc(void);


void FUN_004d9e58(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = FUN_0019a7dc();
  if (((*(unsigned short *)(temp_v1 + 0x130) & 1) == 0) && (*(unsigned short *)(temp_v1 + 0x132) != param_1)) {
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0x134);
    if (temp_v2 != param_1) {
      param_4 = (unsigned int)*(unsigned short *)(temp_v1 + 0x136);
    }
    if (temp_v2 != param_1 && param_4 != param_1) {
      temp_v0 = (unsigned short)param_1;
      if (*(unsigned short *)(temp_v1 + 0x132) == 0) {
        *(unsigned short *)(temp_v1 + 0x132) = temp_v0;
      }
      else if (temp_v2 == 0) {
        *(unsigned short *)(temp_v1 + 0x134) = temp_v0;
      }
      else if (param_4 == 0) {
        *(unsigned short *)(temp_v1 + 0x136) = temp_v0;
      }
    }
  }
  return;
}
