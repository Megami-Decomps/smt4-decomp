#include "romwright_types.h"

extern "C" {

int FUN_003283ac(unsigned int);

extern int FUN_0014aa78(void);
extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_00373eec(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0014aa78();
  temp_v1 = FUN_00236038(0);
  FUN_003283ac(*(unsigned int *)(temp_v0 + temp_v1 * 4 + 0x23a4));
  return 1;
}

} /* extern "C" */
