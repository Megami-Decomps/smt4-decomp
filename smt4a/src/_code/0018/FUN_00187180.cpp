#include "romwright_types.h"

extern "C" {

int FUN_001a6f60(unsigned int, unsigned int);
extern unsigned char DAT_005e2214[]; /* 0x5e2214 */

/* Supplied declaration required: FUN_001a6f60. */


void FUN_00187180(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_1 < 0x50) {
    temp_v0 = *(unsigned int *)(DAT_005e2214 + param_1 * 0x10 + 4);
  }
  else {
    temp_v0 = 0;
  }
  FUN_001a6f60(temp_v0,param_2);
  return;
}

} /* extern "C" */
