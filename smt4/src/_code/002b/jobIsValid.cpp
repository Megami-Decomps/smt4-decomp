/* NON_MATCHING: romwright 0.5.0 decompilation of `jobIsValid` (_code @ 0x2bf244, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_asdProcess; /* 0x4e3cf4 */


unsigned int jobIsValid(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = *(int *)(g_asdProcess + (param_1 >> 0x14) * 8);
  while( 1 ) {
    if (temp_v0 == 0) {
      return 0;
    }
    if (*(unsigned int *)(temp_v0 + 0x28) == param_1) break;
    temp_v0 = *(int *)(temp_v0 + 0x4c);
  }
  return 1;
}

} /* extern "C" */
