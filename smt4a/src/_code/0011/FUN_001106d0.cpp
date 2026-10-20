#include "romwright_types.h"

extern "C" {

int FUN_002fb3d8(...);

extern unsigned char DAT_005593a0; /* 0x5593a0 */

/* Supplied declaration required: FUN_002fb3d8. */


int FUN_001106d0(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_005593a0;
  temp_v0 = FUN_002fb3d8(param_1 + 1);
  temp_v0 = FUN_002fb3d8(temp_v0 + 0x1c);
  return temp_v0 - 0x20;
}

} /* extern "C" */
