#include "romwright_types.h"

extern "C" {

int FUN_003f2498(unsigned int, int);

extern unsigned int btlGetMainState(void);
/* Supplied declaration required: FUN_003f2498. */


unsigned int FUN_0038110c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = btlGetMainState();
  FUN_003f2498(temp_v0,0x100002b);
  return 1;
}

} /* extern "C" */
