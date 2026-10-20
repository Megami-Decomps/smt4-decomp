#include "romwright_types.h"

extern "C" {

int FUN_00324c78(...);
int FUN_003283ac(int);

extern unsigned int FUN_00236038(void);
/* Supplied declaration required: FUN_00324c78. */
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_00330d7c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_00324c78();
  if ((temp_v1 != 3) && (temp_v1 = FUN_00324c78(temp_v0), temp_v1 != 0)) {
    FUN_003283ac(0);
    return 1;
  }
  FUN_003283ac(1);
  return 1;
}

} /* extern "C" */
