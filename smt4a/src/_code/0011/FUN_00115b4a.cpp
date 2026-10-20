#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int FUN_0030161c(int *);


unsigned int FUN_00115b4a(int *param_1)

{
  int temp_v0;
  
  (**(romwright_code **)(*param_1 + 0x3c))(param_1);
  temp_v0 = FUN_0030161c(param_1);
  if (temp_v0 != 4) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
