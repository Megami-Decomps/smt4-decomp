#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

extern int FUN_0027d98c(void);
/* Supplied declaration required: FUN_0028dcb0. */


unsigned int FUN_0030b58c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0027d98c();
  FUN_0028dcb0(temp_v0 == 4);
  return 1;
}

} /* extern "C" */
