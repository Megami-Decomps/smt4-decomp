#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

extern int FUN_0014aa78(void);
extern int FUN_00236038(void);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_003a8d8c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_0014aa78();
  FUN_003283ac(*(short *)(temp_v1 + 0x2006) <= temp_v0);
  return 1;
}

} /* extern "C" */
