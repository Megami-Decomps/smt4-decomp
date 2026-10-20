#include "romwright_types.h"

extern "C" {

int FUN_0030ee42(int);

extern int FUN_0030ee2c(void);
extern int FUN_0030ee34(void);
/* Supplied declaration required: FUN_0030ee42. */


unsigned int FUN_001240d2(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_0030ee42(param_1 + 4);
  temp_v0 = FUN_0030ee34();
  if (temp_v0 != 0) {
    return 0;
  }
  FUN_0030ee42(param_1 + 4);
  temp_v0 = FUN_0030ee2c();
  return *(unsigned int *)(temp_v0 + 8);
}

} /* extern "C" */
