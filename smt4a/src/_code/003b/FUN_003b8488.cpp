#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

/* Supplied declaration required: FUN_003283ac. */
extern int FUN_003389d0(unsigned int, unsigned int);
extern int FUN_004ee568(unsigned int);


unsigned int FUN_003b8488(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_004ee568(*param_1);
  temp_v0 = FUN_003389d0(*(unsigned int *)(temp_v0 + 0x24),0x40000);
  FUN_003283ac(temp_v0 != 0);
  return 1;
}

} /* extern "C" */
