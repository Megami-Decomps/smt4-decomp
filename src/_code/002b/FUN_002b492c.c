/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b492c` (_code @ 0x2b492c, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_002b492c(unsigned int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = 0;
  while( 1 ) {
    if ((*(unsigned int *)(temp_v0 * 0xc + 0x404378) <= param_1) &&
       (param_1 <= *(unsigned int *)(temp_v0 * 0xc + 0x40437c))) {
      return temp_v0 * 0xc + 0x404378;
    }
    temp_v1 = *(unsigned int *)(temp_v0 * 0xc + 0x404384);
    temp_v3 = param_1 <= temp_v1;
    temp_v2 = temp_v1 == param_1;
    if (!temp_v3 || temp_v2) {
      temp_v1 = *(unsigned int *)(temp_v0 * 0xc + 0x404388);
      temp_v3 = temp_v1 <= param_1;
      temp_v2 = param_1 == temp_v1;
    }
    if (!temp_v3 || temp_v2) break;
    temp_v0 = temp_v0 + 2;
    if (temp_v0 >= 0xc) {
      return 0;
    }
  }
  return temp_v0 * 0xc + 0x404384;
}
