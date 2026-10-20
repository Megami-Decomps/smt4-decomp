#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

extern int FUN_001b4aa0(void);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_0039dc50(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_001b4aa0();
  FUN_003283ac(temp_v0 == 4);
  return 1;
}

} /* extern "C" */
