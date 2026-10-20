#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_003a9148(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0014aa78();
  temp_v0 = *(int *)(temp_v0 + 0x4ce0);
  if (temp_v0 < 0) {
    temp_v0 = 0;
  }
  FUN_003283ac(temp_v0);
  return 1;
}

} /* extern "C" */
