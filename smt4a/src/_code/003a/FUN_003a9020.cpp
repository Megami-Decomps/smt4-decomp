#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_003a9020(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0014aa78();
  FUN_003283ac((int)*(short *)(temp_v0 + 0x4c72));
  return 1;
}

} /* extern "C" */
