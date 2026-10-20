#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

/* Supplied declaration required: FUN_003283ac. */
extern int FUN_004ee568(unsigned int);


unsigned int FUN_003caae8(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_004ee568(*param_1);
  if (*(int *)(*(int *)(temp_v0 + 0x20) + 0xb0) > 0) {
    FUN_003283ac(1);
  }
  else {
    FUN_003283ac(0 < *(int *)(*(int *)(temp_v0 + 0x20) + 0xb8));
  }
  return 1;
}

} /* extern "C" */
