#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

extern int FUN_00162e8c(void);
extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_003b6e04(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00162e8c();
  temp_v1 = FUN_00236038(0);
  FUN_003283ac(*(short *)(temp_v0 + temp_v1 * 2 + 0xd90) == 0);
  return 1;
}

} /* extern "C" */
