/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002452a8` (_code @ 0x2452a8, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002b6b20(void);


void FUN_002452a8(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = FUN_002b6b20();
  if (((*(unsigned short *)(temp_v1 + 0x608) & 1) == 0) && (*(unsigned short *)(temp_v1 + 0x60a) != param_1)) {
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0x60c);
    if (temp_v2 != param_1) {
      param_4 = (unsigned int)*(unsigned short *)(temp_v1 + 0x60e);
    }
    if (temp_v2 != param_1 && param_4 != param_1) {
      temp_v0 = (unsigned short)param_1;
      if (*(unsigned short *)(temp_v1 + 0x60a) == 0) {
        *(unsigned short *)(temp_v1 + 0x60a) = temp_v0;
      }
      else if (temp_v2 == 0) {
        *(unsigned short *)(temp_v1 + 0x60c) = temp_v0;
      }
      else if (param_4 == 0) {
        *(unsigned short *)(temp_v1 + 0x60e) = temp_v0;
      }
    }
  }
  return;
}

} /* extern "C" */
