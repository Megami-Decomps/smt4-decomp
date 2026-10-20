/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e4de4` (_code @ 0x3e4de4, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameGetSlotTable(void);


unsigned int FUN_003e4de4(unsigned int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  do {
    if ((temp_v1 & 0xffff) < 0xc) {
      temp_v0 = gameGetSlotTable();
      temp_v0 = temp_v0 + (temp_v1 & 0xffff) * 0x134;
      if (((temp_v0 != -0x1ddc) && ((*(unsigned int *)(temp_v0 + 0x1f0c) & 1) != 0)) &&
         (*(unsigned short *)(temp_v0 + 0x1e3e) == param_1)) {
        return 1;
      }
    }
    temp_v1 = temp_v1 + 1;
    if ((int)temp_v1 >= 0xc) {
      return 0;
    }
  } while( 1 );
}

} /* extern "C" */
