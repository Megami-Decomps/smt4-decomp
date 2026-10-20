/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b60c0` (_code @ 0x3b60c0, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned int);
extern unsigned int requestIdToCode(int);


void FUN_003b60c0(int param_1,int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  
  if (param_1 != 0) {
    temp_v0 = requestIdToCode(param_2);
    temp_v1 = asdTMTexTableNodeIsLoaded(0x2e,temp_v0);
    if (temp_v1 == 0) {
      param_1 = param_1 + param_2 * 4;
      temp_v1 = *(int *)(param_1 + 0x94);
      if ((temp_v1 != 3) && (temp_v1 != 2)) {
        *(unsigned int *)(param_1 + 0x94) = 1;
      }
    }
    return;
  }
  return;
}

} /* extern "C" */
