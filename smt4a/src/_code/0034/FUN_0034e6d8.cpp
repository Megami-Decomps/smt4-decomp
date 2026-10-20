#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

extern int FUN_001801a4(void);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_0034e6d8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_001801a4();
  FUN_003283ac((int)*(short *)(temp_v0 + 0x2c));
  return 1;
}

} /* extern "C" */
