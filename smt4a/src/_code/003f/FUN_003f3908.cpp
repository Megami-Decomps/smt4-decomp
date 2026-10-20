#include "romwright_types.h"

extern "C" {

int FUN_00184310(unsigned int);

/* Supplied declaration required: FUN_00184310. */


unsigned short FUN_003f3908(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00184310((unsigned int)*(unsigned short *)(param_1 + 0x62));
  return *(unsigned short *)(temp_v0 + 0x32);
}

} /* extern "C" */
