#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

extern int FUN_0027e928(unsigned int);
/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002d1974(unsigned int, unsigned int);


unsigned int FUN_003184dc(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0027e928(*param_1);
  temp_v0 = FUN_002d1974(*(unsigned int *)(temp_v0 + 0x24),0x20000);
  FUN_0028dcb0(temp_v0 != 0);
  return 1;
}

} /* extern "C" */
