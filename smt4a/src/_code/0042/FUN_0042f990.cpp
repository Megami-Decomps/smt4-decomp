/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042f990` (_code @ 0x42f990, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0042d3d8(int, int);
int FUN_00430858(unsigned int, unsigned int, unsigned int, unsigned int);

extern unsigned char DAT_005b448b; /* 0x5b448b */

/* Supplied declaration required: FUN_0042d3d8. */
/* Supplied declaration required: FUN_00430858. */


void FUN_0042f990(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00430858(param_2,param_3,param_4,param_5);
  if ((temp_v0 < 0) && (temp_v0 == -0x375ef410)) {
    FUN_0042d3d8(1,0);
    (*(unsigned char *)((unsigned char *)&DAT_005b448b + 0x1)) = 1;
    FUN_00430858(param_2,param_3,param_4,param_5);
  }
  return;
}

} /* extern "C" */
