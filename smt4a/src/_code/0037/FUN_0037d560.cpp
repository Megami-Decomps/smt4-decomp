#include "romwright_types.h"

extern "C" {

int FUN_003283ac(void);
int FUN_003857c8(int);

extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003857c8. */


unsigned int FUN_0037d560(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00162e8c();
  FUN_003857c8((int)*(float *)(temp_v0 + 0x15c4));
  FUN_003283ac();
  return 1;
}

} /* extern "C" */
