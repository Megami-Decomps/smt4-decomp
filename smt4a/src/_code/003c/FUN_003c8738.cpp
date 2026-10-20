/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c8738` (_code @ 0x3c8738, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned int);
extern unsigned int FUN_002adba8(int);


unsigned int FUN_003c8738(int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (param_1 == 0) {
    return 0;
  }
  temp_v2 = 0;
  do {
    if (*(int *)(param_1 + temp_v2 * 4 + 0x94) == 2) {
      temp_v0 = FUN_002adba8(temp_v2);
      temp_v1 = asdTMTexTableNodeIsLoaded(0x2e,temp_v0);
      if (temp_v1 == 0) {
        return 0;
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 9);
  return 1;
}

} /* extern "C" */
