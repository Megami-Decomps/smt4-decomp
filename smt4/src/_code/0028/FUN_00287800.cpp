/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00287800` (_code @ 0x287800, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002b6b20(void);
extern int FUN_002b6b38(void);


unsigned int FUN_00287800(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002b6b38();
  if ((((temp_v0 != 0) && (temp_v0 != 1)) && (temp_v0 == 2)) &&
     ((temp_v0 = FUN_002b6b20(), (*(unsigned short *)(temp_v0 + 0x44) & 2) != 0 ||
      (*(short *)(temp_v0 + 0x2a) == 0)))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
