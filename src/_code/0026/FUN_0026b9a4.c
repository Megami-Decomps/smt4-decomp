/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026b9a4` (_code @ 0x26b9a4, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b66ec(void);


unsigned int FUN_0026b9a4(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = FUN_002b66ec();
  temp_v1 = 0;
  while( 1 ) {
    temp_v2 = temp_v0 + temp_v1 * 2;
    temp_v3 = *(unsigned short *)(temp_v2 + 0x34) != param_1;
    if (temp_v3) {
      temp_v2 = (unsigned int)*(unsigned short *)(temp_v2 + 0x36);
    }
    if (!temp_v3 || temp_v2 == param_1) break;
    temp_v1 = temp_v1 + 2;
    if (temp_v1 >= 8) {
      return 0;
    }
  }
  return 1;
}
