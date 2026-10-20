#include "romwright_types.h"

extern "C" {

int FUN_003100f4(void);

extern int FUN_002c5c04(void);
/* Supplied declaration required: FUN_003100f4. */


void FUN_00263c1c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002c5c04();
  temp_v1 = FUN_003100f4();
  *(int *)(temp_v1 + 0x14) = temp_v0;
  return;
}

} /* extern "C" */
