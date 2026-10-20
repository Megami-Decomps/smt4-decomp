/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103822` (_code @ 0x103822, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int streamReaderHasBytes(int, unsigned int);
extern int onlineBufferGetData(unsigned int);


int FUN_00103822(int param_1,unsigned short *param_2)

{
  int temp_v0;
  
  temp_v0 = streamReaderHasBytes(param_1,2);
  if (temp_v0 != 0) {
    temp_v0 = onlineBufferGetData(*(unsigned int *)(param_1 + 8));
    *param_2 = *(unsigned short *)(temp_v0 + *(int *)(param_1 + 0xc));
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 2;
  }
  else {
    *param_2 = 0;
  }
  return param_1;
}

} /* extern "C" */
