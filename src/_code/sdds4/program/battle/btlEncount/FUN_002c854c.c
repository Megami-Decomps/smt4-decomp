/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c854c` (_code @ 0x2c854c, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00434290; /* 0x434290 */
extern int DAT_004342c8; /* 0x4342c8 */
extern int DAT_00435d18; /* 0x435d18 */
extern int DAT_00435d30; /* 0x435d30 */

extern int FUN_002bf41c(unsigned int);


unsigned int FUN_002c854c(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002bf41c(*(unsigned int *)(param_1 + 8));
  if ((((temp_v0 != 0) && (DAT_00435d30 != 0)) && (DAT_00434290 != 0)) &&
     ((DAT_00435d18 != 0 && (DAT_004342c8 != 0)))) {
    if ((*(unsigned int *)(DAT_004342c8 + 0x634) & 0x80000) != 0) {
      return 0;
    }
    if ((*(unsigned int *)(DAT_00435d30 + 0xc) & 4) == 0) {
      return 0;
    }
  }
  return 1;
}
