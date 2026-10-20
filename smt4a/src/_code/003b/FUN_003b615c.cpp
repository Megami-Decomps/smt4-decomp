/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b615c` (_code @ 0x3b615c, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00187168(void);
extern int FUN_003e4d68(unsigned int);


int FUN_003b615c(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0;
  while( 1 ) {
    temp_v0 = FUN_003e4d68(temp_v2 & 0xffff);
    temp_v1 = FUN_00187168();
    if ((temp_v1 != 0) && (*(unsigned short *)(temp_v0 + 0x62) == param_1)) break;
    temp_v2 = temp_v2 + 1;
    if ((int)temp_v2 >= 0xc) {
      return 0;
    }
  }
  return temp_v0;
}

} /* extern "C" */
