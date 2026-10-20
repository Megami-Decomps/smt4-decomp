#include "romwright_types.h"

extern "C" {

int FUN_00187180(int, int);

/* Supplied declaration required: FUN_00187180. */
extern int FUN_00192798(void);


int FUN_00319acc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_00187180(0x4a,3);
  temp_v0 = FUN_00192798();
  return temp_v0 + param_1 * 4;
}

} /* extern "C" */
