#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

extern int FUN_003248e4(unsigned int);
/* Supplied declaration required: FUN_003283ac. */
extern int FUN_004ee568(unsigned int);


unsigned int FUN_0037f744(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_004ee568(*param_1);
  temp_v0 = FUN_003248e4(*(unsigned int *)(temp_v0 + 0x20));
  if (temp_v0 != 0) {
    FUN_003283ac(1);
    return 1;
  }
  FUN_003283ac(0);
  return 1;
}

} /* extern "C" */
