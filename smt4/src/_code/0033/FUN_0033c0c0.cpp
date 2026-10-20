#include "romwright_types.h"

extern "C" {

int FUN_002b9024(unsigned int);

/* Supplied declaration required: FUN_002b9024. */


unsigned short FUN_0033c0c0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002b9024(*(unsigned short *)(param_1 + 0x46));
  return *(unsigned short *)(temp_v0 + 0x2a);
}

} /* extern "C" */
