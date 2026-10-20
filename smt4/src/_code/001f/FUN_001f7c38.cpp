#include "romwright_types.h"

extern "C" {

extern int FUN_002b2378(unsigned int);


unsigned int FUN_001f7c38(unsigned int *param_1)

{
  int temp_v0;
  
  param_1 = (unsigned int *)*param_1;
  if ((param_1 != (unsigned int *)0x0) &&
     ((temp_v0 = FUN_002b2378(*param_1), temp_v0 != 0 || (*(char *)(param_1 + 1) == '\0')))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
