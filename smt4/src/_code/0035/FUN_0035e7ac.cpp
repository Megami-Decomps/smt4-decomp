/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035e7ac` (_code @ 0x35e7ac, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002387f8(unsigned int, unsigned short, unsigned short);


unsigned int FUN_0035e7ac(unsigned int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(param_2 + 4);
  while( 1 ) {
    if (temp_v1 == param_2) {
      return 1;
    }
    temp_v0 = FUN_002387f8(param_1,*(unsigned short *)(temp_v1 + 8),*(unsigned short *)(temp_v1 + 10));
    if (temp_v0 == 0) break;
    temp_v1 = *(int *)(temp_v1 + 4);
  }
  return 0;
}

} /* extern "C" */
