/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00437e50` (_code @ 0x437e50, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00437cac(unsigned int, unsigned short, unsigned short);


unsigned int FUN_00437e50(unsigned int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(param_2 + 4);
  while( 1 ) {
    if (temp_v1 == param_2) {
      return 1;
    }
    temp_v0 = FUN_00437cac(param_1,*(unsigned short *)(temp_v1 + 8),*(unsigned short *)(temp_v1 + 10));
    if (temp_v0 == 0) break;
    temp_v1 = *(int *)(temp_v1 + 4);
  }
  return 0;
}

} /* extern "C" */
