/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c6ce0` (_code @ 0x2c6ce0, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00283e48(void);

/* Supplied declaration required: FUN_00283e48. */


int FUN_002c6ce0(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = (unsigned int)*param_1;
  FUN_00283e48();
  temp_v1 = (unsigned int)*param_2;
  FUN_00283e48();
  temp_v2 = 1;
  temp_v3 = 1;
  if ((*(unsigned int *)(temp_v0 + 0x38) & 0xfffff) >> 0x10 == 6) {
    temp_v2 = 2;
  }
  if ((*(unsigned int *)(temp_v1 + 0x38) & 0xfffff) >> 0x10 == 6) {
    temp_v3 = 2;
  }
  return temp_v3 - temp_v2;
}

} /* extern "C" */
