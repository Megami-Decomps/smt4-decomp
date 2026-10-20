/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039a3b4` (_code @ 0x39a3b4, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001acf98(int, unsigned int);

extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001acf98. */
extern unsigned int requestIdToCode(int);


void FUN_0039a3b4(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (param_1 == 0) {
    return;
  }
  temp_v0 = requestIdToCode(param_2);
  temp_v1 = asdTMTexTableNodeIsLoaded(0x2e,temp_v0);
  if (temp_v1 == 0) {
    param_1 = param_1 + param_2 * 4;
    temp_v1 = *(int *)(param_1 + 0x94);
    if ((temp_v1 != 3) && (temp_v1 != 2)) {
      temp_v0 = requestIdToCode(param_2);
      FUN_001acf98(0x2e,temp_v0);
      *(unsigned int *)(param_1 + 0x94) = 2;
    }
  }
  return;
}

} /* extern "C" */
