/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00358af0` (_code @ 0x358af0, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00238d3c(int, int);
int FUN_00359984(unsigned int, unsigned int, unsigned int, unsigned int);

extern unsigned char DAT_004656d0; /* 0x4656d0 */

/* Supplied declaration required: FUN_00238d3c. */
/* Supplied declaration required: FUN_00359984. */


void FUN_00358af0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00359984(param_2,param_3,param_4,param_5);
  if ((temp_v0 < 0) && (temp_v0 == -0x375ef410)) {
    FUN_00238d3c(1,0);
    (*(unsigned char *)((unsigned char *)&DAT_004656d0 + 0x1)) = 1;
    FUN_00359984(param_2,param_3,param_4,param_5);
  }
  return;
}

} /* extern "C" */
