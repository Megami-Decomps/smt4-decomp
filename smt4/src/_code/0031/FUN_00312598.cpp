#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);

/* Supplied declaration required: btlGetMainState. */
extern int btlEncountTryFinish(void);


unsigned char FUN_00312598(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  btlGetMainState();
  temp_v0 = btlEncountTryFinish();
  return temp_v0 != 0;
}

} /* extern "C" */
