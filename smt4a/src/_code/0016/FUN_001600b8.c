/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001600b8` (_code @ 0x1600b8, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *DAT_005b40e8; /* 0x5b40e8 */

extern int FUN_0017cd48(void);


unsigned int FUN_001600b8(int *param_1)

{
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  DAT_005b40e8 = param_1;
  temp_v0 = FUN_0017cd48();
  if (temp_v0 == 0) {
    temp_v1 = 0xffffffff;
  }
  else {
    *(unsigned int *)(temp_v0 + 0x20) = 0;
    *(unsigned int *)(temp_v0 + 0x24) = 0;
    piVar1 = DAT_005b40e8;
    temp_v1 = 0;
    *DAT_005b40e8 = temp_v0;
    piVar1[1] = 0;
    piVar1[2] = temp_v0;
    piVar1[3] = 0;
  }
  return temp_v1;
}
